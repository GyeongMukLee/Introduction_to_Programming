#include<stdio.h>

/*
2018년 09월 11일 프로그래밍입문 실습과제

학생의 성적과 평균을 출력하는 프로그램
*/
int main() {
	double math, korean, history, average;
	int student_no=2013109; 
	
	math=95;
	korean=89;
	history=100;
	average=(math+korean+history)/3;
	
	printf("%d 학생의 성적\n", student_no);
	printf("%-6s : %5.0f점\n", "국어", korean);
	printf("%-6s : %5.0f점\n", "세계사", history);
	printf("%-6s : %5.0f점\n\n", "수학", math);
	
	printf("%-6s : %5.2f점", "평균", average);
	
	return 0;
}
