#include <stdio.h>

struct member{
	char name[10];
	char gender[3];
	int age;
};

void call_by_adress(struct member *buyer);
void call_by_value(struct member buyer[]);

int main(){
	struct member buyer[3]={{"김철수", "남", 10}, {"배철수", "남", 65}, {"안철수", "남", 56}};
	
	call_by_adress(&buyer);
	printf("\n");
	call_by_value(buyer);
	
	return 0;
}

void call_by_adress(struct member *buyer){
	int i;
	printf(">> Call By Adress\n");
	printf("%6s %6s %6s\n","이름","성별","나이");
	printf("=================================\n");
	
	for(i=0;i<3;i++){
		printf("%6s %6s %6d\n",buyer[i].name,buyer[i].gender,buyer[i].age);		//집가서 확인  
	}
}

void call_by_value(struct member buyer[]){
	int i;
	printf(">> Call By Value\n");
	printf("%6s %6s %6s\n","이름","성별","나이");
	printf("=================================\n");
	
	for(i=0;i<3;i++){
		printf("%6s %6s %6d\n",buyer[i].name,buyer[i].gender,buyer[i].age);
	}
}
