#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STACK_SIZE 10000

typedef struct {
	int data[MAX_STACK_SIZE];
	int top;
} Stack;

void stack_init(Stack* stack) {
	stack->top = -1;
}

int is_empty(Stack* stack) {
	return stack->top == -1;
}

int is_full(Stack* stack) {
	return stack->top == MAX_STACK_SIZE - 1;
}

void push(Stack* stack, int item) {
	if (is_full(stack)) {
		return;
	}
	stack->data[++stack->top] = item;
}

int pop(Stack* stack) {
	if (is_empty(stack)) {
		return -1;
	}

	return stack->data[stack->top--];
}

int top(Stack* stack) {
	if (is_empty(stack)) {
		return -1;
	}

	return stack->data[stack->top];
}

int size(Stack* stack) {
	return stack->top + 1;
}

int main() {
	int n, x;
	char cmd[6];
	Stack stack;
	stack_init(&stack);

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%s", cmd);

		if (strcmp(cmd, "push") == 0) {
			scanf("%d", &x);
			push(&stack, x);
		}
		else if (strcmp(cmd, "pop") == 0) {
			printf("%d\n", pop(&stack));
		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", size(&stack));
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", is_empty(&stack));
		}
		else if (strcmp(cmd, "top") == 0) {
			printf("%d\n", top(&stack));
		}
	}

	return 0;
}
