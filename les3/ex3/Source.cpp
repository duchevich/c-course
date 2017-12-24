	#include <iostream>
	#define N 100
	#define M 100


	#define n 3
	using namespace std;

	int main()

	{
		//7. Написати програму, яка обчислює скалярний добуток тих рядків матриці, в яких знаходяться максимальний і мінімальний елементи.
		setlocale(LC_ALL, "RUS");

		int arr[a][b] = { { 1, 2, 3 },{ 4, 5, 6 },{ 7, 8, 9 } };






		int dob = 0;
		int arrsum[n][n];
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				arrsum[i][j] = arr1[i][j] * arr2[i][j];
			}
		}
		cout << "добуток двох матриць" << endl;
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << arrsum[i][j] << " ";
			}
			cout << endl;
		}
		// 6. Написати програму, яка обчислює суму і різницю двох матриць.
		/*setlocale(LC_ALL, "RUS");
		int a, b;
		int arr1[N][M];
		int arr2[N][M];

		cout << "Введiть розмірність квадратної матриці";
		cin >> a;
		cin >> b;
		cout << "Введiть значення 1 квадратної матриці";
		for (int i = 0; i < a; i++) {
			for (int j = 0; j < b; j++) {
				cout << "[" << i + 1 << "]" << "[" << j + 1 << "]" << ": ";
				cin >> arr1[i][j];
			}
		}
		cout << "Введiть значення 2 квадратної матриці";
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
		cout << "сумa двох матриць" << endl;
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
		cout << "різниця двох матриць" << endl;
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arrsum[i][j] << " ";
			}
			cout << endl;
		}

		system("pause");*/
		
		// 5. Дано послідовність дійсних чисел. Організувати вивід таблиці
		/*setlocale(LC_ALL, "RUS");
		int arr[5] = { 1, 2, 3, 4, 5 };
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				cout << arr[(j+i)%5] << " ";
			}
			cout << endl;
		}
		
		system("pause");*/

		
		// 4. Написати програму, яка логічній змінній присвоюється значення true (1), якщо в масиві немає нульових елементів, і значення false (0) в противному випадку.
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "Введiть кiлькiсть елементiв масиву ";
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


		//3. Написати програму, яка виводить на екран спочатку всі від’ємні елементи масиву, а потім додатні.
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "Введiть кiлькiсть елементiв масиву ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		cout << "від’ємні елементи масиву "<< endl;
		for (int i = 0; i < n; i++) {
			if (arr[i] < 0) {
				cout << arr[i] << endl;
			}
		}
		cout << "додатні елементи масиву " << endl;
		for (int i = 0; i < n; i++) {
			if (arr[i] > 0) {
				cout << arr[i] << endl;
			}
		}
		system("pause");*/

		
		//2. Написати програму, яка знаходить у послідовності чисел від’ємні
		/*setlocale(LC_ALL, "RUS");

		int arr[N], n;
		cout << "Введiть кiлькiсть елементiв масиву ";
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
		
		//1. Дано послідовність дійсних чисел. Написати програму, яка визначає із скількох від’ємних чисел вона починається(до першого додатного числа).
		/*setlocale(LC_ALL, "RUS");

		float arr[N], n;
		cout << "Введiть кiлькiсть елементiв масиву "; 
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
		cout << "Введiть кiлькiсть елементiв масиву "; 
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "[" << i + 1 << "]" << ": ";
			cin >> arr[i];
		}
		cout << "\nВаш масив: ";
		for (int i = 0; i < n; i++) {
			cout << arr[i] << " ";
			
		}
		cout << endl;
		
		system("pause");*/

		/*setlocale(LC_ALL, "RUS");

		//опис масиву с[n] і його ініціалізація

		float c[n] = { 6.4, 1.5, -5.6, 3.7, 18.9, 10.3, -0.6, 44.5,-0.2, 8.9, 55.3, 6.9, 4.3, 7.7, 10.9 };

		float max, min;
		int imax, imin;

		cout << " Массив с[n] размерности " << n << endl;

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