/*
6.
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>

using namespace std;

#define N 26

typedef struct node {
	string english;
	string ukr;
	int freq;
	struct node *next;
}*nodePointer;

void initArr(nodePointer arr[N])
{
	for (int i = 0; i < N; i++) {
		arr[i] = NULL;
	}
}

void createDict(nodePointer dict[N])
{
	char num[10];
	string eng, ukr;
	int freq, i;
	cout << "¬вед≥ть словник('0' - вих≥д)" << endl;
	while (true) {
		cout << "¬вед≥ть англ≥йське слово" << endl;
		cin >> eng;
		if (eng[0] == '0') {
			break;
		}
		cout << "¬вед≥ть украњнський переклад" << endl;
		cin >> ukr;
		cout << "¬вед≥ть частоту використанн€" << endl;
		cin >> num;
		freq = atoi(num);
		nodePointer word = new node;
		word->english = eng;
		word->ukr = ukr;
		word->freq = freq;
		word->next = NULL;
		i = tolower(word->english[0]) - 97;
		if (dict[i] == NULL) {
			dict[i] = word;
			dict[i]->next = NULL;
		}
		else {
			if (word->freq > dict[i]->freq) {
				word->next = dict[i];
				dict[i] = word;
			}
			else {
				nodePointer cursor = dict[i];
				while (cursor != NULL) {
					if (cursor->next != NULL && word->freq > cursor->next->freq) {
						word->next = cursor->next;
						cursor->next = word;
						break;
					}
					if (cursor->next == NULL) {
						cursor->next = word;
						break;
					}
					cursor = cursor->next;
				}
			}
		}
	}
}
	
void translate(nodePointer arr[N], string str)
{
	int i;
	char separ[] = " ,.!?;:";
	char *ptr = NULL;
	char *text = &str[0];
	ptr = strtok(text, separ);
	while (ptr != NULL) {
		i = tolower(ptr[0]) - 97;
		nodePointer cursor = arr[i];
		while (cursor != NULL) {
			if (cursor->english == ptr) {
				cout << cursor->ukr << " ";
				break;
			}
			cursor = cursor->next;
		}
		if (cursor == NULL) {
			cout << ptr << " ";
		}
		ptr = strtok(NULL, separ);
	}
}

void printDict(nodePointer arr[N])
{
	nodePointer cursor;
	for (int i = 0; i < N; i++) {
		cout << i << ": ";
		if (arr[i] != NULL) {
			cursor = arr[i];
			while (cursor != NULL) {
				cout << cursor->english << " " << cursor->ukr << " " << cursor->freq << " " << endl;;
				cursor = cursor->next;
			}
		}
		cout << endl;
	}
}

void main()
{
	setlocale(0, "");
	nodePointer dict[N];
	initArr(dict);
	createDict(dict);
	cout << "¬вед≥ть реченн€ англ≥йською мовою" << endl;
	string str;
	cin.ignore();
	getline(cin, str);
	translate(dict, str);
	system("pause");
}
