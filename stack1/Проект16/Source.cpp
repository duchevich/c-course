/*
1. �������� ���� �� ����� �����. ����������� ������� ��������� �����, ��������� � ��������� ��������
�����. ��������� ������������.
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
		cout << "���� �������, �������" << endl;
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
	cout << "������ � ������: ������ ������� - 'e', �������� ������� - 'd', ���� ����� - 'p', ����� - 'q'" << endl;
	char c = NULL;
	while (c == 'e' || c == 'd' || c == 'p' || c != 'q') {
		cin >> c;
		switch (c) {
		case 'e':
			cout << " ������ �����: " << endl;
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