#include<stdio.h>

int main(){
	int age, height;
	char gender;
	
	printf("나이는? ");
	scanf("%d",&age);
	
	printf("키는? ");
	scanf("%d",&height);
	
	printf("성별은? ");
	gender=getchar();
	
	printf("====================\n");
	printf("성별은 %c입니다.\n",gender);
	printf("나이는 %d입니다.\n",age);
	printf("키는  %d입니다.\n",height);
	
	return 0;
} 
