#include <iostream>
using namespace std;
int main()
{
	// ex 5
	setlocale(0, "");
	int num;
	cout << "������� 4-������� �����:";
	cin >> num;
	int a = num / 1000;
	int b = (num % 1000) / 100;
	int c = (num % 1000) % 100 / 10;
	int d = (num % 1000) % 100 % 10;

	if ((a + b) == (c + d)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	system("pause");
	return 0;

	// ex 4
	/*setlocale(0, "");
	int num;
	cout << "������� ����������� �����:";
	cin >> num;
	int a = num / 100;
	int b = (num % 100) / 10;
	int c = (num % 100) % 10;
	
	double res = a * b * c;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << res << endl;
	system("pause");
	return 0;*/
	
	// ex 3
	/*setlocale(0, "");
	int num1, num2, num3;
	cout << "������� ��� ����� �����:";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	double res = (num1 + num2 + num3) / 3;
	cout << res << endl;
	system("pause");
	return 0;*/

	// ex 2
	/*double num;
	cout << "������� ���o� �����:";
	cin >> num;
	int res1 = pow(num, 3.0);
	int res2 = pow(num, 5.0);
	int res3 = pow(num, 6.0);
	cout << res1 << endl;
	cout << res2 << endl;
	cout << res3 << endl;
	system("pause");
	return 0;*/

	// ex 1
	/*
	int num1, num2, num3;
	cout << "������� ���o� �����:";
	cin >> num1;
	cout << "������� ���o� �����:";
	cin >> num2;
	cout << "������� ���o� �����:";
	cin >> num3;
	if ((num1 % 2 == 0) && (num2 % 2 == 0) && (num3 % 2 == 0)) {
		cout << "Yes" << endl;
	}
	else {
		cout << "No" << endl;
	}
	system("pause");*/

	// ex 
	/*setlocale(0, "");
	double num;
	cout << "������� ���� �����:";
	cin >> num;
	if (num > 10)
		cout << "����o ������ 10" << endl;
	else
		cout << "����� ������ ��� ����� 10" << endl;
	system("pause");
	return 0;*/
}