/*
5. ќрган≥зувати пошук вузла б≥нарного дерева, сума значень пр€мих нащадк≥в €кого Ї максимальною.
*/

#include <iostream>

using namespace std;

typedef struct node {
	int val;
	struct node *l;
	struct node *r;
} *nodePointer;

int max;

void insertNode(nodePointer &root, int val)
{
	if (root == NULL) {
		root = new node;
		root->val = val;
		root->l = root->r = NULL;
	}
	if(val < root->val){
		if (root->l != NULL) {
			insertNode(root->l, val);
		}
		else {
			root->l = new node;
			root->l->val = val;
			root->l->l = root->l->r = NULL;
		}
	}
	if (val > root->val) {
		if (root->r != NULL) {
			insertNode(root->r, val);
		}
		else {
			root->r = new node;
			root->r->val = val;
			root->r->l = root->r->r = NULL;
		}
	}
}

void createSortTree(nodePointer &root)
{
	char input[10];
	int val;
	cin >> input;
	while (input[0] >= '0' && input[0] <= '9'){
		cout << "¬вед≥ть значенн€: " << endl;
		val = atoi(input);
		insertNode(root, val);
		cin >> input;
	}
}

void createTree(nodePointer &root)
{
	char input[10];
	int val;
	do {
		cout << "¬вед≥ть значенн€: " << endl;
		cin >> input;
		val = atoi(input);
		insertNode(root, val);
	} while (input[0] >= '0' && input[0] <= '9');
}

void printTree(nodePointer tree)
{
	if (tree) {
		printTree(tree->l);
		printf("%d ", tree->val);
		printTree(tree->r);
	}
}

void maxNode(nodePointer tree, int &max)
{
	if (tree->l && tree->r) {
		if (max < (tree->l->val + tree->r->val)) {
			max = tree->l->val + tree->r->val;
			cout << max << endl;
		}
		maxNode(tree->l, max);
		maxNode(tree->r, max);
	}
}

void main()
{
	setlocale(0, "");
	nodePointer tree = NULL;
	createSortTree(tree);
	//max = tree->val;
	//cout << "print" << endl;
	//maxNode(tree, max);
	printTree(tree);
	//cout << max << endl;
	system("pause");
}
