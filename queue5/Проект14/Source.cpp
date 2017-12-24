/*
������� ������
5. �������� �����, �������� ��� ������ ���������� ��� ����� ���� � ���� ���������. ����������� ��� ���������:
		� ��������� �������� �� �����;
		� ��������� ������� �������� �����;
		� ��������� ����� �����;
		� �������� ����� �� �������� �����;
		� ��������� � ����� ���������� ��� �� ���� �� ���� � ������������ ����������.
*/
#include <iostream>
#include <string>
using namespace std;


// ��������� ����� 
typedef struct node {
	string city;
	int population;
	struct node *next;
}*nodePointer;

typedef struct queue {
	struct node *start;
	struct node *finish;
} *queuePointer;

// ������������ �����
void init(queuePointer myQueue) {
	myQueue->start = 0;
	myQueue->finish = 0;
}

// ��������� �������� � �����
void push(queuePointer myQueue, string val1, int val2)
{
	nodePointer item = new node;
	item->city = val1;
	item->population = val2;
	item->next = NULL;
	myQueue->finish = item;
	if ((myQueue->start == 0) && (myQueue->finish == 0)) {
		myQueue->start = myQueue->finish;
	}
}

// ��������� �������� � �����
nodePointer pop(nodePointer &queue)
{
	nodePointer value = new node;
	return value;
}

void printQueue(queuePointer myQueue)
{
	nodePointer cursor = new node;
	for (cursor = myQueue->start; cursor != NULL; cursor = cursor->next) {
		cout << cursor->city << " " << cursor->population << endl;
	}

}

void main()
{
	setlocale(0, "");
	nodePointer firstNode, lastNode;
	lastNode = new node;
	firstNode = lastNode;
	init(myQueue);
	
	system("pause");
}