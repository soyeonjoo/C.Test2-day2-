#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int choice; //��������
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
		printf("1. ���»���\n");
		printf("2. �Ա�\n");
		printf("3. ���\n");
		printf("4. ������\n");
		printline();
		printf("�޴��� �����Ͻÿ�\n");
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
	
	printf("���¹�ȣ : "); scanf("%s", &customer.account);
	//account = customer.account;
	printf("�̸� : "); scanf("%s", &customer.name);
	//name = customer.name;
	printf("�ʱ�ݾ� : "); scanf("%d", &customer.money);
//	money = customer.money;
	init();
}
deposit() {
	int input;
	puts("�Ա��� �ݾ��� �Է��Ͻÿ�. : ");
	scanf("%d", &input);
	customer.money += input;
	printf("���� �� �ݾ� : %d\n\n", customer.money);
	init();
}
 withdraw() {
	 int output;
	 puts("����� �ݾ��� �Է��Ͻÿ�. : ");
	 scanf("%d", &output);
	 customer.money -= output;
	 printf("���� �� �ݾ� : %d\n\n", customer.money);
	 init();
}

void main() {
	init();
}