/*
1. Написати програму для визначення висоти дерева, яке подане в стандартній формі і кожний вузол якого містить один символ.
*/

#include <iostream>

using namespace std;

typedef struct tree {
	char symbol;
	struct tree *next[2];
}*treep;

int level;
char value;

treep createTree(int lev, treep prevTree)
{
	treep node;
	int l;
	if (level > lev) {
		node = new tree;
		node->symbol = value;
		cout << "lev: " << lev << endl;
		l = level;
		if (scanf_s("%d %c", &level, &value) != 2) {
			level = -1;
		}
		for (int i = 0; i < 2; i++) {
			node->next[i] = createTree(l, node);
		}
	}
	else {
		node = NULL;
	}
	return node;
}

void printTreeCount(treep root, int count, int &height)
{
	if (count > height) height = count;
	if (root) {
		count++;
		for (int i = 0; i < 2; i++) {
			printTreeCount(root->next[i], count, height);
		}
	}
}


void printTree(treep root)
{
	if (root) {
		cout << root->symbol << endl;
		for (int i = 0; i < 2; i++) {
			printTree(root->next[i]);
		}
	}
}


void main()
{
	setlocale(0, "");
	cout << "Введіть рівень та символ" << endl;
	scanf_s("%d %c", &level, &value);
	treep root = createTree(0, NULL);
	int count = 0;
	int height = 0;
	printTreeCount(root, count, height);
	cout << "Висота дерева: " << height << endl;
	system("pause");
}