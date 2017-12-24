 /*
 4. Організувати новий список із різних елементів заданого, включивши в інформаційну частину вузла кількість його входження в початковий список.
 */

#include <iostream>
#include <string>

using namespace std;

typedef struct list 
{
	string name;
	struct list *next;
}listn, *listp;

typedef struct list1
{
	string name;
	int qty;
	struct list1 *next;
}list1n, *list1p;

// функція для вводу списку 
listp createList()
{
	// оголошення вузлів
	listp firstNode, lastNode;
	lastNode = new list;
	firstNode = lastNode;
	// ввід першого елементу
	cout << "Введiть елементи списку:" << endl;
	cout << "значення: ";
	cin >> lastNode->name;
	lastNode->next = NULL;
	char c;
	// заповнення списку
	cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	while ((c == 'y') || (c == 'Y')) {
		listp item = new list;
		cout << "значення: ";
		cin >> item->name;
		item->next = NULL;
		lastNode->next = item;
		lastNode = item;
		cout << "Буде наступний елемент? (Y/N) "; 
		cin >> c;
	}
	return firstNode;
}

// функція для генерації нового списку із різних елементів заданого, включивши в інформаційну частину вузла кількість його входження в початковий список
list1p createList1(listp myList)
{
	// оголошення вузлів
	list1p firstNode, lastNode, cursor1;
	lastNode = new list1;
	firstNode = lastNode;
	lastNode->name = myList->name;
	lastNode->qty = 0;
	lastNode->next = NULL;
	listp cursor = myList;
	while (cursor != NULL)
	{
		cursor1 = firstNode;
		while (cursor1 != NULL) {
			if (cursor1->name == cursor->name) {
				cursor1->qty++;
				break;
			}
			cursor1 = cursor1->next;
		}
		if (cursor1 == NULL) {
			list1p item = new list1;
			item->name = cursor->name;
			item->qty = 1;
			item->next = NULL;
			lastNode->next = item;
			lastNode = item;
		}
		cursor = cursor->next;
	}
	return firstNode;
}

// функція для друку першого списку
void printList(listp myList)
{
	if(myList == NULL) 
		cout << "Дані не введені" << endl;
	listp cursor = myList;
	while (cursor != NULL) {
		cout << cursor->name << " "; 
		cursor = cursor->next;
	}
	cout << endl;
}

// функція для друку другого списку
void printList1(list1p myList)
{
	if (myList == NULL)
		cout << "Дані не введені" << endl;
	list1p cursor = myList;
	while (cursor != NULL) {
		cout << cursor->name << " " << cursor->qty << " " << endl;
		cursor = cursor->next;
	}
}


void main()
{
	setlocale(0, "");
	listp firstList = createList();
	printList(firstList);
	list1p secondList = createList1(firstList);
	printList1(secondList);
	system("pause");
}