#include <stdio.h>
int get_integer() {
	int x = 0;
	printf("정수 1개 입력: ");
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
		printf("동일합니다!");
}

int main() {
	int x = get_integer();
	int y = get_integer();

	printf("큰 값 = %d\n", get_max(x, y));
	return 0;
}