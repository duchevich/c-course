/*
2. —творити звТ€заний список. якщо перший елемент списку Ї м≥н≥мальним, 
	то пом≥н€ти його м≥сц€ми з останн≥м елементом.
*/

#include<iostream>
#include<string>
using namespace std;

typedef struct number
{
	int num;
	struct number *next;
}numbern, *numberp;

// функц≥€ дл€ створенн€ та заповненн€ списку
numberp create_list()
{
	cout << "¬ведiть елементи списку:" << endl;
	// створенн€ списку та допом≥жних вузл≥в
	numberp p, q, dl;
	p = new number;
	dl = p;
	// вв≥д  та перев≥рка данних
	char input[10];
	cout << "число: ";
	cin >> input;
	// створенн€ першого вузла списку
	p->num = atoi(input);
	p->next = NULL;
	char c;
	cout << "Ѕуде наступний елемент? (Y/N) "; cin >> c;
	// заповненн€ списку
	while ((c == 'y') || (c == 'Y')) {
		q = new number;
		cout << "число: ";
		cin >> input;
		q->num = atoi(input);
		q->next = NULL;
		p->next = q;
		p = q;
		cout << "Ѕуде наступний елемент? (Y/N) "; cin >> c;
	}
	return dl;
}

// функц≥€ друку списку
void print(numberp p)
{
	numberp q;
	if (p == NULL) cout << "ƒан≥ не введен≥" << endl;
	q = p;
	while (q != NULL) {
		cout << q->num << " ";
		q = q->next;
	}
	cout << endl;
}

// функц≥€, €ка м≥н€Ї м≥сц€ми перший та останн≥й елементи, €кщо перший елемент списку Ї м≥н≥мальним
void ifFirstMinToEnd(numberp p) 
{
	numberp first = p;
	numberp prev = p;
	numberp cursor = p;
	int min = first->num;
	// пошук м≥н≥мального значенн€ в списку
	while (cursor != NULL) {
		if (cursor->num < min) {
			min = cursor->num;
		}
		prev = cursor;
		cursor = cursor->next;
	}
	// перем≥на м≥сц€ми значень першого та останнього елемент≥в, €кщо перший елемент списку Ї м≥н≥мальним
	if (min == first->num) {
		first->num = prev->num;
		prev->num = min;
	}

}
void main()
{
	setlocale(0, "");
	numberp p;
	p = create_list();
	print(p);
	ifFirstMinToEnd(p);
	print(p);
	
	system("pause");
}