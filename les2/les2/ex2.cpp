#include<iostream>
using namespace std;


int main()
{
	// 1. ������ ���� ����� Գ�������, �� �� ����������� 1000 (����� Գ������� fn ������������ �� ��������� f0 = f1 = 1; fn = fn - 1 + fn - 2 ��� n = 2, 3, ... ������� ����������� Գ������� 1, 1, 2, 3, 5, 8, 13, ...)
	setlocale(0, "");


	system("pause");

	// 2. ���������, �� � ������ ����������� ����� ���������(���� ������ ����� ���� �� ���������� ��� ������� ����� ����) ?
	setlocale(0, "");
	int num = 0;
	do {
		cout << "������� 6-������ ����o" << endl;
		cin >> num;
	} 
	while (num / 100000 == 0 && num / 100000 < 10);
	num / 100000 + num % 100000 / 10000 + num % 10000 / 1000 == num % 1000 / 100 + num % 100 / 10 + num % 10 / 1
		? cout << "��� ���������� �����" << endl : cout << "��� ������������ �����" << endl;

	system("pause");

	// 6. ������� �� ���� ����� �� n �� m (for)
	/*setlocale(0, "");
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int max = 0;

	cout << "������� ����o 1" << endl;
	cin >> num1;
	cout << "������� ����o 2" << endl;
	cin >> num2;

	(num1 < num2) ? (max = num2, min = num1) : (max = num1, min = num2);

	int count = min;
	for (count = min; count <= max; count++) {
		if (count % 2 == 0) {
			cout << count << endl;
		}
	}
	system("pause"); */
	
	// 6. ������� �� ���� ����� �� n �� m (while)
	/*setlocale(0, "");
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int max = 0;

	cout << "������� ����o 1" << endl;
	cin >> num1;
	cout << "������� ����o 2" << endl;
	cin >> num2;

	(num1 < num2) ? (max = num2, min = num1) : (max = num1, min = num2);

	int count = min;
	while (count <= max){
		if (count % 2 == 0) {
			cout << count << endl;
		}
		count++;
	}	
	system("pause"); */

	//5. ��������� �� ���� ��� ��� ���� �������� �����.��������� ������� ���� �������� (for)
	/*setlocale(0, "");
	int num = 1;
	int count = 0;
	int sum = 0;

	for (count = 0; count < 100; count++)
	{
		cout << "������� ���� �������� (�������� 100 ��������), ��� ��������� ����� ������� 0" << endl;
		cin >> num;
		if (num == 0)
			break;
		sum += num;
	}
	int len = sum / count;
	cout << "������� ���� ��������� = " << len << endl;
	system("pause");*/
	
	//5. ��������� �� ���� ��� ��� ���� �������� �����.��������� ������� ���� �������� (while)
	/*setlocale(0, "");
	int num = 1;
	int count = 0;
	int sum = 0;

	while (true)
	{
		cout << "������� ���� ��������, ��� ��������� ����� ������� 0" << endl;
		cin >> num;
		if (num == 0)
			break;
		sum += num;
		count++;
	}
	int len = sum / count;
	cout << "������� ���� ��������� = " << len << endl;
	system("pause");*/

	// 4.���� ���������� ����� n. ������ �������� ����� ����� (for)
	/*setlocale(0, "");
	int num = 0;
	int fact = 1;
	cout << "������� ����o" << endl;
	cin >> num;

	for (int count = 1; count <= num; count++)
	{
		fact *= count;
		cout << fact << endl;
	}
	cout << "��������� ����� " << num << " = " << fact << endl;

	system("pause");*/
	
	// 4.���� ���������� ����� n. ������ �������� ����� ����� (while)
	/*setlocale(0, "");
	int num = 0;
	int count = 1;
	int fact = 1;
	cout << "������� ����o" << endl;
	cin >> num;

	while (count <= num)
	{
		fact *= count;
		cout << fact << endl;
		count++;
	}
	cout << "��������� ����� " << num << " = " << fact << endl;

	system("pause");*/

	//3. � ����������� ����� ������ ������� �����, ������� 3 (for)
	/*setlocale(0, "");
	int num = 0;
	int dob = 1;

	cout << "����i�� 10 ������i� �����" << endl;
	for (int count = 0; count <10; count++)
	{
		cout << "����i�� �����" << endl;
		cin >> num;
		if (num < 1) {
			cout << "����i�� ������ �����" << endl;
			cin >> num;
		}
		if (num % 3 == 0)
		{
			dob *= num;
			//cout << dob << " " << num << endl;
		}
	}
	cout << "������� �������� �����, ��i �����i 3 = " << dob << endl;
	system("pause");*/

	//3. � ����������� ����� ������ ������� �����, ������� 3 (while)
	/*setlocale(0, "");
	int num = 0;
	int dob = 1;
	int count = 0;

	cout << "����i�� 10 ������i� �����" << endl;
	while(count <10)
	{
		cout << "����i�� �����" << endl;
		cin >> num;
		if (num < 1) {
			cout << "����i�� ������ �����" << endl;
			cin >> num;
		}
		if (num % 3 == 0)
		{
			dob *= num;
			//cout << dob << " " << num << endl;
		}
		
		count++;
	}
	cout << "������� �������� �����, ��i �����i 3 = " << dob << endl;
	
	system("pause");*/
	

//###########################################################################################

	/*setlocale(0, "");
	char str[10];
	cout << "������� ����� �� 1 � 5:" << endl;
	cin >> str;
	cout << str << endl;
	switch (str)
	{
	case "one":
		cout << "��� ����� " << str << endl;
		break;
	case 'two':
		cout << "��� ����� " << str << endl;
		break;
	case 'thre':
		cout << "��� ����� " << str << endl;
		break;
	case 'four':
		cout << "��� ����� " << str << endl;
		break;
	default:
		cout << "��� ������ �����" << endl;

	}


	system("pause");*/
	
	/*setlocale(0, "");
	int num, max;
	max = 0;
	while (true)
	{
		cout << "������� ������������� ����o" << endl;
		cin >> num;
		if (isdigit(num) != 0) 
		{
			if (num > max) {
				max = num;
				cout << "����������� ����� " << max << endl;
			}
			else {
				cout << "����������� ����� " << max << endl;
			}
		}
		else {
			cout << "������� ����o" << endl;
			cin >> num;
		}
	}
	system("pause");
	*/

	/*int num, max;
	max = 0;
	while (true)
	{
		cout << "������� ������������� ����o" << endl;
		cin >> num;
		if (num > max) {
			max = num;
			cout << "����������� ����� " << max << endl;
		}
		else {
			cout << "����������� ����� " << max << endl;
		}
	}*/
	/*while (res < 300)
	{
		res = num * count;
		cout << res << endl;
		count++;
	}*/

	/*for (int i = 0; res < 300; i++) {
		res = num * i;
		cout << res << endl;
	}*/

	

	/*setlocale(0, "");
	int action;
	cout << "�������� ��������: 1 - �����������, 2 - ������ ������, 3 - ��������� ������" << endl;
	cin >> action;

	switch(action)
	{
	case 1:
		cout << "�����������" << endl;
		break;
	case 2:
		cout << "������ ������" << endl;
		break;
	case 3:
		cout << "��������� ������" << endl;
		break;
	default:
		cout << "������� ���������� ������" << endl;
	}

	system("pause");*/

	/*setlocale(0, "");
	int num, act;

	cout << "������� ����o" << endl;
	cin >> num;
	cout << "�������� ��������: 1 - ������� �����, 2- ��� � �.�." << endl;
	cin >> act;

	int res = pow(num, act);


	cout << res << endl;

	system("pause");*/
	/*setlocale(0, "");
	int num;

	cout << "������� ����o" << endl;
	cin >> num;

	if (num < 0) {
		num *= num;
	}
	else {
		num *= 3;
	}
	cout << num << endl;

	system("pause");*/
	/*setlocale(0, "");
	int num1, num2, num3;

	cout << "������� ��� �����:" << endl;
	cin >> num1;
	cin >> num2;
	cin >> num3;

	int min = num1;

	if (min > num2) {
		min = num2;
	}
	if (min > num3) {
		min = num3;
	}

	cout << min << endl;
	*/
	/*if (num1 < num2 && num1 < num3)
	{
		cout << num1 << endl;
	}
	else if (num2 < num1 && num2 < num3)
	{
		cout << num2 << endl;
	}
	else
	{
		cout << num3 << endl;
	}*/

	
	
	/* setlocale(0, "");
	int str;
	cout << "������� ����� �� 1 � 5:" << endl;
	cin >> str;

	switch (str)
	{
		case 1:
			cout << "��� ����� " << str << endl;
			break;
		case 2:
			cout << "��� ����� " << str << endl;
			break;
		case 3:
			cout << "��� ����� " << str << endl;
			break;
		case 4:
			cout << "��� ����� " << str << endl;
			break;
		default:
			cout << "��� ������ �����" << endl;

	}


	system("pause"); */

	/* setlocale(0, "");
	int i = 1, rez = 1;
	while (i++ <= 10)
	{
		cin >> rez;
		if (rez == 15)
		{
			break;
		}
		cout << "\n������� � ��������� ���";
	}
	if (i != 12)
	{
		cout << "\n�� �������!";
	}
	system("pause"); */


	/*int i = 1, rez = 1;
	while (i++ <= 10 && rez != 25)
	{
		cout << "\n������� �����:";
		cin >> rez;
	}
	if (i == 12 && rez != 25)
	{
		cout << "\n�� �� �������:";
	}
	else
	{
		cout << "\n���������! �� ������� �����" << endl;
	}
	system("pause");*/
}