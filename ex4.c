#include <stdio.h>
int get_integer() {
	int x = 0;
	printf("���� 1�� �Է�: ");
	scanf("%d", &x);
	return x;
}

int get_max(int x, int y) {
	int max = 0;
	if (x > y)
		return x;
	else if (y > x)
		return y;
	else
		printf("�����մϴ�!");
}

int main() {
	int x = get_integer();
	int y = get_integer();

	printf("ū �� = %d\n", get_max(x, y));
	return 0;
}