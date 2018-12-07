#include<stdio.h>

/*
2018년 10월 01일
한경대학교 프로그래밍입문 실습

char형 변수가 저장될때 ASCII코드로 저장(예: A가 65, B가 66)되므로 char형 변수도 관계연산자를 사용할 수 있음을 확인함.
*/

main(){
	char a,b,max;
	printf("두 문자를 입력하십시오. 각 문자는 띄어쓰기로 구분합니다.\n");
	scanf("%c %c",&a,&b);
	
	printf("======================\n");
	
	max=a>b?a:b;	//a>b를 연산해서 참이면 a를, 거짓이면 b를 max에 대입하는 연산자. '삼항 연산자'라고 한다.
	printf("문자 %c\n정수 %d\n",max,max);
	
	return 0;
}
