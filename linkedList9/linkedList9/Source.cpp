/*
9. Дана послідовність символів, що закінчується крапкою. Додати (перенести) у кінець послідовності всі її цифри, а в початок – голосні букви.
*/

#include <iostream>

using namespace std;

typedef struct list
{
	char sign;
	struct list *prev;
	struct list *next;
}listName, *listPointer;

void enterList(listPointer &firstNode, listPointer &lastNode) {
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

void transformList(listPointer &firstNode, listPointer &lastNode)
{
	listPointer cursor, cursor1, tmp, begin, end;
	cursor = firstNode;
	begin = firstNode;
	end = lastNode;
	while (cursor->sign != '.')
	{
		if ((cursor->sign >= '0') && (cursor->sign <= '9')) {
			if (cursor == begin) {
				begin = begin->next;
				begin->next = cursor->next->next;
				begin = cursor->next;
				begin->prev = NULL;
				cursor->prev = end;
				cursor->next = NULL;
				end->next = cursor;
				end = cursor;
				end->prev = cursor->prev;
				end->next = NULL;
				cursor = begin;
			}
			else if (cursor->prev != NULL) {
				cursor->prev->next = cursor->next;
				cursor->next->prev = cursor->prev;
				tmp = cursor->next;
				cursor->next = NULL;
				end->next = cursor;
				cursor->prev = end;
				end = cursor;
				cursor = tmp;
			}
			else {
				cursor = cursor->next;
			}
		}
		else if ((cursor->sign == 'a') || (cursor->sign == 'e') || (cursor->sign == 'i') || (cursor->sign == 'o') || (cursor->sign == 'u') || (cursor->sign == 'A') || (cursor->sign == 'E') || (cursor->sign == 'I') || (cursor->sign == 'O') || (cursor->sign == 'U')) {
			if (cursor == begin) {
				cursor = cursor->next;
			}
			else {
				cursor->prev->next = cursor->next;
				cursor->next->prev = cursor->prev;
				tmp = cursor->next;
				cursor->prev = NULL;
				begin->prev = cursor;
				cursor->next = begin;
				begin = cursor;
				cursor = tmp;
			}
		}
		else {
			cursor = cursor->next;
		}
	}
	firstNode = begin;
}

void main()
{
	setlocale(0, "");
	listPointer myListBegin, myListEnd;
	myListBegin = 0;
	myListEnd = 0;
	enterList(myListBegin, myListEnd);
	printList(myListBegin);
	transformList(myListBegin, myListEnd);
	printList(myListBegin);
	system("pause");
}