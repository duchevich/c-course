/*
4. Організувати дужкове подання дерева і визначити степінь цього дерева. Результат надрукувати при проходженні дерева в оберненому порядку.
*/

#include <iostream>

using namespace std;

#define N 100

int index = 0;

typedef struct tree {
	int value;
	int level;
	int child;
}*treep;

void initArr(treep arr[N])
{
	for (int i = 0; i < N; i++) {
		arr[i] = NULL;
	}
}


void createTree(treep arr[N], int &index, int level)
{
	char input[10];
	cout << "Введіть значення: " << endl;
	cin >> input;
	if (input[0] >= '0' || input[0] <= '9') {
		arr[index] = new tree;
		arr[index]->value = atoi(input);
		level++;
		arr[index]->level = level;
		cout << "Введіть кількість нащадків: " << endl;
		cin >> input;
		int n = atoi(input);
		arr[index]->child = n;
		if (n > 0) {
			for (int i = 0; i < n; i++) {
				index++;
				createTree(arr, index, level);
			}
		}
	}
}

void printTree(treep arr[N], int &index, int level)
{
	if (arr[index] != NULL) {
		
		if (arr[index]->child > 0) {
			cout << "(";
			for (int i = 0; i < arr[index]->child; i++) {
				index++;
				printTree(arr, index, level);
			}
			cout << ")";
		}
		cout << arr[index]->value;
	}
}

void main()
{
	setlocale(0, "");
	treep levTree[N];
	initArr(levTree);
	int level = 0;
	createTree(levTree, index, level);
	index = 0;
	printTree(levTree, index, level);
	system("pause");
}