/*
10. Написати програму, яка шукає індекси всіх сідлових точок матриці. 			
Сідлова точка – елемент матриці, який є найбільшим у рядку і одночасно 			
найменший в стовпці, або навпаки.
*/

#include <iostream>
using namespace std;

#define N 100
#define M 100

void dots(int arr[N][M]);
void matr(int arr[N][M]);


int main()
{	
	setlocale(0, "");
	/*int m[N][N] = {
		{ 2, 3, 5 },
		{ 2, 4, 6 },
		{ -2, 7, 2 }
	};*/
	int m[N][M];
	int a = 0;
	int b = 0;
	matr(m,a,b);
	dots(m,a,b);
	system("pause");
	return 0;
}
void matr(int arr[N][M], int &a, int &b)
{
	
	cout << "Введiть розмірність квадратної матриці";
	cin >> a;
	cin >> b;
	cout << "Введiть значення 1 квадратної матриці";
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
			cin >> arr[i][j];
		}
	}
}

void dots(int arr[N][M])
{
	int max, min;
	int jmin;

	for (int i = 0; i < N; i++) {
		min = arr[i][0];
		jmin = 0;
		for (int j = 0; j < M; j++) {
			if (arr[i][j] < min) {
				min = arr[i][j];
				jmin = j;
			}
		}
		for (int k = 0; k < N; k++) {
			max = arr[0][jmin];
			if (arr[k][jmin] > max) {
				max = arr[k][jmin];
			}
		}
		if (min == max)
		{
			cout << "Сідлова точка " << min << endl;
		}
	}
}


/*#include <conio.h>
#include <iostream>
#define n 5
using namespace std;

void Vvid(int *x) 
{
	for (int i = 0; i < n; i++)
		cin >> x[i];
}

int main()
{
	int a[n];
	Vvid(a);
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << endl;
	system("pause");
}*/

/*#include <iostream>
#define n 5
using namespace std;

float dil(int, int);

int main()
{
	setlocale(0, "");
	int x = 0;
	int y = 0;

	cout << "Введите данные: " << endl;
	cin >> x >> y;

	float p = dil(x, y);
	cout << p << endl;
	system("pause");
	return 0;
}

float dil(int a, int b)
{
	float d = (float)a / b;
	if (b == 0) {
		cout << "Делить на ноль нельзя" << endl;
		return -1;
	}
	return d;
}*/


/*#include <iostream>
#define n 5
using namespace std;

int perimetr(int, int, int);

int main()
{
	setlocale(0, "");
	int x = 0;
	int y = 0;
	int z = 0;

	cout << "Введите данные: " << endl;
	cin >> x >> y >> z;

	int p = perimetr(x, y, z);
	cout << p << endl;
	system("pause");
	return 0;
}

int perimetr(int a, int b, int c)
{
	int p = a + b + c;
	return p;
}*/
