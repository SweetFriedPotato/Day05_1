#include <stdio.h>
int add(int x, int y) {
	return x + y;
}
int subtract(int x, int y) {
	return x - y;
}
int multiply(int x, int y) {
	return x * y;
}
double division(int x, int y) {
	return x / y;
}

int main(void) {
	int x, y;
	printf("�� ������ �Է��ϼ���\n");
	scanf("%d %d", &x, &y);

	int sum = add(x, y);
	int sub = subtract(x, y);
	int mul = multiply(x, y);
	int div = division(x, y);
	printf("�� ���� ���� %d �Դϴ�. \n", sum);
	printf("�� ���� ���� %d �Դϴ�. \n", sub);
	printf("�� ���� ���� %d �Դϴ�. \n", mul);
	printf("�� ���� ���� %d �Դϴ�. \n", div);
	return 0;
}