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
	printf("두 정수를 입력하세요\n");
	scanf("%d %d", &x, &y);

	int sum = add(x, y);
	int sub = subtract(x, y);
	int mul = multiply(x, y);
	int div = division(x, y);
	printf("두 수의 합은 %d 입니다. \n", sum);
	printf("두 수의 차는 %d 입니다. \n", sub);
	printf("두 수의 곱은 %d 입니다. \n", mul);
	printf("두 수의 몫은 %d 입니다. \n", div);
	return 0;
}