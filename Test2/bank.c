#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int choice; //전역변수
int account;
long money;
int count;
creat();
deposit();
withdraw();
struct backus {
	char account[10];
	char name[10];
	int money;
};
struct backus customer;
void printline() {
	for (int i = 1; i < 20; i++) {
		printf("%c", '-');
		puts("");
	}
}

void init() {
	do {
		printf("1. 계좌생성\n");
		printf("2. 입금\n");
		printf("3. 출금\n");
		printf("4. 나가기\n");
		printline();
		printf("메뉴를 선택하시오\n");
		scanf("%d", &choice);
	} while (choice <0 && choice >3);
	switch (choice)
	{
	case 1: {
		creat();
		break;
	}
	case 2: {
		deposit();
		break;
	}
	case 3: {
		withdraw();
		break;
	}
	case 4: {
		break;
	}
	default:
		break;
	}
	

}

 creat() {
	
	printf("계좌번호 : "); scanf("%s", &customer.account);
	//account = customer.account;
	printf("이름 : "); scanf("%s", &customer.name);
	//name = customer.name;
	printf("초기금액 : "); scanf("%d", &customer.money);
//	money = customer.money;
	init();
}
deposit() {
	int input;
	puts("입금할 금액을 입력하시오. : ");
	scanf("%d", &input);
	customer.money += input;
	printf("계좌 총 금액 : %d\n\n", customer.money);
	init();
}
 withdraw() {
	 int output;
	 puts("출금할 금액을 입력하시오. : ");
	 scanf("%d", &output);
	 customer.money -= output;
	 printf("계좌 총 금액 : %d\n\n", customer.money);
	 init();
}

void main() {
	init();
}