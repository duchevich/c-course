/*
3. �������� �������� ������ ����� �����, ������������ � ������� ���������. �������� � ������ ��� 
	����� �����, �� ��������� ��������������.
*/

#include <iostream>
#include <string>
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

// ������� ��� ��������� ����� � ������������ ������
void addNumber(nodePointer firstNode, int value) {
	// ��������� ��������� �����
	nodePointer cursor = firstNode;
	nodePointer prev = firstNode;
	nodePointer unit = new node;
	unit->number = value;
	// ������ �� ������
	while (true) {
		// ������� ����� �� ������� ������
		if (firstNode->number >= value) {
			unit->number = firstNode->number;
			unit->next = firstNode->next;
			firstNode->number = value;
			firstNode->next = unit;
			break;
		}
		// ������� ����� � �������� ������ �� ��� �� ������
		else {
			if (cursor->number >= value) {
				unit->next = cursor;
				prev->next = unit;
				break;
			}
			else {
				prev = cursor;
				cursor = cursor->next;
				// ������� ����� � ����� ������
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
	// ��������� � ������ ����� ������� �����
	char input[10];
	for (int i = 0; i < 3; i++) {
		cout << "����i�� ���� �����: ";
		cin >> input;
		int value = atoi(input);
		addNumber(linkedList, value);
	}
	print(linkedList);
	system("pause");
}
