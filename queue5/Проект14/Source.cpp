/*
Звязний список
5. Створити чергу, елементи якої містять інформацію про назву міста і його населення. Передбачити такі можливості:
		– долучення елемента до черги;
		– вилучення першого елемента черги;
		– виведення вмісту черги;
		– очищення пам’яті від елементів черги;
		– вилучення з черги інформації про всі міста до міста з максимальним населенням.
*/
#include <iostream>
#include <string>
using namespace std;


// структура черги 
typedef struct node {
	string city;
	int population;
	struct node *next;
}*nodePointer;

typedef struct queue {
	struct node *start;
	struct node *finish;
} *queuePointer;

// ініціалізація черги
void init(queuePointer myQueue) {
	myQueue->start = 0;
	myQueue->finish = 0;
}

// додавання елементу в чергу
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

// видалення елементу з черги
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