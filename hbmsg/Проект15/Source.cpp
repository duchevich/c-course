#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS

#include "std_lib_facilities.h"
#include <Windows.h>

void main()
{
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	
	// переменные
	string name;
	string friend_name;
	char sex = 0;
	char sex_friend = 0;
	int age = 0;

	// ввод данных
	cout << "Введите имя адресата" << endl;
	cin >> name;
	cout << "Введите пол адресата (м / ж)" << endl;
	cin >> sex;
	cout << "Введите имя друга адресата" << endl;
	cin >> friend_name;
	cout << "Введите пол друга адресата (м / ж)" << endl;
	cin >> sex_friend;
	cout << "Введите возраст адресата" << endl;
	cin >> age;

	// вывод данных
	string intro = (sex == 'м' ? "Дорогой " : "Дорогая ");
	string meet = (sex == 'м' ? "встречал " : "встречала ");
	string hb = (sex == 'м' ? "отметил " : "отметила ");
	string his = (sex_friend == 'м' ? "его " : "ее ");

	cout << intro << name << ", " << "как у тебя дела? \nУ меня все хорошо. Я скучаю по тебе." << endl;
	cout << "Давно ли ты " << meet << friend_name << "?" << endl;
	cout << "Если ты увидишь " <<friend_name << ", пожалуйста, попроси " << his << "позвонить мне." << endl;
	cout << "Я слышалa, ты только что " << hb << "день рождения и тебе исполнилось " << age << " лет." << endl;

	if (age <= 0 || age >= 110) {
		simple_error("Ты шутишь !");
	}
	else if (age < 12) {
		cout << "На следующий год тебе исполнится " << age + 1 << " лет." << endl;
	}
	else if (age > 70) {
		cout << "Я надеюсь, что ты не скучаешь на пенсии." << endl;
	}
	else if (age == 17) {
		cout << "В следующем году ты сможешь голосовать." << endl;
	}
	else {
		cout << "Счастья, здоровья и благополучия!" << endl;
	}
	cout << "Искренне твоя.\n\nТатьяна" << endl;
	
	system("pause");
}