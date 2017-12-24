/*
1. Нехай задано два списки цілих чисел: { , ,..., } M  m1 m2 m1000 i N {n1 ,n2 ,...,n1000}. Відомо, що не
більше 90% елементів списку М рівні нулю. Скласти програму для обчислення скалярного добутку цих векторів.
*/

#include <iostream>

using namespace std;

#define N 1000

typedef struct node {
	int value;
	int index;
	struct node *next;
}*nodePointer;


void createList(nodePointer &myList, int qlt)
{
	char input[10];
	int value = 0;
	cout << "Введіть списoк:" << endl;
	for (int i = 0; i < qlt; i++) {
		cin >> input;
		value = atoi(input);
		if (value != 0) {
			nodePointer nod = new node;
			nod->value = value;
			nod->index = i;
			nod->next = myList;
			myList = nod;
		}
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
			cout << cursor->value << " ";
			cursor = cursor->next;
		}
		cout << endl;
	}
}

int scalarDob(nodePointer myList1, nodePointer myList2, int qlt)
{
	nodePointer cursor1;
	nodePointer cursor2;
	int count = 0;
	int result = 0;
	int arr[N];
	if (myList1 == NULL || myList2 == NULL) {
		cout << "Дані не введені" << endl;
	}
	else {
		cursor1 = myList1;
		cursor2 = myList2;
		for(int i = 0; i < qlt; i++){
			if ((cursor1->index == i) && (cursor2->index == i)) {
				arr[count] = cursor1->value * cursor2->value;
				count++;
			}
			if (cursor1->index == i) {
				cursor1 = cursor1->next;
			}
			if (cursor2->index == i) {
				cursor2 = cursor2->next;
			}
		}
	}
	for (int j = 0; j < count; j++) {
		result += arr[j];
	}
	return result;
}

void main()
{
	setlocale(0, "");
	int qlt = 0;
	char input[10];
	cout << "Введіть розмір списку" << endl;
	cin >> input;
	qlt = atoi(input);
	nodePointer myList1 = NULL;
	nodePointer myList2 = NULL;
	createList(myList1, qlt);
	createList(myList2, qlt);
	int res = scalarDob(myList1, myList2, qlt);
	cout << res << endl;
	system("pause");
}
