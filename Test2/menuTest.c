#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int factori(int i);
//
//void main() {
//	int choice;
//	do {
//		puts("==============");
//		puts("1. �����Լ�");
//		puts("2. ����Լ�");
//		puts("3. 5����Լ�");
//		puts("4. ������");
//		puts("==============");
//		puts("���� : ");
//		scanf("%d", &choice);
//
//
//		switch (choice)
//		{
//		case 1: {
//			int i, j, sum = 0;
//			puts("�μ� �Է�:");
//			scanf("%d%d", &i, &j);
//			sum = i + j;
//			printf("�� : %d", sum);
//			break; }
//		case 2: {
//			int i, result;
//			puts("�� �Է�: ");
//			scanf("%d", &i);
//			result = factori(i);
//			printf("%d�� ���丮�� : %d \n", i,result);
//			//���丮�󸸵��
//			break; }
//		case 3: {
//			int i, j;
//			puts("���� �Է�: ");
//			scanf("%d", &i);
//			j = i * 5;
//			printf("%d�� 5����� : %d \n", i, j);
//			break;
//
//		}
//		case 4:  break;
//		default:
//			puts("�ٽ��Է�");
//			break;
//		}
//
//	} while (choice != 4);
//
//
//}
//	
//
//int factori(int i) {
//	if (i == 1) {
//		return 1;
//	}
//	else {
//		return i*factori(i - 1);
//
//	}
//	
//}