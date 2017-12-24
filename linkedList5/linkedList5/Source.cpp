/*
5. ������ ��� �������, �� ��������� �� ��������� �������� ������. ����������� ������� ���������� ���������� ������� ��� �������.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct vector
{
	float value;
	struct vector *next;
}vectorn, *vectorp;

// ������� �������� �����
float number() 
{
	float val = 0;
	int error = 0;
	char input[10];
	do {
		if (error != 0) cout << "������ ��������� ��������" << endl;
		cin >> input;
		val = atof(input);
		error++;
	} while (val == 0);
	return val;
}

// ������� ����� ������� - �������� ������ ������ �������
vectorp enterVector(int lenght)
{
	vectorp firstNode, lastNode;
	lastNode = new vector;
	firstNode = lastNode;
	float value;
	cout << "������ 1 ��������" << endl;
	lastNode->value = number();
	lastNode->next = NULL;
	for (int i = 2; i <= lenght; i++) {
		vectorp item = new vector;
		cout << "������ " << i << " ��������" << endl;
		item->value = number();
		item->next = NULL;
		lastNode->next = item;
		lastNode = item;
	}
	return firstNode;
}

// ������� ����� �������� ������
void printVector(vectorp myVector)
{
	vectorp cursor;
	if(myVector == NULL) 
		cout << "��� �� ������" << endl;
	else {
		cursor = myVector;
		while (cursor != NULL) {
			cout << cursor->value << " ";
			cursor = cursor->next;
		}
		cout << endl;
	}
}

// ������� ���������� ���������� ������� ���� �������
float scalar(vectorp vector1, vectorp vector2, int lenght)
{
	if (vector1 == NULL || vector2 == NULL) {
		cout << "��� �� ������" << endl;
		return 1;
	}
	float result = 0;
	float dob = 0;
	vectorp cursor1 = vector1;
	vectorp cursor2 = vector2;
	for (int i = 0; i < lenght; i++) {
		dob = cursor1->value * cursor2->value;
		//cout << dob << endl;
		result += dob;
		//cout << result << endl;
		cursor1 = cursor1->next;
		cursor2 = cursor2->next;
	}
	return result;
}

void main()
{
	setlocale(0, "");
	cout << "������ ��������� �������" << endl;
	int len = int(number());
	cout << "������ ������ ������" << endl;
	vectorp vec1 = enterVector(len);
	printVector(vec1);
	cout << "������ ������ ������" << endl;
	vectorp vec2 = enterVector(len);
	printVector(vec2);
	float res = scalar(vec1, vec2, len);
	cout << "��������� ������� ������ ������� ������ " << res << endl;

	system("pause");
}