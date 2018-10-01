#include<stdio.h>

/*
2018년 10월 01일
한경대학교 프로그래밍입문 실습

전위 증가(감소)연산자와 후위 증가(감소)연산자의 차이를 비교함
*/

main(){
	int pre_a, pre_b, pre_result_a, pre_result_b;	//전위 증가(감소)연산자를 test할 변수들
	int post_a, post_b, post_result_a, post_result_b;	//후위 증가(감소)연산자를 사용할 변수들

	pre_a = pre_b = post_a = post_b = 1;
	
	pre_result_a = ++pre_a;		//먼저 pre_a값이 1 증가한 후 pre_result_a에 대입된다.
	pre_result_b = --pre_b;		//먼저 pre_b값이 1 감소한 후 pre_result_b에 대입된다.

	post_result_a = post_a++;	//먼저 post_a값이 post_result_a에 대입된 후 post_a의 값이 1 증가한다.
	post_result_b = post_b--;	//먼저 post_b값이 post_result_b에 대입된 후 post_b의 값이 1 감소한다.

	printf("전위 증가, 감소연산의 결과: %d, %d\n", pre_result_a, pre_result_b);
	printf("후위 증가, 감소연산의 결과: %d, %d\n", post_result_a, post_result_b);

	return 0;
}
