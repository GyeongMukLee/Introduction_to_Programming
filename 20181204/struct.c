#include <stdio.h>
#include <stdlib.h>

int main() {
	struct member {
		char name;		//이름
		int age;		//나이
		int sex;		//성별
	};

	struct member a[10];
	int i;

	for (i = 0; i < 10; i++) {
		a[i].name = i + 65;
		a[i].age = rand() % 20 + 10;
		a[i].sex = rand() % 2;
	}

	printf("회원 목록\n");
	printf("%6s %6s %6s\n", "이름", "성별", "나이");
	printf("===================================\n");
	for (i = 0; i < 10; i++) {
		printf("%6c ", a[i].name);

		switch (a[i].sex) {
		case 0: printf("%6s ", "남"); break;
		case 1: printf("%6s ", "여"); break;
		}

		printf("%6d\n", a[i].age);
	}

	return 0;
}