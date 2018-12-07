#include <stdio.h>

/*
	배열안의 원소 5개 중에서 가장 큰 수를 찾는 코드. 포인터로 작성하였다.
*/

int main(){
	int arr[5]={-1,-45674,-456,-5453,-77373}, i, max=-2100000000;
	int *p_arr;
	p_arr=arr;
	
	for (i=0;i<5;i++){
		if(max<*(p_arr+i)){
			max=*(p_arr+i);
		}
	}
	
	printf("max = %5d", max);
}
