#include <stdio.h>
#include <stdlib.h>

int main() {
	struct member {
		char name;		//이름
		int age;		//나이
		int sex;		//성별
	};

	struct member a[10];		//구조체 배열을 선언할 수 있다
	int i;

	for (i = 0; i < 10; i++) {			//초기화하기 귀찮아서 그냥 이렇게함
		a[i].name = i + 65;				//사람의 이름을 65(A)부터 차례로 붙임
		a[i].age = rand() % 20 + 10;	//사람의 나이를 10~29까지 무작위로 붙임
		a[i].sex = rand() % 2;			//사람의 성별을 0또는 1로 무작위로 붙임
	}

	printf("회원 목록\n");
	printf("%6s %6s %6s\n", "이름", "성별", "나이");
	printf("===================================\n");
	for (i = 0; i < 10; i++) {
		printf("%6c ", a[i].name);

		switch (a[i].sex) {
		case 0: printf("%6s ", "남"); break;		//성별이 0이면 남성
		case 1: printf("%6s ", "여"); break;		//성별이 1이면 여성
		}

		printf("%6d\n", a[i].age);
	}

	return 0;
}