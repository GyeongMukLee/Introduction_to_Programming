#include<stdio.h>

/*
2018�� 09�� 11�� ���α׷����Թ� �ǽ�����

�л��� ������ ����� ����ϴ� ���α׷�
*/
int main() {
	double math, korean, history, average;
	int student_no=2013109; 
	
	math=95;
	korean=89;
	history=100;
	average=(math+korean+history)/3;
	
	printf("%d �л��� ����\n", student_no);
	printf("%-6s : %5.0f��\n", "����", korean);
	printf("%-6s : %5.0f��\n", "�����", history);
	printf("%-6s : %5.0f��\n\n", "����", math);
	
	printf("%-6s : %5.2f��", "���", average);
	
	return 0;
}
