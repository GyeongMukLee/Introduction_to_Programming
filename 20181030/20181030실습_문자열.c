#include<stdio.h>

/*
	영어 이름(문자열)을 입력받고
	그 중에서 모음(a,e,i,o,u)이 있는지 확인하고 출력하는 코드
*/

void main(){
	char name[50];		//배열의 크기는 글자수가 정해져 있는 경우 (글자수)+1 정도면 충분하다
	int i;
	printf("한경대학교 컴퓨터공학과 2018250038 이경묵\n");
	printf("(영어 소문자로)\n이름을 입력해 주십시오: ");
	gets(name);
	
	printf("==================================================\n");
	
	for(i=0;name[i]!=0;i++){		//ascii code에서 0은 문자열의 끝을 나타낸다. 조건을 name[i]!=0으로 설정하면 문자열의 끝이 나올 때까지 반복하게 된다.
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
