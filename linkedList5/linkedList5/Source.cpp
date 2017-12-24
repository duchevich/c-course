/*
5. Задано два вектори, які подаються за допомогою зв’язаних списків. Організувати функцію обчислення скалярного добутку цих векторів.
*/

#include <iostream>
#include <string>

using namespace std;

typedef struct vector
{
	float value;
	struct vector *next;
}vectorn, *vectorp;

// функція перевірки вводу
float number() 
{
	float val = 0;
	int error = 0;
	char input[10];
	do {
		if (error != 0) cout << "Введіть корректне значення" << endl;
		cin >> input;
		val = atof(input);
		error++;
	} while (val == 0);
	return val;
}

// функція вводу вектору - звязного списку заданої довжини
vectorp enterVector(int lenght)
{
	vectorp firstNode, lastNode;
	lastNode = new vector;
	firstNode = lastNode;
	float value;
	cout << "Введіть 1 значення" << endl;
	lastNode->value = number();
	lastNode->next = NULL;
	for (int i = 2; i <= lenght; i++) {
		vectorp item = new vector;
		cout << "Введіть " << i << " значення" << endl;
		item->value = number();
		item->next = NULL;
		lastNode->next = item;
		lastNode = item;
	}
	return firstNode;
}

// функція друку звязного списку
void printVector(vectorp myVector)
{
	vectorp cursor;
	if(myVector == NULL) 
		cout << "Дані не введені" << endl;
	else {
		cursor = myVector;
		while (cursor != NULL) {
			cout << cursor->value << " ";
			cursor = cursor->next;
		}
		cout << endl;
	}
}

// функція обчислення скалярного добутку двох векторів
float scalar(vectorp vector1, vectorp vector2, int lenght)
{
	if (vector1 == NULL || vector2 == NULL) {
		cout << "Дані не введені" << endl;
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
	cout << "Введіть розмірність векторів" << endl;
	int len = int(number());
	cout << "Введіть перший вектор" << endl;
	vectorp vec1 = enterVector(len);
	printVector(vec1);
	cout << "Введіть другий вектор" << endl;
	vectorp vec2 = enterVector(len);
	printVector(vec2);
	float res = scalar(vec1, vec2, len);
	cout << "Скалярний добуток данних векторів складає " << res << endl;

	system("pause");
}