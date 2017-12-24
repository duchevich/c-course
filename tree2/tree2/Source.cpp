/*
2. Визначити кількість листків дерева степеня 3, заданого в розширеній стандартній формі.
*/

#include <iostream>

using namespace std;

typedef struct tree {
	int val;
	struct tree *next[3];
	struct tree *prev;
}*treep;

int level;
int value;

treep createTree(int lev, treep prevTree)
{
	treep node;
	int l;
	if (level > lev) {
		node = new tree;
		node->val = value;
		node->prev = prevTree;
		l = level;
		if (scanf_s("%d %d", &level, &value) != 2) {
			level = -1;
		}
		for (int i = 0; i < 3; i++) {
			node->next[i] = createTree(l, node);
		}
	}
	else {
		node = NULL;
	}
	return node;
}

void printTreeCount(treep root, int &count, int fl)
{
	if (root) {
		cout << fl << ": " << root->val << endl;
		fl++;
		for (int i = 0; i < 3; i++) {
			printTreeCount(root->next[i], count, fl);
		}
	}
	else {
		cout << count << ": " << "NULL" << endl;
		count++;
	}
}

void main()
{
	setlocale(0, "");
	cout << "Введіть рівень та символ" << endl;
	scanf_s("%d %d", &level, &value);
	treep root = createTree(0, NULL);
	int count = 0;
	int fl = 0;
	printTreeCount(root, count, fl);
	cout << "Кількість листків: " << count << endl;
	system("pause");
}