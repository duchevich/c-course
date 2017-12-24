/*
2. Організувати перевірку збалансованості дужок при вводі виразу за допомогою стеку. Дужки можуть
бути різні: ( ), [ ], { }.
*/

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>

using namespace std;

#define N 100

typedef struct stack {
	char sign[N];
	int index;
}*stackPointer;

void init(stackPointer myStack)
{
	myStack->index = 0;
}

void push(stackPointer myStack, char sign)
{
	myStack->sign[myStack->index] = sign;
	myStack->index++;
}
char pop(stackPointer myStack)
{
	if (myStack->index == 0) {
		cout << "Стек порожній" << endl;
		return -1;
	}
	char val = myStack->sign[myStack->index-1];
	myStack->index--;
	return val;
}

void print(stackPointer myStack)
{
	for (int i = 0; i < myStack->index; i++) {
		cout << myStack->sign[i] << " " << endl;
	}
}

void main()
{
	setlocale(0, "");
	stackPointer myStack = new stack;
	init(myStack);
	string text;
	char s;
	bool flag = true;
	cout << "Введіть текст: " << endl;
	getline(cin, text);
	int len = text.length();
	for (int i = 0; i < len; i++) {
		if (text[i] == '(' || text[i] == '[' || text[i] == '{')
			push(myStack, text[i]);
		if (text[i] == ')' || text[i] == ']' || text[i] == '}') {
			switch (text[i]) {
				case ')':
				{
					s = pop(myStack);
					if (s != '(') flag = false;
					break;
				}
				case ']':
				{
					s = pop(myStack);
					if (s != '[') flag = false;
					break;
				}
				case '}':
				{
					s = pop(myStack);
					if (s != '{') flag = false;
					break;
				}
			}

			if (flag == false) {
				cout << "Дужки не збалансовані" << endl;
				break;
			}
		}
	}
	print(myStack);
	system("pause");
}
