#include<stdio.h>

void main(){
	char name[50];
	int i;
	printf("�Ѱ���б� ��ǻ�Ͱ��а� 2018250038 �̰湬\n(���� �ҹ��ڷ�)\n");
	printf("�̸��� �Է��� �ֽʽÿ�: ");
	gets(name);
	
	printf("==================================================\n");
	
	for(i=0;name[i]!=0;i++){
		switch(name[i]){
			case 'a':{
				printf("�̸��� %d��° ���� a\n",i+1);
				break;
			}
			case 'e':{
				printf("�̸��� %d��° ���� e\n",i+1);
				break;
			}
			case 'i':{
				printf("�̸��� %d��° ���� i\n",i+1);
				break;
			}
			case 'o':{
				printf("�̸��� %d��° ���� o\n",i+1);
				break;
			}
			case 'u':{
				printf("�̸��� %d��° ���� u\n",i+1);
				break;
			}
		}
	}
}
