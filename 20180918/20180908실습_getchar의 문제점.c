#include<stdio.h>

/*
	문자를 입력받는 함수인 getchar의 문제점을 확인해보는 코드
*/

int main(){
	int age, height;
	char gender;
	
	printf("나이는? ");
	scanf("%d",&age);
	//나이를 입력한 후 enter

	printf("키는? ");
	scanf("%d",&height);
	//키를 입력한 후 enter
	
	printf("성별은? ");
	gender=getchar();
	//성별을 입력하지 않았는데도 넘어가는 것을 확인할 수 있다.
	//이는 getchar가 입력버퍼 안의 enter를 입력한 것으로 착각하고 넘어가기 때문이다.
	
	printf("====================\n");
	printf("성별은 %c입니다.\n",gender);
	printf("나이는 %d입니다.\n",age);
	printf("키는  %d입니다.\n",height);
	
	return 0;
} 
