/*
3. ������ �����, � ����� � ����� �����. ��������� ��������, ��� �������� �������������� ����� �
�������� �����. ���� ����� �����������, �� ��� ����� ���� ����� �� ������ ������� � ����� ��
���������� ������ �����, �� ������������. ���� ����� �� �����������, �� �������� ����������� ���
��.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

typedef struct stack {
	char bkt;
	int index;
	stack *next;
}*stackPointer;

void push(stackPointer &myStack, char sign, int index)
{
	stackPointer item = new stack;
	item->bkt = sign;
	item->index = index;
	item->next = myStack;
	myStack = item;
}

void enterList(stackPointer &myList, stackPointer &node) {
	node->next = myList;
	myList = node;
}

stackPointer pop(stackPointer &myStack)
{
	if (myStack == 0)
		return false;
	else {
		stackPointer node = myStack;
		myStack = myStack->next;
		return node;
	}
}

void print(stackPointer myStack)
{
	if (myStack == NULL)
		cout << "��� �� ������" << endl;
	stackPointer cursor = myStack;
	while (cursor != NULL) {
		cout << cursor->bkt << " " << cursor->index << endl;
		cursor = cursor->next;
	}
}

void main()
{
	setlocale(0, "");
	// ����������� �����
	string text;
	bool flag = true;
	stackPointer myStack;
	myStack = NULL;
	// ����������� ������ ����������
	stackPointer myList, node;
	myList = NULL;
	cout << "������ �����: " << endl;
	getline(cin, text);
	int len = text.length();
	for (int i = 0; i < len; i++) {
		if (text[i] == '(') {
			push(myStack, text[i], i);
		}
		if (text[i] == ')') {
			stackPointer s = new stack;
			if (myStack != NULL) {
				s = pop(myStack);
			}
			else {
				flag = false;
				break;
			}
			enterList(myList, s);
			node = new stack;
			node->bkt = text[i];
			node->index = i;
			node->next = NULL;
			enterList(myList, node);
		}
	}
	if (myStack != NULL) {
		flag = false;
	}
	if (flag == false) {
		cout << "����� �� �����������" << endl;
	}
	else {
		print(myList);
	}
	system("pause");
}
