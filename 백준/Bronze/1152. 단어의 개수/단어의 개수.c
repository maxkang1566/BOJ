#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>


int main(void) {

	char arr[1000000];
	int i, cnt = 0, len;

	scanf("%[^\n]", arr); // ["%^\n"]은 엔터가 나올때까지 문자열로 받는다는 말이다( 공백도 포함 )
	len = strlen(arr);

	if (len == 1) {   // 만약 공백 하나만 입력되었을때를 위한 if 문 처리를 해주어서 0이 출력되게 함 
		if (arr[i] == ' ') {
			printf("0\n");
			return 0;
		}
	}

	for (i = 1; i<len - 1; i++) {  
		if (arr[i] == ' ') {
			cnt++;
		}
	}

	printf("%d", cnt + 1); 

	return 0;
}