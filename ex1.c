#include<stdio.h>

//�Լ� ����
void print_star() {
	for (int i = 1; i <= 15; i++)
		printf("*");
	printf("\n");
}
void card() {
	print_star();
	printf("��ȭ���ڴ��б�\n");
	printf("������\n");
	print_star();
}
int main() {
	card();
	printf("\n");
	card();
}