/*
Массив
4. Створити чергу цілих чисел. Якщо перший елемент черги мінімальний - вилучити його з черги, в противному випадку - помістити в кінець черги
*/
#include <iostream>

using namespace std;
#define N 100

// структура черги (масив)
typedef struct queue {
	int value[N];
	int start;
	int end;
	int lenght;
	int min;
}*queuePointer;

// ініціалізація черги
void init(queuePointer queue)
{
	queue->start = 0;
	queue->end = -1;
	queue->lenght = 0;
}

// додавання елементу в чергу
void push(queuePointer &queue, int num)
{
	if (queue->lenght < N) {
		queue->end++;
		if (queue->end == N) {
			queue->end = queue->end % N;
		}
		queue->lenght++;
		queue->value[queue->end] = num;
	}
	else {
		cout << "Черга повна" << endl;
	}
}
int pop(queuePointer &queue)
{
	int value = queue->value[queue->start];
	queue->value[queue->start] = NULL;
	queue->start++;
	queue->lenght--;
	return value;
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
	int min = 0;
	while (true) {
		cout << "Введіть число: " << endl;
		cin >> c;
		int num = atoi(c);
		if (c[0] == 'q') break;
		else push(myQueue, num);
		if (myQueue->lenght == 1) min = num;
		if (min > num) min = num;
	}
	printQueue(myQueue);
	//cout << min << endl;
	cout << endl;
	if (myQueue->value[myQueue->start] == min) pop(myQueue);
	else {
		int first = pop(myQueue);
		push(myQueue, first);
	}
	printQueue(myQueue);
	system("pause");
}