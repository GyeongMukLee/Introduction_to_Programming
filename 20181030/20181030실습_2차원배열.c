#include <stdio.h>

/*
	2���� �迭�� �����Ҵ�
*/

void main(){
	int matrix[2][3]={{1,22,83},{124,85,956}}, max=0, i, j;
	
	for(i=0;i<2;i++){			//2���� �迭�� ����� ���� �Ʒ��� ���� for�� 2���� ����Ѵ�.
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
