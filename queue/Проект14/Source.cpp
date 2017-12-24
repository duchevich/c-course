/*
	������
	1. �������� ����� � ����� �����. ����������� ������� ��������� �����, ��������� �� ��������� �������� �����. ������������    
*/

#include <iostream>

using namespace std;
#define N 5

// ��������� ����� (�����)
typedef struct queue {
	int value[N];
	int start;
	int end;
	int lenght;
}*queuePointer;

// ����������� �����
void init(queuePointer queue)
{
	queue->start = 0;
	queue->end = -1;
	queue->lenght = 0;
}

// ��������� �������� � �����
void insertQueue(queuePointer &queue)
{
	if (queue->lenght < N) {
		char input[10];
		cout << "������ �����: " << endl;
		cin >> input;
		queue->end++;
		if (queue->end == N) {
			queue->end = queue->end % N;
		}
		queue->lenght++;
		queue->value[queue->end] = atoi(input);
	}
	else {
		cout << "����� �����" << endl;
	}
}
void deleteQueue(queuePointer &queue)
{
	cout << "��������� � �����." << endl;
	queue->value[queue->start] = NULL;
	queue->start++;
	queue->lenght--;
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
	init(myQueue);
	cout << "������ � ������: ������ ������� - 'e', �������� ������� - 'd', ���� ����� - 'p', ����� - 'q'" << endl;
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