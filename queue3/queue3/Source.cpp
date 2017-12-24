/*
������
3. �� ������ ������������ ����� ������������ ��: ����� ������ �� ������� �������� ���� �����, ����� - �����.  
*/

#include <iostream>

using namespace std;
#define N 100

// ��������� ����� (�����)
typedef struct queue {
	int value[N];
	int start;
	int end;
	int lenght;
}*queuePointer;

// ������������ �����
void init(queuePointer queue)
{
	queue->start = 0;
	queue->end = -1;
	queue->lenght = 0;
}

// ��������� �������� � �����
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
		cout << "����� �����" << endl;
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
	cout << "���� �����." << endl;
	for (int i = 0; i < queue->lenght; i++) {
		cout << queue->value[(queue->start + i) % N] << endl;
	}
}

void main()
{
	setlocale(0, "");
	queuePointer myQueue = new queue;
	queuePointer plus = new queue;
	queuePointer minus = new queue;
	init(myQueue);
	init(plus);
	init(minus);
	cout << "������ �������� ����� (����� - 'q')" << endl;
	char c[10];
	while (true) {
		cout << "������ �����: " << endl;
		cin >> c;
		float num = atof(c);
		if (c[0] == 'q') break;
		else push(myQueue, num);
	}
	printQueue(myQueue);
	int num = 0;
	while (myQueue->lenght != 0) {
		num = pop(myQueue);
		if(num >= 0) push(plus, num);
		else push(minus, num);
	}
	printQueue(plus);
	printQueue(minus);
	system("pause");
}