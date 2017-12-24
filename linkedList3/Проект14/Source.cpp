/*
3. Створити зв’язаний список цілих чисел, розташованих у порядку зростання. Включити в список три 
	задані числа, не порушуючи впорядкованості.
*/

#include <iostream>
#include <string>
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

// функція для додавання числа в відсортований список
void addNumber(nodePointer firstNode, int value) {
	// створення допоміжних вузлів
	nodePointer cursor = firstNode;
	nodePointer prev = firstNode;
	nodePointer unit = new node;
	unit->number = value;
	// прохід по списку
	while (true) {
		// вставка числа на початок списку
		if (firstNode->number >= value) {
			unit->number = firstNode->number;
			unit->next = firstNode->next;
			firstNode->number = value;
			firstNode->next = unit;
			break;
		}
		// вставка числа в середину списку та рух по списку
		else {
			if (cursor->number >= value) {
				unit->next = cursor;
				prev->next = unit;
				break;
			}
			else {
				prev = cursor;
				cursor = cursor->next;
				// вставка числа в кінець списку
				if (cursor == NULL) {
					unit->next = NULL;
					prev->next = unit;
					break;
				}
			}
		}
	}
}


void main()
{
	setlocale(0, "");
	nodePointer linkedList = new node;
	linkedList = createList();
	print(linkedList);
	// включення в список трьох заданих чисел
	char input[10];
	for (int i = 0; i < 3; i++) {
		cout << "Введiть ціле число: ";
		cin >> input;
		int value = atoi(input);
		addNumber(linkedList, value);
	}
	print(linkedList);
	system("pause");
}
