/*
2. У заданому бінарному дереві підрахувати число його листків і надрукувати їх значення: при прямому, зворотньому, рекурсивному обході.
*/

#include <iostream>

using namespace std;

#define N 100
typedef struct node {
	int val;
	struct node *l;
	struct node *r;
} *nodePointer;

void createArray(int arr[N], int &n)
{
	printf("Введіть довжину массиву: ");
	scanf_s("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &arr[i]);
	}
}

void printArray(int arr[N], int &n)
{
	for (int i = 0; i < n; i++) {
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

nodePointer createTree(int arr[N], int n)
{
	nodePointer nod;
	int c;
	nod = NULL;
	if (n) {
		c = n / 2;
		nod = new node;
		nod->val = arr[c];
		nod->l = createTree(&arr[0], c);
		nod->r = createTree(&arr[c + 1], n - c - 1);
	}
	return nod;
}

void insertToTree(nodePointer &tree, int insval)
{
	if (tree == NULL) {
		tree = new node;
		tree->val = insval;
		tree->l = tree->r = NULL;
	}
	if (tree->val > insval) {
		if (tree->l != NULL) {
			insertToTree(tree->l, insval);
		}
		else {
			tree->l = new node;
			tree->l->l = tree->l->r = NULL;
			tree->l->val = insval;
		}
	}
	if (tree->val < insval) {
		if (tree->r != NULL) {
			insertToTree(tree->r, insval);
		}
		else {
			tree->r = new node;
			tree->r->l = tree->r->r = NULL;
			tree->r->val = insval;
		}
	}
}

void printToEnd(nodePointer tree)
{
	if (tree == NULL) return;
	printf("%d, ", tree->val);
	printToEnd(tree->l);
	printToEnd(tree->r);
}

void printToStart(nodePointer tree)
{
	if (tree == NULL) return;
	printToStart(tree->l);
	printToStart(tree->r);
	printf("%d, ", tree->val);
}

void printRecursion(nodePointer tree)
{
	if (tree == NULL) return;
	printRecursion(tree->l);
	printf("%d, ", tree->val);
	printRecursion(tree->r);
}

/*void countTree(nodePointer tree, int &count)
{
	if (tree == NULL) return;
	if (tree->l && tree->r) {
		count++;
	}
	countTree(tree->l, count);
	countTree(tree->r, count);
}*/

void countTree(nodePointer tree, int &count)
{
	if (tree == NULL) return;
	if (!tree->l && !tree->r) {
		count++;
	}
	countTree(tree->l, count);
	countTree(tree->r, count);
}


void main()
{
	setlocale(0, "");
	int n;
	int arr[N];
	createArray(arr, n);
	nodePointer myTree = createTree(arr, n);
	printToEnd(myTree);
	printf("\n");
	printToStart(myTree);
	printf("\n");
	printRecursion(myTree);
	printf("\n");
	int count = 0;
	countTree(myTree, count);
	cout << count << endl;
	system("pause");
}