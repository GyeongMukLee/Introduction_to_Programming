#include <stdio.h>
#include <stdlib.h>

int main() {
	struct member {
		char name;		//�̸�
		int age;		//����
		int sex;		//����
	};

	struct member a[10];
	int i;

	for (i = 0; i < 10; i++) {
		a[i].name = i + 65;
		a[i].age = rand() % 20 + 10;
		a[i].sex = rand() % 2;
	}

	printf("ȸ�� ���\n");
	printf("%6s %6s %6s\n", "�̸�", "����", "����");
	printf("===================================\n");
	for (i = 0; i < 10; i++) {
		printf("%6c ", a[i].name);

		switch (a[i].sex) {
		case 0: printf("%6s ", "��"); break;
		case 1: printf("%6s ", "��"); break;
		}

		printf("%6d\n", a[i].age);
	}

	return 0;
}