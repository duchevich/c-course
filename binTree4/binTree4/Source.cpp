/*
4. Побудувати двійкове дерево пошуку з цілих чисел, що вводиться. Вивести його на екран у вигляді дерева. 
	Знайти вершину, яка містить задане число. Визначити максимальний елемент у цьому дереві.
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

void enterTree(nodePointer &tree)
{
	char input[10];
	int val = 0;
	cout << "Введіть значення дерева: " << endl;
	cin >> input;
	while (true) {
		if (input[0] < '0' || input[0] > '9') break;
		val = atoi(input);
		insertToTree(tree, val);
		cin >> input;
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

void countTree(nodePointer tree, int &count)
{
	if (tree == NULL) return;
	if (tree->l && tree->r) {
		count++;
	}
	countTree(tree->l, count);
	countTree(tree->r, count);
}

void countTreeLeaves(nodePointer tree, int &count)
{
	if (tree == NULL) return;
	if (!tree->l && !tree->r) {
		count++;
	}
	countTreeLeaves(tree->l, count);
	countTreeLeaves(tree->r, count);
}

void repeatTree(nodePointer tree, int val, int &count)
{
	if (tree == NULL) return;
	if (tree) {
		if (tree->val == val) {
			count++;
		}
	}
	repeatTree(tree->l, val, count);
	repeatTree(tree->r, val, count);
}

void maxValueOfTree(nodePointer tree, int &max)
{
	if (tree == NULL) return;
	if (tree) {
		if (tree->val > max) {
			max = tree->val;
		}
	}
	maxValueOfTree(tree->l, max);
	maxValueOfTree(tree->r, max);
}

nodePointer searchTree(nodePointer tree, int val)
{
	if (tree == NULL) return false;
	if (tree) {
		if (tree->val == val) {
			///cout << "AAA" << endl;
			return tree;
		}
	}
	searchTree(tree->l, val);
	searchTree(tree->r, val);
}

void goToTree(nodePointer tree)
{
	if (tree == NULL) return;
	if (tree) {
		int count = 0;
		int val = tree->val;
		repeatTree(tree, val, count);
		if (count > 1) {
			cout << "Елемент " << val << ". Повторів: " << count << endl;
		}
	}
	goToTree(tree->l);
	goToTree(tree->r);
}

void main()
{
	setlocale(0, "");
	nodePointer myTree = NULL;
	enterTree(myTree);
	printToEnd(myTree);
	cout << "Знайти число: " << endl;
	char input[10];
	cin >> input;
	int val = atoi(input);
	nodePointer srch = searchTree(myTree, val);
	printToEnd(srch);
	cout << endl;
	int max = myTree->val;
	maxValueOfTree(myTree, max);
	cout << "Максимальне значення: " << max << endl;
	system("pause");
}