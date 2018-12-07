#include <stdio.h>

/*
	2차원 배열을 만들어보았다
*/

void main(){
	int matrix[2][3]={{1,22,83},{124,85,956}}, max=0, i, j;
	
	for(i=0;i<2;i++){			//2차원 배열을 출력할 때는 아래와 같이 for문 2개를 사용한다.
		for (j=0;j<3;j++){
			printf("%3d ",matrix[i][j]);
			
			if(matrix[i][j]>=max){
				max=matrix[i][j];
			}
		}
		printf("\n");
	}
	
	printf("=======================\nmax = %3d",max);
}
