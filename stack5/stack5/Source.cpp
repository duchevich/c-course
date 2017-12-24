/*
5. Задача про Ханойські вежі. Написати програму для друку послідовності переміщень дисків зі
стержня на стержень, необхідних для переносу піраміди зі стержня 1 на стержень 3 при використанні
стержня 2 у якості допоміжного.
*/

#include <iostream>

using namespace std;

void hanoi_towers(int quantity, int from, int to, int buf_peg)   
{   
	if (quantity != 0)
	{
		hanoi_towers(quantity - 1, from, buf_peg, to);

		cout << from << " -> " << to << endl;

		hanoi_towers(quantity - 1, buf_peg, to, from);
	}
}

int main()
{
	setlocale(LC_ALL, "rus");
	int start_peg, destination_peg, buffer_peg, plate_quantity;
	cout << "Номер первого столбика:" << endl;
	cin >> start_peg;
	cout << "Номер конечного столбика:" << endl;
	cin >> destination_peg;
	cout << "Номер промежуточного столбика:" << endl;
	cin >> buffer_peg;
	cout << "Количество дисков:" << endl;
	cin >> plate_quantity;

	hanoi_towers(plate_quantity, start_peg, destination_peg, buffer_peg);
	system("pause");
	return 0;
}