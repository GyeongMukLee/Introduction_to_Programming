#include<stdio.h>
#include<stdlib.h>
#define Q1_ROWCOL 5			//����1 ��������� ũ��
#define Q2_ROWCOL 3			//����2 ��������� ũ��. �ٲ㵵 ��.

/*
	�Ѱ���б� ��ǻ�Ͱ��а�
	2018250038 �̰湬
*/

int left_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {		//(����1)�´밢���� ���ϴ� �Լ�. �迭�� ���ڷ� �޴´�.
	int left_sum, row, column;

	for (row = 0, column = 0, left_sum = 0; row < Q1_ROWCOL; row++, column++) {
		left_sum = left_sum +matrix[row][column];
	}

	return left_sum;
}

int right_diagonal_sum(int matrix[Q1_ROWCOL][Q1_ROWCOL]) {	//(����1)��밢���� ���ϴ� �Լ�. �迭�� ���ڷ� �޴´�.
	int right_sum, row, column;
	for (row = 0, column = Q1_ROWCOL - 1, right_sum = 0; row < Q1_ROWCOL; row++, column--) {
		right_sum = right_sum +matrix[row][column];
	}

	return right_sum;
}

void NEWS_sum(int matrix[Q2_ROWCOL][Q2_ROWCOL]) {		//(����2)��������(East, West, South, North)�� ���� ���ϴ� �Լ�. �迭�� ���ڷ� �޴´�.
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
			printf("%3d ", answer[row - 1][column - 1]);		//�Լ����� �迭�� return�ϴ� ����� �𸣰ھ �׳� �����
		}
		printf("\n");
	}
}

int main(){
	int q1_matrix[Q1_ROWCOL][Q1_ROWCOL], q2_matrix[Q2_ROWCOL][Q2_ROWCOL];
	int row, column;
	srand(time(NULL));

	for (row = 0; row < Q1_ROWCOL; row++){		//rand()�Լ��� �̿��� ���1�� �ʱ�ȭ
		for (column = 0; column < Q1_ROWCOL; column++){
			q1_matrix[row][column] = rand() % (Q1_ROWCOL*Q1_ROWCOL);
			//��Ŀ� �� �� �ִ� ���ڴ� (����� ũ��)^2�� �ǵ��� �Ѵ�
		}
	}

	for (row = 0; row < Q2_ROWCOL; row++) {		//rand()�Լ��� �̿��� ���2�� �ʱ�ȭ
		for (column = 0; column < Q2_ROWCOL; column++) {
			q2_matrix[row][column] = rand() % (Q2_ROWCOL*Q2_ROWCOL);
			//��Ŀ� �� �� �ִ� ���ڴ� (����� ũ��)^2�� �ǵ��� �Ѵ�
		}
	}

	printf("����1 ���\n");
	for (row = 0; row < Q1_ROWCOL; row++) {
		for (column = 0; column < Q1_ROWCOL; column++) {
			printf("%3d ", q1_matrix[row][column]);
		}
		printf("\n");
	}

	printf("�´밢��=%d\n��밢��=%d\n", left_diagonal_sum(q1_matrix), right_diagonal_sum(q1_matrix));
	printf("=================================================\n");

	printf("����2 ���\n");
	for (row = 0; row < Q2_ROWCOL; row++) {
		for (column = 0; column < Q2_ROWCOL; column++) {
			printf("%3d ", q2_matrix[row][column]);
		}
		printf("\n");
	}
	printf("���������� ���\n");
	NEWS_sum(q2_matrix);
	
	return 0;
}