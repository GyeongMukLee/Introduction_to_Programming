#include<stdio.h>

/*
2018�� 10�� 01��
�Ѱ���б� ���α׷����Թ� �ǽ�

���� ����(����)�����ڿ� ���� ����(����)�������� ���̸� ����
*/

main(){
	int pre_a, pre_b, pre_result_a, pre_result_b;	//���� ����(����)�����ڸ� test�� ������
	int post_a, post_b, post_result_a, post_result_b;	//���� ����(����)�����ڸ� ����� ������

	pre_a = pre_b = post_a = post_b = 1;
	
	pre_result_a = ++pre_a;		//���� pre_a���� 1 ������ �� pre_result_a�� ���Եȴ�.
	pre_result_b = --pre_b;		//���� pre_b���� 1 ������ �� pre_result_b�� ���Եȴ�.

	post_result_a = post_a++;	//���� post_a���� post_result_a�� ���Ե� �� post_a�� ���� 1 �����Ѵ�.
	post_result_b = post_b--;	//���� post_b���� post_result_b�� ���Ե� �� post_b�� ���� 1 �����Ѵ�.

	printf("���� ����, ���ҿ����� ���: %d, %d\n", pre_result_a, pre_result_b);
	printf("���� ����, ���ҿ����� ���: %d, %d\n", post_result_a, post_result_b);

	return 0;
}
