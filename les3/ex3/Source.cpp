	#include <iostream>
	#define N 100
	#define M 100


	#define n 3
	using namespace std;

	int main()

	{
		//7. �������� ��������, ��� �������� ��������� ������� ��� ����� �������, � ���� ����������� ������������ � ��������� ��������.
		setlocale(LC_ALL, "RUS");

		int arr[a][b] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };






		int dob = 0;
		int arrsum[n][n];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				arrsum[i][j] = arr1[i][j] * arr2[i][j];
			}
		}
		cout << "������� ���� �������" << endl;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << arrsum[i][j] << " ";
			}
			cout << endl;
		}
		// 6. �������� ��������, ��� �������� ���� � ������ ���� �������.
		/*setlocale(LC_ALL, "RUS");
		int a, b;
		int arr1[N][M];
		int arr2[N][M];

		cout << "����i�� ��������� ��������� �������";
		cin >> a;
		cin >> b;
		cout << "����i�� �������� 1 ��������� �������";
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
				cin >> arr1[i][j];
			}
		}
		cout << "����i�� �������� 2 ��������� �������";
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
				cin >> arr2[i][j];
			}
		}
		//int arr1[n][n] = { { 1, 2, 3 }, { 4, 5, 6 }, {7, 8, 9} };
		//int arr2[n][n] = { { 1, 2, 3 }, { 4, 5, 6 }, { 7, 8, 9} };
		int arrsum[n][n];

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				arrsum[i][j] = arr1[i][j] + arr2[i][j];
			}
		}
		cout << "���a ���� �������" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arrsum[i][j]<< " ";
			}
			cout << endl;
		}
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				arrsum[i][j] = arr1[i][j] - arr2[i][j];
			}
		}
		cout << "������ ���� �������" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arrsum[i][j] << " ";
			}
			cout << endl;
		}

		system("pause");*/
		
		// 5. ���� ����������� ������ �����. ����������� ���� �������
		/*setlocale(LC_ALL, "RUS");
		int arr[5] = { 1, 2, 3, 4, 5 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[(j+i)%5] << " ";
			}
			cout << endl;
		}
		
		system("pause");*/

		
		// 4. �������� ��������, ��� ������ ����� ������������ �������� true (1), ���� � ����� ���� �������� ��������, � �������� false (0) � ���������� �������.
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "����i�� �i���i��� �������i� ������ ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		bool zero = true;

		for (int i = 0; i < n; i++) {
			if (arr[i] == 0) {
				zero = false;
			}
		}
		cout << zero << endl;
		
		system("pause");*/


		//3. �������� ��������, ��� �������� �� ����� �������� �� �䒺�� �������� ������, � ���� ������.
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "����i�� �i���i��� �������i� ������ ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		cout << "�䒺�� �������� ������ "<< endl;
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0) {
				cout << arr[i] << endl;
			}
		}
		cout << "������ �������� ������ " << endl;
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << endl;
			}
		}
		system("pause");*/

		
		//2. �������� ��������, ��� ��������� � ����������� ����� �䒺��
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "����i�� �i���i��� �������i� ������ ";
		cin >> n;
		for (int i = 0; i < n; i++) {
		cout << "[" << i + 1 << "]" << ": ";
		cin >> arr[i];
		}
		
		for (int i = 0; i < n; i++) {
		if (arr[i] < 0){
		cout << arr[i] << endl;
		}
		}
		system("pause");*/
		
		//1. ���� ����������� ������ �����. �������� ��������, ��� ������� �� ������� �䒺���� ����� ���� ����������(�� ������� ��������� �����).
		/*setlocale(LC_ALL, "RUS");

		float arr[N], n;
		cout << "����i�� �i���i��� �������i� ������ "; 
		cin >> n;

		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		
		int count = 0;
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0)
			{
				count++;
			}
			else {
				break;
			}
		}

		cout << count << endl;
		system("pause");*/
		
		/*setlocale(LC_ALL, "RUS");
		int arr[N], n;
		cout << "����i�� �i���i��� �������i� ������ "; 
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		cout << "\n��� �����: ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
			
		}
		cout << endl;
		
		system("pause");*/

		/*setlocale(LC_ALL, "RUS");

		//���� ������ �[n] � ���� �����������

		float c[n] = { 6.4, 1.5, -5.6, 3.7, 18.9, 10.3, -0.6, 44.5,-0.2, 8.9, 55.3, 6.9, 4.3, 7.7, 10.9 };

		float max, min;
		int imax, imin;

		cout << " ������ �[n] ����������� " << n << endl;

		for (int i = 0; i < n; i++) {
			cout << c[i] << endl;
		}
		max = min = c[0];
		imax = imin = 0;

		for (int i = 1; i < n; i++) {
			if (c[i] > max) {
				max = c[i];
				imax = i;
			}
			else if (c[i] < min) {
				min = c[i];
				imin = i;
			}
		}

		c[imin] = max;
		c[imax] = min;

		cout << "\n\t max = " << max << " min = " << min << endl;
		cout << "\t imax= " << imax + 1 << " imin= " << imin + 1 << endl;

		for (int i = 0; i < n; i++) {
			cout << c[i] << endl;
		}

		system("pause");*/

	/*setlocale(0, "");
	char* students[10] = { "John","Mike", "Stan", "Andrea", "Anna", "Maris", "Maria", "Vika", "Sui", "Suzi" };

	for (int i = 0; i < N; i++) {
		cout << students[i] << endl;
	}
	system("pause");*/
}