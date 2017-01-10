#pragma once
버블 다시 정리
#include <stdio.h>
void main(void) {
	int t = !2;
	printf("!2=%d\n", t);
	int arr[5] = { 7, 3,5,9, 2 };
	int i, j, c = 1;
	printf("%d %d %d %d %d (%d) \n", arr[0], arr[1], arr[2], arr[3], arr[4], c);

	for (i = 0; i <= 4; i++) {
		for (j = i + 1; j<5 - i; j++) {
			if (arr[j] < arr[j - 1]) {
				int tmp;
				tmp = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tmp;
			}
			printf("%d %d %d %d %d (%d) \n",
				arr[0], arr[1], arr[2], arr[3], arr[4], ++c);
		}
	}
}