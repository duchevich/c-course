#include <iostream>
using namespace std;

float func(float);
void print(float, int);
float max(float, int);
float sum(float, int);

int main()
{
	setlocale(0, "");
	float k;
	int n;
	cout << "Введите значение переменной "; 
	cin >> k;
	cout << "Введите крайнее значение отрезка "; 
	cin >> n;
	print(k, n);
	cout << "Максимальное значение " << max(k, n) << endl; 
	cout << "Сума квадратов " << sum(k, n) << endl;
	system("pause");
	return 0;
}

float func(float x) {
	return cos(pow(x, 2.4) + 1) * sin(2  * x - 1);
}
void print(float x, int n) {
	do {
		cout << x << "\t" << func(x) << endl;
		x += 0.2 * n;
	} while (x <= n);
}
float max(float x, int n)
{
	float max = func(x);
	for (float i = x; i <= n; i += 0.2 * n) {
		if (max < func(i)) max = func(i);
	}
	return max;
}
float sum(float x, int n)
{
	float sum = 0;
	for (float i = x; i <= n; i += 0.2 * n) {
		float num = func(i);
		if (num > 0) {
			sum += pow(num, 2);
		}
	}
	return sum;
}


