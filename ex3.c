#include <stdio.h>

int get_integer() {
	int x = 0;
	printf("���� 1�� �Է�: ");
	scanf("%d", &x);
	return x;
}

int get_add(int x, int y) {
	return x + y;
}

int main(void) {
	int x = get_integer();
	int y = get_integer();
	int result = get_add(x, y);
	printf("�μ��� ��: %d\n", result);
	return 0;
}