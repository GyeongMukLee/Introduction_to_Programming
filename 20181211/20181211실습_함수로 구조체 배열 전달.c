#include <stdio.h>

struct member{
	char name[10];
	char gender[3];
	int age;
};

void call_by_adress(struct member *buyer);
void call_by_value(struct member buyer[]);

int main(){
	struct member buyer[3]={{"��ö��", "��", 10}, {"��ö��", "��", 65}, {"��ö��", "��", 56}};
	
	call_by_adress(&buyer);
	printf("\n");
	call_by_value(buyer);
	
	return 0;
}

void call_by_adress(struct member *buyer){
	int i;
	printf(">> Call By Adress\n");
	printf("%6s %6s %6s\n","�̸�","����","����");
	printf("=================================\n");
	
	for(i=0;i<3;i++){
		printf("%6s %6s %6d\n",buyer[i].name,buyer[i].gender,buyer[i].age);		//������ Ȯ��  
	}
}

void call_by_value(struct member buyer[]){
	int i;
	printf(">> Call By Value\n");
	printf("%6s %6s %6s\n","�̸�","����","����");
	printf("=================================\n");
	
	for(i=0;i<3;i++){
		printf("%6s %6s %6d\n",buyer[i].name,buyer[i].gender,buyer[i].age);
	}
}
