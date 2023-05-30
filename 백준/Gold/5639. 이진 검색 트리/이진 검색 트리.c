#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node* right_child;
	struct node* left_child;
}Node;

Node* root = NULL;

Node* insert(Node* root, int value) {
	if (root == NULL) {
		root = (Node*)malloc(sizeof(Node));
		root->left_child = root->right_child = NULL;
		root->data = value;
		return root;
	}
	else {
		if (root->data > value)
			root->left_child = insert(root->left_child, value);
		else
			root->right_child = insert(root->right_child, value);
	}
	return root;
}

void postOrder(Node* root) {
	if (root != NULL) {
		postOrder(root->left_child);
		postOrder(root->right_child);
		printf("%d\n", root->data);
	}
}

int main(void)
{
	int data;
	while (scanf("%d", &data) != EOF) {
		root = insert(root, data);
	}
	postOrder(root);

	return 0;
}