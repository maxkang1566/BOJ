#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

void print_string() {
	char a[1000];
	scanf("%s", a);
	printf("%c%c\n", a[0], a[strlen(a) - 1]);
}

int main(void)
{
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		print_string();
	}
}