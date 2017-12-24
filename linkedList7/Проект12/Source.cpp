/*
7. Дана послідовність символів, що закінчується крапкою. Видалити всі символи, у яких рівні сусіди 
	(перший і останній символи вважати за сусідів) і переставити в зворотному порядку всі символи між першим і останнім входженнями заданого символу.
*/

#include <iostream>

using namespace std;

typedef struct list
{
	char sign;
	struct list *prev;
	struct list *next;
}listName, *listPointer;

void enterList(listPointer &firstNode, listPointer &lastNode){
	listPointer item;
	lastNode = new list;
	firstNode = lastNode;
	cout << "Введiть елементи списку. Крапка - кінець вводу" << endl;
	cin >> lastNode->sign;
	lastNode->prev = NULL;
	lastNode->next = NULL;
	char c = lastNode->sign;
	while ((c != '.')) {
		item = new list;
		cin >> item->sign;
		item->next = NULL;
		item->prev = lastNode;
		lastNode->next = item;
		lastNode = item;
		c = item->sign;
	}

}

void printList(listPointer myList)
{
	listPointer cursor;
	if (myList == NULL) {
		cout << "Дані не введені" << endl;
	}
	else {
		cursor = myList;
		while (cursor != NULL) {
			cout << cursor->sign << " ";
			cursor = cursor->next;
		}
		cout << endl;
	}
}

void reverse(listPointer firstNode, listPointer lastNode)
{
	listPointer cursorBegin, cursorEnd, tmpEnd, tmpBegin;
	tmpBegin = new list;
	tmpEnd = new list;
	cout << "Введіть символ пошуку: ";
	char simbol;
	cin >> simbol;
	cursorBegin = firstNode;
	cursorEnd = lastNode;
	while (cursorBegin != NULL) {
		if (cursorBegin->sign == simbol) break;
		cursorBegin = cursorBegin->next;
	}
	while (cursorEnd != NULL) {
		if (cursorEnd->sign == simbol) break;
		cursorEnd = cursorEnd->prev;
	}
	while (((cursorBegin != NULL) && (cursorEnd != NULL)) && ((cursorBegin != cursorEnd) && (cursorBegin->next != cursorEnd))) {
		if (cursorEnd->prev != NULL && cursorBegin->next != NULL) {
				tmpEnd->sign = cursorEnd->prev->sign;
				tmpBegin->sign = cursorBegin->next->sign;
		}
		cursorEnd->prev->sign = tmpBegin->sign;
		cursorBegin->next->sign = tmpEnd->sign;
		cursorBegin = cursorBegin->next;
		cursorEnd = cursorEnd->prev;
	}
}

void removeNode(listPointer myList) 
{
	listPointer cursor, delNode;
	cursor = myList->next;
	while (cursor != NULL) {
		if (cursor->next != NULL && cursor->prev->sign == cursor->next->sign) {
			cursor->prev->next = cursor->next;
			cursor->next->prev = cursor->prev;
			delNode = cursor;
			cursor = cursor->next;
			delete delNode;
		}
		else {
			cursor = cursor->next;
		}
	}
}
void main()
{
	setlocale(0, "");
	listPointer myListBegin, myListEnd;
	myListBegin = 0;
	myListEnd = 0;
	enterList(myListBegin, myListEnd);
	printList(myListBegin);
	removeNode(myListBegin);
	reverse(myListBegin, myListEnd);
	printList(myListBegin);
	system("pause");
}