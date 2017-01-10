#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//int factori(int i);
//
//void main() {
//	int choice;
//	do {
//		puts("==============");
//		puts("1. 누적함수");
//		puts("2. 재귀함수");
//		puts("3. 5배수함수");
//		puts("4. 끝내기");
//		puts("==============");
//		puts("선택 : ");
//		scanf("%d", &choice);
//
//
//		switch (choice)
//		{
//		case 1: {
//			int i, j, sum = 0;
//			puts("두수 입력:");
//			scanf("%d%d", &i, &j);
//			sum = i + j;
//			printf("합 : %d", sum);
//			break; }
//		case 2: {
//			int i, result;
//			puts("수 입력: ");
//			scanf("%d", &i);
//			result = factori(i);
//			printf("%d의 팩토리얼 : %d \n", i,result);
//			//팩토리얼만들기
//			break; }
//		case 3: {
//			int i, j;
//			puts("숫자 입력: ");
//			scanf("%d", &i);
//			j = i * 5;
//			printf("%d의 5배수는 : %d \n", i, j);
//			break;
//
//		}
//		case 4:  break;
//		default:
//			puts("다시입력");
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