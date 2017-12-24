/*
3. �� ���� ������ ����������� ����� �������� �����, �� ����� 99, �� ����������� �����.
	����������� ���������-������� �������� ��������� ����������� ���, ��� �����, �� ����� ��������
	����� �����, ���� � ������ ��������
*/

#include <iostream>

using namespace std;

#define N 9

typedef struct node {
	int value;
	struct node *next;
}*nodePointer;


void createList(nodePointer &myList)
{
	char input[10];
	char c;
	int value = 0;
	cout << "������ ����o�:" << endl;
	cin >> input;
	c = input[0];
	while (c != 'q') {
		value = atoi(input);
		if ((value % 10 != 0) || (value <= 0) || (value > 99)) {
			cout << "������ ��������� �����, ������ 10:" << endl;
		}
		else {
			nodePointer nod = new node;
			nod->value = value;
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
		cout << "��� �� ������" << endl;
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

void indexList(nodePointer arr[N], nodePointer &myList)
{
	int i;
	while (myList != NULL) {
		i = myList->value / 10 - 1;
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
		cout << i + 1 << ": ";
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
	char input[10];
	nodePointer myList = NULL;
	createList(myList);
	nodePointer arr[N];
	initArr(arr);
	indexList(arr, myList);
	printIndexList(arr);
	system("pause");
}