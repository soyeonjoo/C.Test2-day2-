#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "selectSort.h"
//
//
//void main() {
//	//	selectSort();
//
//		/* ����ü ����
//		struct student {
//			int st_num;
//			char Name[10];
//			int class;
//		};
//		struct student std1, std2, std3 = { 3, "��ö��", 20 };
//		std1.st_num = 1;
//		gets(std1.Name);
//		std1.class = 10;
//		std2 = std1;
//
//		printf("��ȣ�� %d �� �Դϴ�. \n", std1.st_num);
//		printf("�̸��� %s �Դϴ�.\n", std1.Name);
//		printf("���� %d�� �Դϴ�.\n\n", std1.class);
//
//		printf("��ȣ�� %d �� �Դϴ�. \n", std2.st_num);
//		printf("�̸��� %s �Դϴ�.\n", std2.Name);
//		printf("���� %d�� �Դϴ�.\n\n", std2.class);
//
//		printf("��ȣ�� %d �� �Դϴ�. \n", std3.st_num);
//		printf("�̸��� %s �Դϴ�.\n", std3.Name);
//		printf("���� %d�� �Դϴ�.\n\n", std3.class);
//
//		*/
//
//	struct student
//	{
//		int st_num;
//		short age;
//		float height;
//		float weight;
//
//	};
//	//struct student classes[3] = {
//	//	{1, 22, 184, 80},
//	//	{2, 25, 170, 59},
//	//	{3, 21, 168, 66}
//	//};
//	//for (int i = 0; i < 3; i++) {
//	//	printf("%d �� ���� : %d  Ű: %5.1f ������: %5.1f \n",
//	//		classes[i].st_num, classes[i].age, classes[i].height, classes[i].weight);
//	//}
//
//
//
//	/*//=============����ü 
//	struct student member[3] = {
//		{1,10,120.1, 25.0},
//		{2,12,135.2,30.0},
//		{3,11,130.0,28.5}
//	};
//
//	struct student *p;
//	int size;
//
//	puts("����ü ������ �̿��Ͽ� ���");
//	for (int i = 0; i < 3; i++) {
//
//		printf("%d�� ���� :%d  Ű :%5.1f  ������: %5.1f\n",
//			member[i].st_num, member[i].age, member[i].height, member[i].weight);
//	}
//
//	p = member;//�迭�϶��� &���ص��� �Ҵ� ��
//	puts("\n ����ü �ּҺ����� �̿��Ͽ� ���");
//	for (int i = 0; i < 3; i++) {
//	printf("%d�� ���� :%d  Ű :%5.1f  ������: %5.1f\n", (p+i)->st_num, (p + i)->age, (p + i)->height, (p + i)->weight);
//	}
//
//	size = sizeof(member);
//	printf("member�� ũ��� %d byte�Դϴ�. \n", size);
//
//
//
//	//=====================================
//	struct  employ {
//		char name[15];
//		int empno;
//		int pay;
//	};
//
//	struct employ *strunct_p;
//
//	struct employ employee = { "ȫ�浿", 110, 3000 };
//	strunct_p = &employee;
//
//
//	puts("****��õ�ֽ�ȸ��*****");
//	printf("����̸� :%s\n", employee.name);
//	printf("�����ȣ :%d\n", employee.empno);
//	printf("��� ���� : %d\n", employee.pay);
//
//	puts("����ü �ּҺ����� ���");
//	printf("����̸� : %s\n", strunct_p->name);
//	printf("�����ȣ : %d\n", strunct_p->empno);
//	printf("��� ���� : %d\n", strunct_p->pay);
//
//	struct employ com_1;
//	printf("�̸�: "); scanf("%s", &com_1.name);
//	printf("���: "); scanf("%d", &com_1.empno);
//	printf("����: "); scanf("%d", &com_1.pay);
//
//
//	printf("����̸� : %s", com_1.name);
//	printf("�����ȣ : %d", com_1.empno);
//	printf("������� : %d", com_1.pay);
//	*/
//
//	/*����ü- ����ü�� �ٸ��� �޸� ����
//
//	union unions {
//		char type;
//		int price;
//		float gram;
//	}pp;
//
//	union unions mix;
//	mix.type = 'T';
//	printf("������ %c �Դϴ�. \n", mix.type);
//
//	mix.price = 5000;
//	printf("������ %d�Դϴ�.\n", mix.price);
//	*/
//
//
//
//
//
//}