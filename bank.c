//2276337 ������
#include<stdio.h>
int balance;
void deposit(int amount) { //�Ա� ���
	printf("�Ա��� �ݾ�: ");
	scanf("%d", &amount);
	balance += amount;
}

void withdraw(int amount) {//��� ���
	printf("����� �ݾ�: ");
	scanf("%d", &amount);
	balance -= amount;
}

void inquiry() {//��ȸ ���
	printf("���� �ܾ�: %d\n", balance);
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
		printf("�ܾ��� �����մϴ�! ");
	
}