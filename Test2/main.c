#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include "selectSort.h"
//
//
//void main() {
//	//	selectSort();
//
//		/* 구조체 연습
//		struct student {
//			int st_num;
//			char Name[10];
//			int class;
//		};
//		struct student std1, std2, std3 = { 3, "김철수", 20 };
//		std1.st_num = 1;
//		gets(std1.Name);
//		std1.class = 10;
//		std2 = std1;
//
//		printf("번호는 %d 번 입니다. \n", std1.st_num);
//		printf("이름은 %s 입니다.\n", std1.Name);
//		printf("반은 %d반 입니다.\n\n", std1.class);
//
//		printf("번호는 %d 번 입니다. \n", std2.st_num);
//		printf("이름은 %s 입니다.\n", std2.Name);
//		printf("반은 %d반 입니다.\n\n", std2.class);
//
//		printf("번호는 %d 번 입니다. \n", std3.st_num);
//		printf("이름은 %s 입니다.\n", std3.Name);
//		printf("반은 %d반 입니다.\n\n", std3.class);
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
//	//	printf("%d 번 나이 : %d  키: %5.1f 몸무게: %5.1f \n",
//	//		classes[i].st_num, classes[i].age, classes[i].height, classes[i].weight);
//	//}
//
//
//
//	/*//=============구조체 
//	struct student member[3] = {
//		{1,10,120.1, 25.0},
//		{2,12,135.2,30.0},
//		{3,11,130.0,28.5}
//	};
//
//	struct student *p;
//	int size;
//
//	puts("구조체 변수를 이용하여 출력");
//	for (int i = 0; i < 3; i++) {
//
//		printf("%d번 나이 :%d  키 :%5.1f  몸무게: %5.1f\n",
//			member[i].st_num, member[i].age, member[i].height, member[i].weight);
//	}
//
//	p = member;//배열일때는 &안해도됩 할당 후
//	puts("\n 구조체 주소변수를 이용하여 출력");
//	for (int i = 0; i < 3; i++) {
//	printf("%d번 나이 :%d  키 :%5.1f  몸무게: %5.1f\n", (p+i)->st_num, (p + i)->age, (p + i)->height, (p + i)->weight);
//	}
//
//	size = sizeof(member);
//	printf("member의 크기는 %d byte입니다. \n", size);
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
//	struct employ employee = { "홍길동", 110, 3000 };
//	strunct_p = &employee;
//
//
//	puts("****인천주식회사*****");
//	printf("사원이름 :%s\n", employee.name);
//	printf("사원번호 :%d\n", employee.empno);
//	printf("사원 연봉 : %d\n", employee.pay);
//
//	puts("구조체 주소변수로 출력");
//	printf("사원이름 : %s\n", strunct_p->name);
//	printf("사원번호 : %d\n", strunct_p->empno);
//	printf("사원 연봉 : %d\n", strunct_p->pay);
//
//	struct employ com_1;
//	printf("이름: "); scanf("%s", &com_1.name);
//	printf("사번: "); scanf("%d", &com_1.empno);
//	printf("연봉: "); scanf("%d", &com_1.pay);
//
//
//	printf("사원이름 : %s", com_1.name);
//	printf("사원번호 : %d", com_1.empno);
//	printf("사원연봉 : %d", com_1.pay);
//	*/
//
//	/*공용체- 구조체와 다르게 메모리 공유
//
//	union unions {
//		char type;
//		int price;
//		float gram;
//	}pp;
//
//	union unions mix;
//	mix.type = 'T';
//	printf("유형은 %c 입니다. \n", mix.type);
//
//	mix.price = 5000;
//	printf("가격은 %d입니다.\n", mix.price);
//	*/
//
//
//
//
//
//}