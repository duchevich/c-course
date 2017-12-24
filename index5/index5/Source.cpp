/*
5. Нехай задано послідовність цілих додатних чисел, не більших за 9999, що закінчується нулем.
Написати програму для введення цієї послідовності та організації її послідовно-зв’язаного індексного
зберігання так, щоб числа, які мають однакові дві останні цифри, були в одному підсписку. За індексну
функцію візьмемо g(k) = k % 100 .
*/

#include <iostream>

using namespace std;

#define N 100

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
		nod->value = (i + 1) * 10;
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
		i = myList->value % 100;
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