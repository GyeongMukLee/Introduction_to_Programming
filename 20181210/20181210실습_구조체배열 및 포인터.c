#include <stdio.h>

struct member{
	char name[10];
	char gender[4];
	int age;
};

int main(){
	int i, max=-2100000000,min=2100000000;
	struct member *ptr, *maxptr, *minptr;
	struct member user[5]={
		{"강철수","남"}, {"김철수","여"}, {"박철수","남"}, {"이철수","여"}, {"최철수","남"}
	};
	
	ptr=user;
	
	for(i=0;i<5;i++){
		printf("%s의 나이: ",(*ptr).name);
		scanf("%d",&(*ptr).age);
	} 
	printf("%8s %8s %8s\n","이름","성별","나이");
	pritnf("=======================\n");
	
	for(i=0;i<5;i++){
		printf("%8s %8s %8d\n",(*ptr).name, (*ptr).gender, (*ptr).age);
		
		if((*ptr).age>max){
			max=(*ptr).age;
			maxptr=ptr;
		}
		
		if((*ptr).age<min){
			min=(*ptr).age;
			minptr=ptr;
		}
		
		ptr++;
	}
	
	printf(">> 나이가 가장 많은 사람: %s %s %d\n",(*maxptr).name, (*maxptr).gender, (*maxptr).age);
	printf(">> 나이가 가장 적은 사람: %s %s %d\n",(*minptr).name, (*minptr).gender, (*minptr).age);
	
	return 0;
}
