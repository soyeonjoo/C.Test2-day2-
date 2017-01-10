#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "selectSort.h"


void main() {
//	selectSort();

	/* 구조체 연습*/
	struct student {
		int st_num;
		char Name[10];
		int class;
	};
	struct student std1, std2, std3 = { 3, "김철수", 20 };
	std1.st_num = 1;
	gets(std1.Name);
	std1.class = 10;
	std2 = std1;

	printf("번호는 %d 번 입니다. \n", std1.st_num);
	printf("이름은 %s 입니다.\n", std1.Name);
	printf("반은 %d반 입니다.\n\n", std1.class);
	
	printf("번호는 %d 번 입니다. \n", std2.st_num);
	printf("이름은 %s 입니다.\n", std2.Name);
	printf("반은 %d반 입니다.\n\n", std2.class);

	printf("번호는 %d 번 입니다. \n", std3.st_num);
	printf("이름은 %s 입니다.\n", std3.Name);
	printf("반은 %d반 입니다.\n\n", std3.class);



}