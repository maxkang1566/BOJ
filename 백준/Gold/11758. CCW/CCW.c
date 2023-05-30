#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

typedef struct point {
	int x, y;
}Point;

int ccw(Point A, Point B, Point C) {
	int a = A.x*B.y + B.x*C.y + C.x*A.y;
	int b = A.y*B.x + B.y*C.x + C.y*A.x;

	return a - b;
}

int main(void)
{
	Point arr[3];
	int result;

	for (int i = 0; i < 3; i++)
	{
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	result = ccw(arr[0], arr[1], arr[2]);
	
	if (result > 0)		//반시계
		printf("1");
	else if (result == 0)		//일직선
		printf("0");
	else
		printf("-1");			//시계
	return 0;
}