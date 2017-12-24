/*
	10. Задано дійсні числа x1, x2, …, xn (n2 і заздалегідь невідомо). Обчислити: (x1 + xn) (x2 + xn-1) ... 
	(xn + x1) і (x1 + x2 + 2xn) (x2 + x3 + 2xn-1) ... (xn-1 + xn + 2x2).
*/

#include<iostream>

using namespace std;

typedef struct node {
	float value;
	struct node *next;
	struct node *prev;
} *nodePointer;

void enterList(nodePointer &beginNode, nodePointer &endNode)
{
	nodePointer item;
	endNode = new node;
	beginNode = endNode;
	cout << "Введiть елементи списку." << endl;
	char input[10];
	cout << "число: ";
	cin >> input;
	endNode->value = atof(input);
	endNode->prev = NULL;
	endNode->next = NULL;
	char c;
	cout << "буде наступний елемент? (Y/N) "; 
	cin >> c;
	// заповнення списку
	while ((c == 'y') || (c == 'Y')) {
		cout << "число: ";
		item = new node;
		cin >> input;
		item->value = atof(input);
		item->next = NULL;
		item->prev = endNode;
		endNode->next = item;
		endNode = item;
		cout << "буде наступний елемент? (Y/N) "; 
		cin >> c;
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
void printReverseList(nodePointer myList)
{
	nodePointer cursor;
	if (myList == NULL) {
		cout << "Дані не введені" << endl;
	}
	else {
		cursor = myList;
		while (cursor != NULL) {
			cout << cursor->value << " ";
			cursor = cursor->prev;
		}
		cout << endl;
	}
}
float form1(nodePointer beginNode, nodePointer endNode)
{
	nodePointer cursorBegin, cursorEnd;
	cursorBegin = beginNode;
	cursorEnd = endNode;
	float result = 1;

	while (cursorBegin != NULL) {
		result *= (cursorBegin->value + cursorEnd->value);
		cursorBegin = cursorBegin->next;
		cursorEnd = cursorEnd->prev;
	}
	return result;
}
float form2(nodePointer beginNode, nodePointer endNode)
{
	nodePointer cursorBegin, cursorEnd;
	cursorBegin = beginNode;
	cursorEnd = endNode;
	float result = 1;

	while (cursorBegin->next != NULL) {
		result *= (cursorBegin->value + cursorBegin->next->value + 2 * cursorEnd->value);
		cursorBegin = cursorBegin->next;
		cursorEnd = cursorEnd->prev;
	}
	return result;
}


void main()
{
	setlocale(0, "");
	nodePointer myListBegin, myListEnd;
	float res1, res2;
	myListBegin = 0;
	myListEnd = 0;
	enterList(myListBegin, myListEnd);
	printList(myListBegin);
	printReverseList(myListEnd);
	res1 = form1(myListBegin, myListEnd);
	res2 = form2(myListBegin, myListEnd);
	cout << res1 << endl;
	cout << res2 << endl;
	system("pause");
}