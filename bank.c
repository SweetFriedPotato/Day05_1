//2276337 최지희
#include<stdio.h>
int balance;
void deposit(int amount) { //입금 기능
	printf("입금할 금액: ");
	scanf("%d", &amount);
	balance += amount;
}

void withdraw(int amount) {//출금 기능
	printf("출금할 금액: ");
	scanf("%d", &amount);
	balance -= amount;
}

void inquiry() {//조회 기능
	printf("현재 잔액: %d\n", balance);
}

int main() {
	int a = 0;
	inquiry();
	deposit(a);
	inquiry();
	if (balance > a) {
		withdraw(a);
		inquiry();
	}

	else
		printf("잔액이 부족합니다! ");
	
}