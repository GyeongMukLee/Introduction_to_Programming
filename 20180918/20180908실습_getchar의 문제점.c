#include<stdio.h>

int main(){
	int age, height;
	char gender;
	
	printf("���̴�? ");
	scanf("%d",&age);
	
	printf("Ű��? ");
	scanf("%d",&height);
	
	printf("������? ");
	gender=getchar();
	
	printf("====================\n");
	printf("������ %c�Դϴ�.\n",gender);
	printf("���̴� %d�Դϴ�.\n",age);
	printf("Ű��  %d�Դϴ�.\n",height);
	
	return 0;
} 
