#include<stdio.h>

void main(){
	char name[50];
	int i;
	printf("한경대학교 컴퓨터공학과 2018250038 이경묵\n(영어 소문자로)\n");
	printf("이름을 입력해 주십시오: ");
	gets(name);
	
	printf("==================================================\n");
	
	for(i=0;name[i]!=0;i++){
		switch(name[i]){
			case 'a':{
				printf("이름의 %d번째 모음 a\n",i+1);
				break;
			}
			case 'e':{
				printf("이름의 %d번째 모음 e\n",i+1);
				break;
			}
			case 'i':{
				printf("이름의 %d번째 모음 i\n",i+1);
				break;
			}
			case 'o':{
				printf("이름의 %d번째 모음 o\n",i+1);
				break;
			}
			case 'u':{
				printf("이름의 %d번째 모음 u\n",i+1);
				break;
			}
		}
	}
}
