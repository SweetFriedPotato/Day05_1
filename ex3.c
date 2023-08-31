#include <stdio.h>

int get_integer() {
	int x = 0;
	printf("정수 1개 입력: ");
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
	printf("두수의 합: %d\n", result);
	return 0;
}