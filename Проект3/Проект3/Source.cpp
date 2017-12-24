#include <iostream>
using namespace std;

#define N 100

void massiv(int arr[N], int&);

int main()
{
	setlocale(0, "");

	int m[N];
	int a = 0;

	massiv(m, a);

	for (int i = 0; i < a; i++) {
		
		cout << m[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void massiv(int arr[N], int &a)
{
	cout << "Введiть розмір масиву";
	cin >> a;
	cout << "Введiть значення масиву";
	for (int i = 0; i < a; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
}
