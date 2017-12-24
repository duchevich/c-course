/*
	Массив
	1. Створити чергу з цілих чисел. Організувати функцію створення черги, додавання та вилучення елементу черги. Роздрукувати    
*/

#include <iostream>

using namespace std;
#define N 5

// структура черги (масив)
typedef struct queue {
	int value[N];
	int start;
	int end;
	int lenght;
}*queuePointer;

// ініціалізація черги
void init(queuePointer queue)
{
	queue->start = 0;
	queue->end = -1;
	queue->lenght = 0;
}

// додавання елементу в чергу
void insertQueue(queuePointer &queue)
{
	if (queue->lenght < N) {
		char input[10];
		cout << "Введіть число: " << endl;
		cin >> input;
		queue->end++;
		if (queue->end == N) {
			queue->end = queue->end % N;
		}
		queue->lenght++;
		queue->value[queue->end] = atoi(input);
	}
	else {
		cout << "Черга повна" << endl;
	}
}
void deleteQueue(queuePointer &queue)
{
	cout << "Видалення з черги." << endl;
	queue->value[queue->start] = NULL;
	queue->start++;
	queue->lenght--;
}

void printQueue(queuePointer queue)
{
	cout << "Друк черги." << endl;
	for (int i = 0; i < queue->lenght; i++) {
		cout << queue->value[(queue->start + i) % N] << endl;
		
	}
}

void main()
{
	setlocale(0, "");
	queuePointer myQueue = new queue;
	init(myQueue);
	cout << "Робота з чергою: ввести елемент - 'e', видалити елемент - 'd', друк черги - 'p', вихід - 'q'" << endl;
	char c = NULL;
	while (c == 'e' || c == 'd' || c == 'p' || c != 'q') {
		cin >> c;
		switch (c) {
			case 'e':
				insertQueue(myQueue); break;
			case 'd':
				deleteQueue(myQueue); break;
			case 'p':
				printQueue(myQueue); break;
			default:
				break;
		}
		//cout << "myQueue->start = " << myQueue->start << endl;
		//cout << "myQueue->end = " << myQueue->end << endl;
		//cout << "myQueue->lenght = " << myQueue->lenght << endl;
	}
	system("pause");
}