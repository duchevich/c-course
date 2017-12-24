/*
«в€зний список
5. —творити чергу, елементи €коњ м≥ст€ть ≥нформац≥ю про назву м≥ста ≥ його населенн€. ѕередбачити так≥ можливост≥:
		Ц долученн€ елемента до черги;
		Ц вилученн€ першого елемента черги;
		Ц виведенн€ вм≥сту черги;
		Ц очищенн€ памТ€т≥ в≥д елемент≥в черги;
		Ц вилученн€ з черги ≥нформац≥њ про вс≥ м≥ста до м≥ста з максимальним населенн€м.
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

// ≥н≥ц≥ал≥зац≥€ черги
void init(queuePointer myQueue) {
	myQueue->start = 0;
	myQueue->finish = 0;
}

// додаванн€ елементу в чергу
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

// видаленн€ елементу з черги
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