#include <iostream>
using namespace std;
int main()
{
	// ex 5
	setlocale(0, "");
	int num;
	cout << "Введите 4-значное число:";
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
	cout << "Введите трехзначное число:";
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
	cout << "Введите три любых числа:";
	cin >> num1;
	cin >> num2;
	cin >> num3;
	double res = (num1 + num2 + num3) / 3;
	cout << res << endl;
	system("pause");
	return 0;*/

	// ex 2
	/*double num;
	cout << "Введите любoе число:";
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
	cout << "Введите любoе число:";
	cin >> num1;
	cout << "Введите любoе число:";
	cin >> num2;
	cout << "Введите любoе число:";
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
	cout << "Введите любе число:";
	cin >> num;
	if (num > 10)
		cout << "Числo больше 10" << endl;
	else
		cout << "Число меньше или равно 10" << endl;
	system("pause");
	return 0;*/
}