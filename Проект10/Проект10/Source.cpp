#include <iostream>
using namespace std;

#define N 100

void enter_massiv(int arr[N], int&);
void auto_enter_massiv(int arr[N], int&);
void print_massiv(int arr[N], int &);
int linear_search(int arr[N], int&, int&);
void binary_search(int arr[N], int&, int&);

void bulb_sort(int arr[N], int&);

int main()
{
	setlocale(0, "");

	int m[N];
	int a = 0;
	//int nod = 0;
	//cout << "������ ����� ������" << endl;
	//cin >> nod;

	massiv(m, a);


	int sum = 0;
	for (int i = 0; i < a; i++) {
		if (m[i] > 2.7)
			sum += m[i];
	}
	cout << sum << endl;


	//bulb_sort(m, a);
	print_massiv(m, a);
	//linear_search(m, a, nod);


	return 0;
}
// ������� ��� �������� �������
void enter_massiv(int arr[N], int &a)
{
	cout << "������ ����� �������";
	cin >> a;
	cout << "������ ������";
	for (int i = 0; i < a; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
	}
}
// ������� ��� ������������� �������� �������
void auto_enter_massiv(int arr[N], int &a)
{
	cout << "������ ����� �������";
	cin >> a;
	for (int i = 0; i < a; i++) {
		
		cin >> arr[i];
	}
}
// ������� ����� �������
void print_massiv(int arr[N], int &a)
{
	for (int i = 0; i < a; i++) {

		cout << arr[i] << " ";
	}
	cout << endl;
}
// ������ �����
int linear_search(int arr[N], int &a, int &nod) {
	for (int i = 0; i < a; i++) {
		if (arr[i] == nod) {
			cout << "����� ��������!!!!" << endl;
			return 0;
		}
	}
	cout << "����� �� ��������" << endl;
	return 1;
}
// ������� �����
void binary_search(int arr[N], int &a, int &nod) {
	int first = 0;
	int last = a;
	while (first < last) {
		int s = (first + last) / 2;
		if (arr[s] == nod) {
			cout << "����� ��������!!!!" << endl;
			break;
		}
		else if (arr[s] > nod)
			last = s - 1;
		else
			first = s + 1;
	}
	if (first >= last)
		cout << "����� �� ��������" << endl;
}
// ���������� ����������
void bulb_sort(int arr[N], int &n)
{
	int j = 0, c;
	while (j < n)
	{
		for (int i = 0; i < n - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				c = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = c;
			}
		}
		j++;
	}
}