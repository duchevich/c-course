/*
1. Створити стек із цілих чисел. Організувати функції створення стеку, додавання і вилучення елементу
стеку. Результат роздрукувати.
*/

#include <iostream>
using namespace std;
#define N 100

typedef struct stack {
	int st[N];
	int ind;
}*stackp;

void init(stackp myStack)
{
	myStack->ind = 0;
}
void push(stackp myStack, int x)
{
	myStack->st[myStack->ind] = x;
	myStack->ind++;
}
int pop(stackp myStack)
{
	if (myStack->ind == 0) {
		cout << "Стек порожній, помилка" << endl;
		return -1;
	}
	int val = myStack->st[myStack->ind];
	myStack->ind--;
	return val;
}
void print(stackp myStack)
{
	for (int i = 0; i < myStack->ind; i++) {
		cout << myStack->st[i] << " " << endl;
	}
}

void main()
{
	setlocale(0, "");
	char input[10];
	int val = 0;
	stackp myStack = new stack;
	init(myStack);
	cout << "Робота з стеком: ввести елемент - 'e', видалити елемент - 'd', друк стеку - 'p', вихід - 'q'" << endl;
	char c = NULL;
	while (c == 'e' || c == 'd' || c == 'p' || c != 'q') {
		cin >> c;
		switch (c) {
		case 'e':
			cout << " Введіть число: " << endl;
			cin >> input;
			val = atoi(input);
			push(myStack, val); 
			break;
		case 'd':
			pop(myStack); break;
		case 'p':
			print(myStack); break;
		default:
			break;
		}
	}
	system("pause");
}