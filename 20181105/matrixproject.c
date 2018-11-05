#include<stdio.h>
#include<stdlib.h>
#define Q1_ROWCOL 5			//문제1 정방행렬의 크기
#define Q2_ROWCOL 3			//문제2 정방행렬의 크기. 바꿔도 됨.

/*
	한경대학교 컴퓨터공학과
	2018250038 이경묵
*/

int left_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {		//(문제1)좌대각합을 구하는 함수. 배열을 인자로 받는다.
	int left_sum, row, column;

	for (row = 0, column = 0, left_sum = 0; row < Q1_ROWCOL; row++, column++) {
		left_sum = left_sum +matrix[row][column];
	}

	return left_sum;
}

int right_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {	//(문제1)우대각합을 구하는 함수. 배열을 인자로 받는다.
	int right_sum, row, column;
	for (row = 0, column = Q1_ROWCOL - 1, right_sum = 0; row < Q1_ROWCOL; row++, column--) {
		right_sum = right_sum +matrix[row][column];
	}

	return right_sum;
}

void NEWS_sum(int matrix[Q2_ROWCOL][Q2_ROWCOL]) {		//(문제2)동서남북(East, West, South, North)의 합을 구하는 함수. 배열을 인자로 받는다.
	int help_matrix[Q2_ROWCOL + 2][Q2_ROWCOL + 2], answer[Q2_ROWCOL][Q2_ROWCOL], row, column;

	for (row = 0; row < Q2_ROWCOL + 2; row++) {
		for (column = 0; column < Q2_ROWCOL + 2; column++) {
			if (row == 0 || row == Q2_ROWCOL + 1) {
				help_matrix[row][column] = 0;
			}
			else if (column == 0 || column == Q2_ROWCOL + 1) {
				help_matrix[row][column] = 0;
			}
			else {
				help_matrix[row][column] = matrix[row - 1][column - 1];
			}
		}
	}

	for (row = 1; row < Q2_ROWCOL + 1; row++) {
		for (column = 1; column < Q2_ROWCOL + 1; column++) {
			answer[row - 1][column - 1] = help_matrix[row - 1][column] + help_matrix[row][column - 1] + help_matrix[row + 1][column] + help_matrix[row][column + 1];
			printf("%3d ", answer[row - 1][column - 1]);		//함수에서 배열을 return하는 방법을 모르겠어서 그냥 출력함
		}
		printf("\n");
	}
}

int main(){
	int q1_matrix[Q1_ROWCOL][Q1_ROWCOL], q2_matrix[Q2_ROWCOL][Q2_ROWCOL];
	int row, column;
	srand(time(NULL));

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
	for (row = 0; row < Q1_ROWCOL; row++) {
		for (column = 0; column < Q1_ROWCOL; column++) {
			printf("%3d ", q1_matrix[row][column]);
		}
		printf("\n");
	}

	printf("좌대각합=%d\n우대각합=%d\n", left_diagonal_sum(q1_matrix), right_diagonal_sum(q1_matrix));
	printf("=================================================\n");

	printf("문제2 행렬\n");
	for (row = 0; row < Q2_ROWCOL; row++) {
		for (column = 0; column < Q2_ROWCOL; column++) {
			printf("%3d ", q2_matrix[row][column]);
		}
		printf("\n");
	}
	printf("동서남북합 행렬\n");
	NEWS_sum(q2_matrix);
	
	return 0;
}