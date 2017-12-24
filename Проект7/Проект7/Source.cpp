/*
4. �������������� ���: ������� ���������� ������.
����: ϲ� ��������, ����� ��������, ��� 璺������ (�������������, ��������, ������������ ������������),
������ ��������.
�������: �������� ������� ��������, ���������� ������ ��������, ���� ���������� �� �����, 
����� �������� �� ������� �������, ��������� ������� �������� � ��������� �������������� ������������.
*/

#include <iostream>
#include <string>
#define N 30
using namespace std;

struct abonent
{
	string name;
	int number;
	int connect;
	string address;
}list[N];

void main()
{
	setlocale(0, "");

	// �������� ������ ������
	cout << "������ ������� ������" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {				
		cout << "������ ���������� ��� " << i + 1 << "��������" << endl;
		cout << "������� ";
		cin >> list[i].name;
		cout << "����� �������� " << endl;
		cin >> list[i].number;
		if (!cin) {
			cout << "������ ��������� ����� �������� " << endl;
			cin >> list[i].number;
		}
		cout << "��� �������: 1 - �������������, 2 - ��������, 3 - ������������ ������������" << endl;
		cin >> list[i].connect;
		cout << "������ ";
		cin >> list[i].address;
	}
	// ����  ������ ������
	for (int i = 0; i < len; i++)
		cout << i + 1 << " " << list[i].name << "\t" << list[i].number << "\t" << list[i].connect << " " << list[i].address << endl;

	// ��������� ������� �������� � ��������� �������������� ������������
	int indiv = 0;
	for (int i = 0; i < len; i++) {
		if (list[i].connect == 1) indiv++;
	}
	cout << indiv << endl;

	// ����� �������� �� ������� �������	
	cout << "������ ����� ��������" << endl;
	int phone;
	cin >> phone;
	for (int i = 0; i < len; i++) {
		if (list[i].number == phone) {
			cout << "�� ������ �������� " << endl;
			cout << i + 1 << " " << list[i].name << endl;
		}
	}

	system("pause");
}


/**
3. �������������� ���: Գ���.
����: ����� �����, ϲ� ���������, ������� �����������, ������, �������� ������.
�������: �������� ������� ���� � ���������, ���������� ������ ��������, ���� ���������� ��
�����, ���������� ���������� ��������� �������, ����� ����� �� ϲ� ���������.

**/
/*
#include <iostream>
#include <string>
#define N 30
using namespace std;

struct firma
{
	string name;
	string director;
	int personal;
	string address;
	float capital;
}list[N];

void main()
{
	setlocale(0, "");

	// �������� ������ ������
	cout << "������ ������� ������" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cout << "������ ���������� ��� " << i + 1 << "�����" << endl;
		cout << "����� ";
		cin >> list[i].name;
		cout << "�������� " << endl;
		cin >> list[i].director;
		cout << "ʳ������ ��������� " << endl;
		cin >> list[i].personal;
		cout << "������ ";
		cin >> list[i].address;
		cout << "C������ �������� ������ " << endl;
		cin >> list[i].capital;
	}
	// ����  ������ ������
	for (int i = 0; i < len; i++)
		cout << i + 1 << " " << list[i].name << "\t" << list[i].director << "\t" << list[i].personal << " " << list[i].address << "\t" << list[i].capital << endl;

	// ���������� ���������� ��������� �������
	float capital = 0;
	for (int i = 0; i < len; i++) {
		capital += list[i].capital;
	}
	capital /= len;
	cout << capital << endl;

	// ����� ����� �� ϲ� ���������
	cout << "������ ��� ���������" << endl;
	string dir;
	cin >> dir;
	for (int i = 0; i < len; i++) {
		if (list[i].director == dir){
			cout << "�� ������ ����� " << endl;
			cout << i + 1 << " " << list[i].name << endl;
		}
	}

	system("pause");
}
*/

/*
#include <iostream>
#include <string>
#define N 30
using namespace std;

struct student
{
string name;
bool gender;
float bal;
}list[N];

void main()
{
setlocale(0, "");

// �������� ������ ������
cout << "������ ������� ������" << endl;
int len = 0;
cin >> len;
for (int i = 0; i < len; i++) {
cout << "������ ���������� ��� " << i + 1 << "��������" << endl;
cout << "��� ";
cin >> list[i].name;
cout << "����� " << endl;
cin >> list[i].gender;
cout << "�������� ��� " << endl;
cin >> list[i].bal;
}
// ����  ������ ������
for (int i = 0; i < len; i++)
cout << i + 1 << " " << list[i].name << "\t" << list[i].gender << "\t" << list[i].bal << endl;


int man = 0;
int woman = 0;
int man_bal = 0;
int woman_bal = 0;

for (int i = 0; i < len; i++) {
if (list[i].gender == true) {
woman++;
woman_bal += list[i].bal;
}
else {
man++;
man_bal += list[i].bal;
}
}
man_bal = man_bal / man;
woman_bal = woman_bal / woman;

(woman_bal > man_bal) ? cout << "��������� ����" << endl : cout << "��������� �������" << endl;




system("pause");
}

*/


/**
1. ������ ���������� ��� ������� ���������: �����, ����� ������, ����. ³����������
������� �� ��������� ���� � ������� ������� �����������.
**/





/*#include <iostream>
#include <string>
#define N 100
using namespace std;

struct comp
{
	string name;
	string garanty;
	float price;
}list[N];

void main()
{
	setlocale(0, "");
	// �������� ������ ������
	cout << "������ ������� ������" << endl;
	int len = 0;
	cin >> len;
	for (int i = 0; i < len; i++) {
		cout << "������ ���������� ��� " << i + 1 << "������" << endl;
		cout << "����� ";
		cin >> list[i].name;
		cout << "���������� ����� " << endl;
		cin >> list[i].garanty;
		cout << "ֳ�� " << endl;
		cin >> list[i].price;
	}

	//���������� 
	int j = 0;
	comp tmp;
	while (j < len) {
		for (int i = 0; i < len-1; i++) {
			if (list[i].price > list[i + 1].price) {
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] = tmp;
			}
		}
		j++;
	}




	// ����  ������ ������
	for (int i = 0; i < len; i++) 
		cout << i + 1 << " " << list[i].name << "\t" << list[i].garanty << "\t" << list[i].price << endl;

	system("pause");
}*/