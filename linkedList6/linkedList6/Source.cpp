/*
6. Задано два впорядкованих по зростанню зв’язаних списки. Організувати із них один список, не порушуючи впорядкованості.
*/

#include <iostream>

using namespace std;

typedef struct node
{
	int number;
	struct node *next;
}nodeName, *nodePointer;

// функція для створення та заповнення відсортованого списку цілих чисел
nodePointer createList()
{
	// створення вузлів
	nodePointer firstNode, unit, lastNode;
	lastNode = new node;
	firstNode = lastNode;
	// створення перемінної для вводу
	char input[10];
	cout << "Створення зв’язаного списку цілих чисел" << endl;
	cout << "Введiть ціле число: ";
	cin >> input;
	// перевірка на ціле число та оголошення перемінної з максимальним значенням списку
	int maxValue = atoi(input);
	// перший вузол списку
	lastNode->number = maxValue;
	lastNode->next = NULL;
	char c;
	// заповнення списку з сортуванням
	cout << "Буде наступний елемент? (Y/N) "; cin >> c;
	// перевірка для закінчення заповнення списку
	while ((c == 'y') || (c == 'Y')) {
		unit = new node;
		cout << "Введiть ціле число: ";
		cin >> input;
		int unitValue = atoi(input);
		// вставка числа в кінець списку
		if (unitValue >= maxValue) {
			unit->number = unitValue;
			unit->next = NULL;
			lastNode->next = unit;
			lastNode = unit;
			maxValue = unitValue;
			cout << "Буде наступний елемент? (Y/N) "; cin >> c;
		}
		else {
			nodePointer cursor = firstNode;
			nodePointer prev = firstNode;
			bool flag = false;
			while (flag == false) {
				// вставка числа на початок списку
				if (firstNode->number >= unitValue) {
					unit->number = unitValue;
					unit->next = firstNode;
					firstNode = unit;
					flag = true;
				}
				// вставка числа в середину списку
				else if (cursor->number >= unitValue) {
					unit->number = unitValue;
					unit->next = cursor;
					prev->next = unit;
					flag = true;
				}
				//  рух по списку
				else {
					prev = cursor;
					cursor = cursor->next;
				}
			}
			cout << "Буде наступний елемент? (Y/N) "; cin >> c;
		}
	}
	return firstNode;
}

// функція для друку списку
void print(nodePointer firstNode)
{
	nodePointer unit;
	if (firstNode == NULL) {
		cout << "Список порожній" << endl;
	}
	else {
		unit = firstNode;
		while (unit != NULL) {
			cout << unit->number << " ";
			unit = unit->next;
		}
		cout << endl;
	}
}

// функція для злиття списків
nodePointer mergeLists(nodePointer list1, nodePointer list2) {
	nodePointer list, mainCursor, mainPrevNode, cursor, nextNode, endMainList;
	// вибір головного списку (мінімальне значення)
	if (list1->number < list2->number) {
		mainCursor = list1;
		cursor = list2;
	}
	else {
		mainCursor = list2;
		cursor = list1;
	}
	// початок головного списку
	list = mainCursor;
	// кінцеве значення головного списку
	int max = list->number;
	endMainList = mainCursor;
	while (mainCursor != NULL) {
		if (max < mainCursor->number) max = mainCursor->number;
		endMainList = mainCursor;
		mainCursor = mainCursor->next;
	}
	// злиття відсортованих списків
	while (cursor != NULL) {
		mainCursor = list;
		mainPrevNode = mainCursor;
		mainCursor = mainCursor->next;
		
		// власне злиття списків
		while (mainCursor != NULL) {
			if (cursor->number <= mainCursor->number) {
				nextNode = cursor->next;
				cursor->next = mainCursor;
				mainPrevNode->next = cursor;
				cursor = nextNode;
				break;
			}
			mainPrevNode = mainCursor;
			mainCursor = mainCursor->next;
		}
		// приєднання до кінця головного списку допоміжного списку із значеннями, більшими за максимальне значення головного списку
		if (max <= cursor->number) {
			cout << max << endl;
			endMainList->next = cursor;
			break;

			/*
			if (mainCursor != NULL) {

			}
			else {
			mainPrevNode->next = cursor;
			break;
			}
			*/
		}
	}
	return list;
}


void main()
{
	setlocale(0, "");
	nodePointer list1 = createList();
	nodePointer list2 = createList();
	print(list1);
	print(list2);
	nodePointer list = mergeLists(list1, list2);
	print(list);
	system("pause");
}

