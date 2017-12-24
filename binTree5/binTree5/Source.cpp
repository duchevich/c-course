/*
5. Побудувати двійкове дерево пошуку з букв рядка, що вводиться. Вивести його на екран у вигляді дерева.
	Знайти букви, що зустрічаються більше одного разу. Видалити з дерева ці літери. Вивести елементи дерева, що залишилися, 
	при його проході в оберненому порядку.
*/

#include <iostream>
#include <string>
#include <Windows.h>

using namespace std;

#define N 100
typedef struct node {
	char sign;
	struct node *l;
	struct node *r;
} *nodePointer;

nodePointer createTree(char str[N], int len)
{
	nodePointer nod;
	int c;
	nod = NULL;
	if (len) {
		c = len / 2;
		nod = new node;
		nod->sign = str[c];
		nod->l = createTree(&str[0], c);
		nod->r = createTree(&str[c + 1], len -c - 1);
	}
	return nod;
}

void printToEnd(nodePointer tree)
{
	if (tree == NULL) return;
	printf("%c, ", tree->sign);
	printToEnd(tree->l);
	printToEnd(tree->r);
}

void repeatTree(nodePointer tree, char sign, int &count)
{
	if (tree == NULL) return;
	if (tree) {
		if (tree->sign == sign) {
			count++;
		}
	}
	repeatTree(tree->l, sign, count);
	repeatTree(tree->r, sign, count);
}

void goToTree(nodePointer tree, nodePointer mainTree)
{
	int count = 0;
	if (tree == NULL) return;
	if (tree) {
		char sign = tree->sign;
		repeatTree(mainTree, sign, count);
		if (count > 1) {
			printf("Елемент %c. Повторів: %d\n", sign, count);
		}
		goToTree(tree->l, mainTree);
		goToTree(tree->r, mainTree);
	}
	
}

void main()
{
	setlocale(0, "");
	SetConsoleCP(1251);// установка кодовой страницы win-cp 1251 в поток ввода
	SetConsoleOutputCP(1251); // установка кодовой страницы win-cp 1251 в поток вывода
	cout << "Введіть рядок: " << endl;
	char text[N];
	string str;
	getline(cin, str);
	int len = str.length();
	strcpy_s(text, str.c_str());
	nodePointer myTree = NULL;
	myTree = createTree(text, len);
	printToEnd(myTree);
	//cout << endl;
	goToTree(myTree, myTree);
	
	
	//cout << text << endl;
	/*string str;
	getline(cin, str);
	int len = str.length();
	
	text = str;
	*/



	
	//cout << "Повтори: " << endl;
	//goToTree(myTree);
	//printToEnd(myTree);
	//cout << endl;
	
	/*printToEnd(myTree);
	cout << "Знайти число: " << endl;
	char input[10];
	cin >> input;
	int val = atoi(input);
	nodePointer srch = searchTree(myTree, val);
	
	cout << endl;
	int max = myTree->val;
	maxValueOfTree(myTree, max);
	cout << "Максимальне значення: " << max << endl;*/
	system("pause");
}







/*
void createTree(nodePointer &tree, string str)
{
int len = str.length();
for (int i = 0; i < len; i++) {
insertNode(tree, str[i]);
//cout << str[i] << endl;
}
}


void insertNode(nodePointer &tree, char sign)
{
if (tree == NULL) {
tree = new node;
tree->sign = sign;
tree->l = tree->r = NULL;
}
if (tree->sign > sign) {
if (tree->l != NULL) {
insertNode(tree->l, sign);
}
else {
tree->l = new node;
tree->l->l = tree->l->r = NULL;
tree->l->sign = sign;
}
}
if (tree->sign < sign) {
if (tree->r != NULL) {
insertNode(tree->r, sign);
}
else {
tree->r = new node;
tree->r->l = tree->r->r = NULL;
tree->r->sign = sign;
}
}
}

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
}*/