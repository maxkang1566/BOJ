#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef int element;		// 데이터의 자료형 // 1차원 배열
int top = -1;

int is_empty()
{
	return (top == -1);
}

// 포화 상태 검출 함수
int is_full(int k)
{
	return (top == (k - 1));
}

// 삽입 함수
void push(int* stack, element item, int size)
{
	if (is_full(size)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else stack[++top] = item;
}

// 삭제 함수
element pop(int* stack)
{
	if (is_empty()) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return stack[top--];
}

int main(void)
{
	int k, num;
	int sum = 0;
	scanf("%d", &k);
	int* stack = (int*)malloc(sizeof(int)*k);

	for (int i = 0; i < k; i++)
	{
		scanf("%d", &num);
		if (num == 0) {
			pop(stack);
		}
		else
			push(stack, num, k);
	}

	for (int i = 0; i < top+1; i++)
	{
		sum += stack[i];
	}

	printf("%d", sum);
	return 0;
}