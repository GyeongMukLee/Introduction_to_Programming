#include <stdio.h>
#include <stdlib.h>

int main() {
	struct member {
		char name;		//�̸�
		int age;		//����
		int sex;		//����
	};

	struct member a[10];		//����ü �迭�� ������ �� �ִ�
	int i;

	for (i = 0; i < 10; i++) {			//�ʱ�ȭ�ϱ� �����Ƽ� �׳� �̷�����
		a[i].name = i + 65;				//����� �̸��� 65(A)���� ���ʷ� ����
		a[i].age = rand() % 20 + 10;	//����� ���̸� 10~29���� �������� ����
		a[i].sex = rand() % 2;			//����� ������ 0�Ǵ� 1�� �������� ����
	}

	printf("ȸ�� ���\n");
	printf("%6s %6s %6s\n", "�̸�", "����", "����");
	printf("===================================\n");
	for (i = 0; i < 10; i++) {
		printf("%6c ", a[i].name);

		switch (a[i].sex) {
		case 0: printf("%6s ", "��"); break;		//������ 0�̸� ����
		case 1: printf("%6s ", "��"); break;		//������ 1�̸� ����
		}

		printf("%6d\n", a[i].age);
	}

	return 0;
}