/*
3. Задана матриця дійсних значень А. Визначити номер рядка з найбільшим числом.
4. Переставити місцями елементи головної та побічної діагоналей матриці А.
5. Задана матриця А. Поміняти місцями максимальний елемент кожного рядка з першим елементом 
	відповідного рядка.
6. Задана матриця А. Якщо максимальний елемент матриці дорівнює сумі елементів першого рядка, 
	то поміняти місцями перший рядок з тим рядком, де знаходиться максимальний елемент.
*/

#include <iostream>
using namespace std;

#define N 100
#define M 100


void enter_matrix(int arr[N][M], int&, int&);
void max_num_matrix(int arr[N][M], int&, int&);
void diagonal_matrix(int arr[N][M], int&, int&);
void first_max_matrix(int arr[N][M], int&, int&);
void sum_max_matrix(int arr[N][M], int&, int&);
void print_matrix(int arr[N][M], int&, int&);

int main()
{
	setlocale(0, "");
	int m[N][M];
	int a = 0;
	int b = 0;
	enter_matrix(m, a, b);
	sum_max_matrix(m, a, b);
	print_matrix(m, a, b);
	system("pause");
	return 0;
}
void enter_matrix(int arr[N][M], int &a, int &b)
{

	cout << "Введіть розмірність квадратичної матриці ";
	cin >> a;
	cin >> b;
	cout << "Введіть значення квадратичної матриці " << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
			cin >> arr[i][j];
		}
	}
}

// 3. Задана матриця дійсних значень А. Визначити номер рядка з найбільшим числом.
void max_num_matrix(int arr[N][M], int &a, int &b)
{
	int index = 0;
	int max = arr[0][0];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				index = i;
			}
		}
	}
	cout << "Рядок з максимальним числом " << index << endl;
}

//4. Переставити місцями елементи головної та побічної діагоналей матриці А.
void diagonal_matrix(int arr[N][M], int &a, int &b)
{
	int tmp;
	for (int i = 0, j = a - 1; i < a; i++, j--) {
		tmp = arr[i][i];
		arr[i][i] = arr[j][i];
		arr[j][i] = tmp;	
	}
}

//5. Задана матриця А. Поміняти місцями максимальний елемент кожного рядка з першим елементом відповідного рядка.
void first_max_matrix(int arr[N][M], int &a, int &b)
{
	for (int i = 0; i < a; i++) {
		int index = 0;
		int tmp = arr[i][0];
		int max = arr[i][0];
		for (int j = 0; j < b; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				index = j;
			}
		}
		arr[i][0] = max;
		arr[i][index] = tmp;
	}
}

//6. Задана матриця А.Якщо максимальний елемент матриці дорівнює сумі елементів першого рядка,
//то поміняти місцями перший рядок з тим рядком, де знаходиться максимальний елемент.
void sum_max_matrix(int arr[N][M], int &a, int &b)
{
	int sum = 0;
	for (int i = 0; i < a; i++) {
		sum += arr[0][i];
	}
	int index = 0;
	int max = arr[0][0];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (arr[i][j] > max) {
				max = arr[i][j];
				index = i;
			}
		}
	}
	if (max == sum) {
		int tmp = 0;
		for (int i = 0; i < a; i++) {
			tmp = arr[0][i];
			arr[0][i] = arr[index][i];
			arr[index][i] = tmp;
		}
	}
	cout << "Cумa елементів першого рядка " << sum << endl;
	cout << "Рядок з максимальним числом " << index << endl;
	cout << "Максимальне число " << max << endl;
}

void print_matrix(int arr[N][M], int &a, int &b)
{
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
}