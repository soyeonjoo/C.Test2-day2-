#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "selectSort.h"


void main() {
//	selectSort();

	/* ����ü ����*/
	struct student {
		int st_num;
		char Name[10];
		int class;
	};
	struct student std1, std2, std3 = { 3, "��ö��", 20 };
	std1.st_num = 1;
	gets(std1.Name);
	std1.class = 10;
	std2 = std1;

	printf("��ȣ�� %d �� �Դϴ�. \n", std1.st_num);
	printf("�̸��� %s �Դϴ�.\n", std1.Name);
	printf("���� %d�� �Դϴ�.\n\n", std1.class);
	
	printf("��ȣ�� %d �� �Դϴ�. \n", std2.st_num);
	printf("�̸��� %s �Դϴ�.\n", std2.Name);
	printf("���� %d�� �Դϴ�.\n\n", std2.class);

	printf("��ȣ�� %d �� �Դϴ�. \n", std3.st_num);
	printf("�̸��� %s �Դϴ�.\n", std3.Name);
	printf("���� %d�� �Դϴ�.\n\n", std3.class);



}