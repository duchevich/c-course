/*
3. ������ ������� ������ ������� �. ��������� ����� ����� � ��������� ������.
4. ����������� ������ �������� ������� �� ������ ��������� ������� �.
5. ������ ������� �. ������� ������ ������������ ������� ������� ����� � ������ ��������� 
	���������� �����.
6. ������ ������� �. ���� ������������ ������� ������� ������� ��� �������� ������� �����, 
	�� ������� ������ ������ ����� � ��� ������, �� ����������� ������������ �������.
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

	cout << "������ ��������� ����������� ������� ";
	cin >> a;
	cin >> b;
	cout << "������ �������� ����������� ������� " << endl;
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
			cin >> arr[i][j];
		}
	}
}

// 3. ������ ������� ������ ������� �. ��������� ����� ����� � ��������� ������.
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
	cout << "����� � ������������ ������ " << index << endl;
}

//4. ����������� ������ �������� ������� �� ������ ��������� ������� �.
void diagonal_matrix(int arr[N][M], int &a, int &b)
{
	int tmp;
	for (int i = 0, j = a - 1; i < a; i++, j--) {
		tmp = arr[i][i];
		arr[i][i] = arr[j][i];
		arr[j][i] = tmp;	
	}
}

//5. ������ ������� �. ������� ������ ������������ ������� ������� ����� � ������ ��������� ���������� �����.
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

//6. ������ ������� �.���� ������������ ������� ������� ������� ��� �������� ������� �����,
//�� ������� ������ ������ ����� � ��� ������, �� ����������� ������������ �������.
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
	cout << "C��a �������� ������� ����� " << sum << endl;
	cout << "����� � ������������ ������ " << index << endl;
	cout << "����������� ����� " << max << endl;
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