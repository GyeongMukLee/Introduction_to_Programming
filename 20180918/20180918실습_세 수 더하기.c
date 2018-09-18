#include<stdio.h>

int main(){
	int a,b,c;
	printf("더하고 싶은 세 수를 입력해 주십시오\n");
	scanf("%d %d %d",&a,&b,&c);
	
	printf("\n=================\n\n");
	printf("%d+%d+%d=%d",a,b,c,a+b+c);
	
	return 0;
}
