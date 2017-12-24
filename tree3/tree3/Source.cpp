/*
3. Організувати рівневе подання дерева і визначити степені вузлів цього дерева.
	Результат надрукувати при проходженні дерева в прямому порядку. 
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

void printTree(treep arr[N])
{
	int index = 0;
	while (true) {
		if (arr[index] == NULL) break;
		cout << "(" << arr[index]->level << ", " << arr[index]->child << ", " << arr[index]->value << "), ";
		index++;
	}
}

void main()
{
	setlocale(0, "");
	treep levTree[N];
	initArr(levTree);
	int level = 0;
	createTree(levTree, index, level);
	printTree(levTree);
	system("pause");
}