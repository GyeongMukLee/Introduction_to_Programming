#include<stdio.h>
#include<stdlib.h>
#define Q1_ROWCOL 5			//문제1 정방행렬의 크기
#define Q2_ROWCOL 3			//문제2 정방행렬의 크기. 바꿔도 됨.

/*
	한경대학교 컴퓨터공학과
	2018250038 이경묵
*/

int left_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {		//좌대각합을 구하는 함수. 배열을 인자로 받는다.
	int left_sum, row, column;

	for (row = 0, column = 0, left_sum = 0; row < Q1_ROWCOL; row++, column++) {
		left_sum = left_sum + matrix[row][column];
		//배열에서 가로와 세로를 1칸씩 이동하며 left_sum에 더한다. 예를 들어 5*5배열일 경우 (0,0), (1,1), (2,2)... 와 같이 이동한다.
	}

	return left_sum;
}

int right_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {	//우대각합을 구하는 함수. 배열을 인자로 받는다.
	int right_sum, row, column;
	for (row = 0, column = Q1_ROWCOL - 1, right_sum = 0; row < Q1_ROWCOL; row++, column--) {
		right_sum = right_sum +matrix[row][column];
		//배열에서 가로로 1칸, 세로로 -1칸씩 이동하며 right_sum에 더한다. 예를 들어 5*5배열일 경우 (0,5), (1,4), (2,3)... 과 같이 이동한다.
	}

	return right_sum;
}

void NEWS_sum(int matrix[Q2_ROWCOL][Q2_ROWCOL]) {		//사방의 합을 구하는 함수. 배열을 인자로 받는다.
	int help_matrix[Q2_ROWCOL + 2][Q2_ROWCOL + 2], answer[Q2_ROWCOL][Q2_ROWCOL], row, column;

	for (row = 0; row < Q2_ROWCOL + 2; row++) {		//문제의 행렬을 사방이 0으로 둘러싸인 형태(help_matrix)로 바꿈
		for (column = 0; column < Q2_ROWCOL + 2; column++) {
			if (row == 0 || row == Q2_ROWCOL + 1) {			//열의 양끝일 경우
				help_matrix[row][column] = 0;
			}
			else if (column == 0 || column == Q2_ROWCOL + 1) {	//행의 양끝일 경우
				help_matrix[row][column] = 0;
			}
			else {							//나머지 경우(0으로 둘러싸인 가운데에 원래 배열을 넣는다)
				help_matrix[row][column] = matrix[row - 1][column - 1];
			}
		}
	}

	for (row = 1; row < Q2_ROWCOL + 1; row++) {		//help_matrix에서 사방의 합을 더해서 출력함
		for (column = 1; column < Q2_ROWCOL + 1; column++) {
			answer[row - 1][column - 1] = help_matrix[row - 1][column] + help_matrix[row][column - 1] + help_matrix[row + 1][column] + help_matrix[row][column + 1];
			printf("%3d ", answer[row - 1][column - 1]);		//함수에서 배열을 return하는 방법을 모르겠어서 그냥 출력함
		}
		printf("\n");
	}
}

int main(){
	int q1_matrix[Q1_ROWCOL][Q1_ROWCOL], q2_matrix[Q2_ROWCOL][Q2_ROWCOL];	//문제의 배열
	int row, column;		//for문에서 행과 열을 나타낼 변수
	srand(time(NULL));		//프로그램을 실행할 때마다 rand()의 값이 다르게 나타나도록 하는 함수

	for (row = 0; row < Q1_ROWCOL; row++){		//rand()함수를 이용해 행렬1을 초기화
		for (column = 0; column < Q1_ROWCOL; column++){
			q1_matrix[row][column] = rand() % (Q1_ROWCOL*Q1_ROWCOL);
			//행렬에 들어갈 수 있는 숫자는 (행렬의 크기)^2가 되도록 한다
		}
	}

	for (row = 0; row < Q2_ROWCOL; row++) {		//rand()함수를 이용해 행렬2를 초기화
		for (column = 0; column < Q2_ROWCOL; column++) {
			q2_matrix[row][column] = rand() % (Q2_ROWCOL*Q2_ROWCOL);
			//행렬에 들어갈 수 있는 숫자는 (행렬의 크기)^2가 되도록 한다
		}
	}

	printf("문제1 행렬\n");
	for (row = 0; row < Q1_ROWCOL; row++) {		//문제1 행렬을 출력
		for (column = 0; column < Q1_ROWCOL; column++) {
			printf("%3d ", q1_matrix[row][column]);
		}
		printf("\n");
	}

	printf("좌대각합=%d\n우대각합=%d\n", left_diagonal_sum(q1_matrix), right_diagonal_sum(q1_matrix));
	printf("=================================================\n");

	printf("문제2 행렬\n");
	for (row = 0; row < Q2_ROWCOL; row++) {		//문제2 행렬을 출력
		for (column = 0; column < Q2_ROWCOL; column++) {
			printf("%3d ", q2_matrix[row][column]);
		}
		printf("\n");
	}
	printf("동서남북합 행렬\n");
	NEWS_sum(q2_matrix);
	
	return 0;
}
