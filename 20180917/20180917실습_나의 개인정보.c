#include <stdio.h>

int main(){
	
	int age,sin,height,mass;	//sin=Student Identification Number(학번)의 약자 
	char blood;
	
	printf("학번 나이 키 체중 혈액형 을 입력해 주십시오. 각 항목은 띄어쓰기로 구분합니다.\n");
	scanf("%d %d %d %d %c",&sin,&age,&height,&mass,&blood) ;
	
	printf("===============================\n이경묵의 개인정보\n");
	printf("%-6s: %10d\n","학번",sin);
	printf("%-6s: %10d세\n","나이",age);
	printf("%-6s: %10dcm\n","키",height);
	printf("%-6s: %10dkg\n","체중",mass);
	printf("%-6s: %10c형\n","혈액형",blood);
	
	return 0;
	
}
