#pragma once
#include<stdio.h>

void selectSort() {
	int arr[5] = { 5,3,2,8,7 };
	int i, j, c = 1;
	printf("%d %d %d %d %d (%d) \n", arr[0], arr[1], arr[2], arr[3], arr[4], c);

	for (i = 0; i < 4; i++) {
		for (j =i+1 ; j <5 ; j++) {
			if (arr[j] < arr[i]) {
				int tmp;
				tmp = arr[j];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
			printf("%d %d %d %d %d (%d) \n", arr[0], arr[1], arr[2], arr[3], arr[4], c);
		}
	}


}


