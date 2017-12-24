#include <iostream>
using namespace std;

#define N 100

void massiv(int arr[N], int&);

void search(int arr[N], int&, int&);

int main()
{
	setlocale(0, "");

	int m[N];
	int a = 0;
	int nod = 0;
	cout << "¬ведiть значенн€ пошуку" << endl;
	cin >> nod;

	massiv(m, a);

	search(m, a, nod);

	for (int i = 0; i < a; i++) {

		cout << m[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}

void massiv(int arr[N], int &a)
{
	cout << "¬ведiть розм≥р масиву";
	cin >> a;
	cout << "¬ведiть значенн€ масиву";
	for (int i = 0; i < a; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
}

 void search(int arr[N], int &a, int &nod) {
	int first = 0;
	int last = a;
	while (first < last) {
		int s = (first + last) / 2;
		if (arr[s] == nod) {
			cout << "„исло знайдене!!!!" << endl;
			break;
		}
		else if (arr[s] > nod) 
			last = s - 1;
		else 
			first = s + 1;
	}
	if (first >= last)
		cout << "„исло не знайдене" << endl;
}
