/*
6. ������ ��� ������������� �� ��������� �������� ������. ����������� �� ��� ���� ������, �� ��������� ��������������.
*/

#include <iostream>

using namespace std;

typedef struct node
{
	int number;
	struct node *next;
}nodeName, *nodePointer;

// ������� ��� ��������� �� ���������� ������������� ������ ����� �����
nodePointer createList()
{
	// ��������� �����
	nodePointer firstNode, unit, lastNode;
	lastNode = new node;
	firstNode = lastNode;
	// ��������� �������� ��� �����
	char input[10];
	cout << "��������� ��������� ������ ����� �����" << endl;
	cout << "����i�� ���� �����: ";
	cin >> input;
	// �������� �� ���� ����� �� ���������� �������� � ������������ ��������� ������
	int maxValue = atoi(input);
	// ������ ����� ������
	lastNode->number = maxValue;
	lastNode->next = NULL;
	char c;
	// ���������� ������ � �����������
	cout << "���� ��������� �������? (Y/N) "; cin >> c;
	// �������� ��� ��������� ���������� ������
	while ((c == 'y') || (c == 'Y')) {
		unit = new node;
		cout << "����i�� ���� �����: ";
		cin >> input;
		int unitValue = atoi(input);
		// ������� ����� � ����� ������
		if (unitValue >= maxValue) {
			unit->number = unitValue;
			unit->next = NULL;
			lastNode->next = unit;
			lastNode = unit;
			maxValue = unitValue;
			cout << "���� ��������� �������? (Y/N) "; cin >> c;
		}
		else {
			nodePointer cursor = firstNode;
			nodePointer prev = firstNode;
			bool flag = false;
			while (flag == false) {
				// ������� ����� �� ������� ������
				if (firstNode->number >= unitValue) {
					unit->number = unitValue;
					unit->next = firstNode;
					firstNode = unit;
					flag = true;
				}
				// ������� ����� � �������� ������
				else if (cursor->number >= unitValue) {
					unit->number = unitValue;
					unit->next = cursor;
					prev->next = unit;
					flag = true;
				}
				//  ��� �� ������
				else {
					prev = cursor;
					cursor = cursor->next;
				}
			}
			cout << "���� ��������� �������? (Y/N) "; cin >> c;
		}
	}
	return firstNode;
}

// ������� ��� ����� ������
void print(nodePointer firstNode)
{
	nodePointer unit;
	if (firstNode == NULL) {
		cout << "������ �������" << endl;
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

// ������� ��� ������ ������
nodePointer mergeLists(nodePointer list1, nodePointer list2) {
	nodePointer list, mainCursor, mainPrevNode, cursor, nextNode, endMainList;
	// ���� ��������� ������ (�������� ��������)
	if (list1->number < list2->number) {
		mainCursor = list1;
		cursor = list2;
	}
	else {
		mainCursor = list2;
		cursor = list1;
	}
	// ������� ��������� ������
	list = mainCursor;
	// ������ �������� ��������� ������
	int max = list->number;
	endMainList = mainCursor;
	while (mainCursor != NULL) {
		if (max < mainCursor->number) max = mainCursor->number;
		endMainList = mainCursor;
		mainCursor = mainCursor->next;
	}
	// ������ ������������ ������
	while (cursor != NULL) {
		mainCursor = list;
		mainPrevNode = mainCursor;
		mainCursor = mainCursor->next;
		
		// ������ ������ ������
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
		// ��������� �� ���� ��������� ������ ���������� ������ �� ����������, ������� �� ����������� �������� ��������� ������
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

