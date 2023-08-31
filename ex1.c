#include<stdio.h>

//함수 정의
void print_star() {
	for (int i = 1; i <= 15; i++)
		printf("*");
	printf("\n");
}
void card() {
	print_star();
	printf("이화여자대학교\n");
	printf("최지희\n");
	print_star();
}
int main() {
	card();
	printf("\n");
	card();
}