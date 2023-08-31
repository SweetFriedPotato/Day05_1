#include<stdio.h>

int main(void) {
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= 5; j++) 
			printf("*");
		printf("\n");
	}

	//직각삼각형 출력하기
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("*");
		printf("\n");
	}

	//숫자 직각삼각형 출력하기
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++)
			printf("%d", j);
		printf("\n");
	}

	return 0;
}