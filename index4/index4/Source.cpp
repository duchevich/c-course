/*
4. На вході задано послідовність цілих додатних чисел менших 1000. Організувати послідовно-
зв’язане індексне зберігання з індексною функцією g(k)=1+(позиція вузла k-1)/10
*/

#include <iostream>

using namespace std;

#define N 101

typedef struct node {
	int value;
	int index;
	struct node *next;
}*nodePointer;


void generateList(nodePointer &myList)
{
	int n = 999;
	for (int i = 0; i < n; i++) {
		nodePointer nod = new node;
		nod->value = i + 1;
		nod->index = i;
		nod->next = myList;
		myList = nod;
	}
}


void createList(nodePointer &myList)
{
	char input[10];
	char c;
	int value = 0;
	int index = 0;
	cout << "Введіть списoк:" << endl;
	cin >> input;
	c = input[0];
	while (c != 'q') {
		value = atoi(input);
		if ((value <= 0) || (value > 999)) {
			cout << "Введіть трьохзначне число:" << endl;
		}
		else {
			nodePointer nod = new node;
			index++;
			nod->value = value;
			nod->index = index;
			nod->next = myList;
			myList = nod;
			}
		cin >> input;
		c = input[0];
	}
}


void initArr(nodePointer arr[N])
{
	for (int i = 0; i < N; i++) {
		arr[i] = NULL;
	}
}

void printList(nodePointer myList)
{
	nodePointer cursor;
	if (myList == NULL) {
		cout << "Дані не введені" << endl;
	}
	else {
		cursor = myList;
		while (cursor != NULL) {
			cout << cursor->index << ": " << cursor->value << " " << endl;
			cursor = cursor->next;
		}
	}
}

void indexList(nodePointer arr[N], nodePointer &myList)
{
	int i;
	while (myList != NULL) {
		i = 1 + (myList->index - 1)/ 10;
		if (arr[i] == NULL) {
			arr[i] = myList;
			myList = myList->next;
			arr[i]->next = NULL;

		}
		else {
			nodePointer cursor = arr[i];
			while (cursor != NULL) {
				if (cursor->next == NULL) {
					cursor->next = myList;
					cursor = cursor->next;
					myList = myList->next;
					cursor->next = NULL;
					break;
				}
				cursor = cursor->next;
			}
		}
	}
}

void printIndexList(nodePointer arr[N])
{
	nodePointer cursor;
	for (int i = 0; i < N; i++) {
		cout << i << ": ";
		if (arr[i] != NULL) {
			cursor = arr[i];
			while (cursor != NULL) {
				cout << cursor->value << " ";
				cursor = cursor->next;
			}
		}
		cout << endl;
	}
}

void main()
{
	setlocale(0, "");
	nodePointer myList = NULL;
	//createList(myList);
	generateList(myList);
	nodePointer arr[N];
	initArr(arr);
	indexList(arr, myList);
	printIndexList(arr);
	system("pause");
}