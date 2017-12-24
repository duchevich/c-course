/*
Массив
2. Створити чергу дійсних чисел. Обчислити добуток елементів черги. Якщо результат більший за перший елемент черги, то вилучити перший елемент,
в противному випадку - включити в чергу добуток.
*/

#include <iostream>

using namespace std;
#define N 100

// структура черги (масив)
typedef struct queue {
	float value[N];
	int start;
	int end;
	int lenght;
	float dobutok;
}*queuePointer;

// ініціалізація черги
void init(queuePointer queue)
{
	queue->start = 0;
	queue->end = -1;
	queue->lenght = 0;
	queue->dobutok = 1;
}

// додавання елементу в чергу
void insertQueue(queuePointer &queue, float num)
{
	if (queue->lenght < N) {
		queue->end++;
		if (queue->end == N) {
			queue->end = queue->end % N;
		}
		queue->lenght++;
		queue->value[queue->end] = num;
		queue->dobutok *= num;
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
	cout << "Введіть елементи черги (вихід - 'q')" << endl;
	char c[10];
	while (true) {
		cout << "Введіть число: " << endl;
		cin >> c;
		float num = atof(c);
		if (c[0] == 'q') break;
		else insertQueue(myQueue, num);
	}
	printQueue(myQueue);
	cout << "myQueue->dobutok = " << myQueue->dobutok << endl;
	if (myQueue->dobutok > myQueue->value[myQueue->start])
		deleteQueue(myQueue);
	else 
		insertQueue(myQueue, myQueue->dobutok);
	printQueue(myQueue);
	system("pause");
}