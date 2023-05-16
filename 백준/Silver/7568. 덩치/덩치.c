#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int N;
    int arr[50][2];
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d %d", &arr[i][0], &arr[i][1]);
    }
    for(int i = 0; i < N; i++) {
        int k = 1;
        for(int j = 0; j < N; j++) {
            if(arr[i][0] < arr[j][0] && arr[i][1] < arr[j][1]) {
                k++;
            }
        }
        printf("%d ", k);
    }
}