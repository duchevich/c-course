/*
4. Організувати функцію для обчислення арифметичного виразу записаного в постфіксній формі.*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

typedef struct stack {
	int value;
	stack *next;
}*stackPointer;

void push(stackPointer &myStack, int value)
{
	stackPointer item = new stack;
	item->value = value;
	item->next = myStack;
	myStack = item;
}

int pop(stackPointer &myStack)
{
	if (myStack == 0)
		return false;
	else {
		int value;
		stackPointer node = myStack;
		myStack = myStack->next;
		value = node->value;
		delete node;
		return value;
	}
}

void print(stackPointer myStack)
{
	if (myStack == NULL)
		cout << "Дані не введені" << endl;
	stackPointer cursor = myStack;
	while (cursor != NULL) {
		cout << cursor->value << endl;
		cursor = cursor->next;
	}
}

void main()
{
	setlocale(0, "");
	// ініціалізація стека
	stackPointer myStack;
	myStack = NULL;
	char input[10];
	int val1, val2;
	cout << "Введіть вираз, вихід - 'q'" << endl;
	cin >> input;
	while (input[0] != 'q') {

		char c = input[0];
		switch (c) {
		case '+':
			val1 = pop(myStack);
			val2 = pop(myStack);
			val2 += val1;
			push(myStack, val2);
			break;
		case '-':
			val1 = pop(myStack);
			val2 = pop(myStack);
			val2 -= val1;
			push(myStack, val2);
			break;
		case '*':
			val1 = pop(myStack);
			val2 = pop(myStack);
			val2 *= val1;
			push(myStack, val2);
			break;
		case '/':
			val1 = pop(myStack);
			val2 = pop(myStack);
			if (val1 != NULL) {
				val2 /= val1;
			}
			else {
				cout << "Ділити на нуль не можна!" << endl;
				break;
			}
			push(myStack, val2);
			break;
		default:
			int val = atoi(input);
			push(myStack, val);

		}
		//cout << "-------------" << endl;
		//print(myStack);
		//cout << "-------------" << endl;
		cin >> input;
	}
	print(myStack);	
	system("pause");
}
