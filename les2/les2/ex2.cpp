#include<iostream>
using namespace std;


int main()
{
	// 1. Знайти суму чисел Фібоначчі, які не перевищують 1000 (числа Фібоначчі fn обчислюються за формулами f0 = f1 = 1; fn = fn - 1 + fn - 2 при n = 2, 3, ... Числова послідовність Фібоначчі 1, 1, 2, 3, 5, 8, 13, ...)
	setlocale(0, "");


	system("pause");

	// 2. Визначити, чи є задане шестизначне число «щасливим»(сума перших трьох цифр має дорівнювати сумі останніх трьох цифр) ?
	setlocale(0, "");
	int num = 0;
	do {
		cout << "Введите 6-значне числo" << endl;
		cin >> num;
	} 
	while (num / 100000 == 0 && num / 100000 < 10);
	num / 100000 + num % 100000 / 10000 + num % 10000 / 1000 == num % 1000 / 100 + num % 100 / 10 + num % 10 / 1
		? cout << "Это счастливое число" << endl : cout << "Это несчастливое число" << endl;

	system("pause");

	// 6. Вивести всі парні числа від n до m (for)
	/*setlocale(0, "");
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int max = 0;

	cout << "Введите числo 1" << endl;
	cin >> num1;
	cout << "Введите числo 2" << endl;
	cin >> num2;

	(num1 < num2) ? (max = num2, min = num1) : (max = num1, min = num2);

	int count = min;
	for (count = min; count <= max; count++) {
		if (count % 2 == 0) {
			cout << count << endl;
		}
	}
	system("pause"); */
	
	// 6. Вивести всі парні числа від n до m (while)
	/*setlocale(0, "");
	int num1 = 0;
	int num2 = 0;
	int min = 0;
	int max = 0;

	cout << "Введите числo 1" << endl;
	cin >> num1;
	cout << "Введите числo 2" << endl;
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

	//5. Вводяться по черзі дані про зріст студентів групи.Визначити середній зріст студентів (for)
	/*setlocale(0, "");
	int num = 1;
	int count = 0;
	int sum = 0;

	for (count = 0; count < 100; count++)
	{
		cout << "Введите рост студента (максимум 100 значений), для окончания ввода введите 0" << endl;
		cin >> num;
		if (num == 0)
			break;
		sum += num;
	}
	int len = sum / count;
	cout << "Средний рост студентов = " << len << endl;
	system("pause");*/
	
	//5. Вводяться по черзі дані про зріст студентів групи.Визначити середній зріст студентів (while)
	/*setlocale(0, "");
	int num = 1;
	int count = 0;
	int sum = 0;

	while (true)
	{
		cout << "Введите рост студента, для окончания ввода введите 0" << endl;
		cin >> num;
		if (num == 0)
			break;
		sum += num;
		count++;
	}
	int len = sum / count;
	cout << "Средний рост студентов = " << len << endl;
	system("pause");*/

	// 4.Дано натуральне число n. Знайти факторіал цього числа (for)
	/*setlocale(0, "");
	int num = 0;
	int fact = 1;
	cout << "Введите числo" << endl;
	cin >> num;

	for (int count = 1; count <= num; count++)
	{
		fact *= count;
		cout << fact << endl;
	}
	cout << "Факториал числа " << num << " = " << fact << endl;

	system("pause");*/
	
	// 4.Дано натуральне число n. Знайти факторіал цього числа (while)
	/*setlocale(0, "");
	int num = 0;
	int count = 1;
	int fact = 1;
	cout << "Введите числo" << endl;
	cin >> num;

	while (count <= num)
	{
		fact *= count;
		cout << fact << endl;
		count++;
	}
	cout << "Факториал числа " << num << " = " << fact << endl;

	system("pause");*/

	//3. В послідовності чисел знайти добуток чисел, кратних 3 (for)
	/*setlocale(0, "");
	int num = 0;
	int dob = 1;

	cout << "Введiть 10 додатнiх чисел" << endl;
	for (int count = 0; count <10; count++)
	{
		cout << "Введiть число" << endl;
		cin >> num;
		if (num < 1) {
			cout << "Введiть додатнє число" << endl;
			cin >> num;
		}
		if (num % 3 == 0)
		{
			dob *= num;
			//cout << dob << " " << num << endl;
		}
	}
	cout << "Добуток введених чисел, якi кратнi 3 = " << dob << endl;
	system("pause");*/

	//3. В послідовності чисел знайти добуток чисел, кратних 3 (while)
	/*setlocale(0, "");
	int num = 0;
	int dob = 1;
	int count = 0;

	cout << "Введiть 10 додатнiх чисел" << endl;
	while(count <10)
	{
		cout << "Введiть число" << endl;
		cin >> num;
		if (num < 1) {
			cout << "Введiть додатнє число" << endl;
			cin >> num;
		}
		if (num % 3 == 0)
		{
			dob *= num;
			//cout << dob << " " << num << endl;
		}
		
		count++;
	}
	cout << "Добуток введених чисел, якi кратнi 3 = " << dob << endl;
	
	system("pause");*/
	

//###########################################################################################

	/*setlocale(0, "");
	char str[10];
	cout << "Введите число от 1 д 5:" << endl;
	cin >> str;
	cout << str << endl;
	switch (str)
	{
	case "one":
		cout << "Это число " << str << endl;
		break;
	case 'two':
		cout << "Это число " << str << endl;
		break;
	case 'thre':
		cout << "Это число " << str << endl;
		break;
	case 'four':
		cout << "Это число " << str << endl;
		break;
	default:
		cout << "Нет такого числа" << endl;

	}


	system("pause");*/
	
	/*setlocale(0, "");
	int num, max;
	max = 0;
	while (true)
	{
		cout << "Введите положительное числo" << endl;
		cin >> num;
		if (isdigit(num) != 0) 
		{
			if (num > max) {
				max = num;
				cout << "Максимальне число " << max << endl;
			}
			else {
				cout << "Максимальне число " << max << endl;
			}
		}
		else {
			cout << "Введите числo" << endl;
			cin >> num;
		}
	}
	system("pause");
	*/

	/*int num, max;
	max = 0;
	while (true)
	{
		cout << "Введите положительное числo" << endl;
		cin >> num;
		if (num > max) {
			max = num;
			cout << "Максимальне число " << max << endl;
		}
		else {
			cout << "Максимальне число " << max << endl;
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
	cout << "Выберите действие: 1 - приветствие, 2 - начало работы, 3 - окончание работы" << endl;
	cin >> action;

	switch(action)
	{
	case 1:
		cout << "Приветствие" << endl;
		break;
	case 2:
		cout << "Начало работы" << endl;
		break;
	case 3:
		cout << "Окончание работы" << endl;
		break;
	default:
		cout << "Введите корректные данные" << endl;
	}

	system("pause");*/

	/*setlocale(0, "");
	int num, act;

	cout << "Введите числo" << endl;
	cin >> num;
	cout << "Выберите действие: 1 - квадрат числа, 2- куб и т.д." << endl;
	cin >> act;

	int res = pow(num, act);


	cout << res << endl;

	system("pause");*/
	/*setlocale(0, "");
	int num;

	cout << "Введите числo" << endl;
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

	cout << "Введите три числа:" << endl;
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
	cout << "Введите число от 1 д 5:" << endl;
	cin >> str;

	switch (str)
	{
		case 1:
			cout << "Это число " << str << endl;
			break;
		case 2:
			cout << "Это число " << str << endl;
			break;
		case 3:
			cout << "Это число " << str << endl;
			break;
		case 4:
			cout << "Это число " << str << endl;
			break;
		default:
			cout << "Нет такого числа" << endl;

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
		cout << "\nПовезет в следующий раз";
	}
	if (i != 12)
	{
		cout << "\nВы угадали!";
	}
	system("pause"); */


	/*int i = 1, rez = 1;
	while (i++ <= 10 && rez != 25)
	{
		cout << "\nВведите число:";
		cin >> rez;
	}
	if (i == 12 && rez != 25)
	{
		cout << "\nВы не угадали:";
	}
	else
	{
		cout << "\nПздравляю! Вы угадали число" << endl;
	}
	system("pause");*/
}