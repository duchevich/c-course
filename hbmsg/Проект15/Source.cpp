#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include "std_lib_facilities.h"
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);// ��������� ������� �������� win-cp 1251 � ����� �����
	SetConsoleOutputCP(1251); // ��������� ������� �������� win-cp 1251 � ����� ������
	
	// ����������
	string name;
	string friend_name;
	char sex = 0;
	char sex_friend = 0;
	int age = 0;

	// ���� ������
	cout << "������� ��� ��������" << endl;
	cin >> name;
	cout << "������� ��� �������� (� / �)" << endl;
	cin >> sex;
	cout << "������� ��� ����� ��������" << endl;
	cin >> friend_name;
	cout << "������� ��� ����� �������� (� / �)" << endl;
	cin >> sex_friend;
	cout << "������� ������� ��������" << endl;
	cin >> age;

	// ����� ������
	string intro = (sex == '�' ? "������� " : "������� ");
	string meet = (sex == '�' ? "�������� " : "��������� ");
	string hb = (sex == '�' ? "������� " : "�������� ");
	string his = (sex_friend == '�' ? "��� " : "�� ");

	cout << intro << name << ", " << "��� � ���� ����? \n� ���� ��� ������. � ������ �� ����." << endl;
	cout << "����� �� �� " << meet << friend_name << "?" << endl;
	cout << "���� �� ������� " <<friend_name << ", ����������, ������� " << his << "��������� ���." << endl;
	cout << "� ������a, �� ������ ��� " << hb << "���� �������� � ���� ����������� " << age << " ���." << endl;

	if (age <= 0 || age >= 110) {
		simple_error("�� ������ !");
	}
	else if (age < 12) {
		cout << "�� ��������� ��� ���� ���������� " << age + 1 << " ���." << endl;
	}
	else if (age > 70) {
		cout << "� �������, ��� �� �� �������� �� ������." << endl;
	}
	else if (age == 17) {
		cout << "� ��������� ���� �� ������� ����������." << endl;
	}
	else {
		cout << "�������, �������� � ������������!" << endl;
	}
	cout << "�������� ����.\n\n�������" << endl;
	
	system("pause");
}