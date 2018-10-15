#include<stdio.h>

/*
    2018년 10월 15일
    
    *로 이루어진 피라미드를 반 잘라서 반대쪽으로 붙인듯한 모양(?)을 만드는 코드
    예)
    *      *
    **    **
    ***  ***
    ********
*/

int main() {
	int scan_row;		//원하는 칸을 입력받는 변수
	int as_row;			//현재 열의 별 개수를 저장하는 변수
	int i;				//반복문에서 임시로 사용하는 변수
	scanf_s("%d", &scan_row);

	for (as_row = 1; as_row <= scan_row; as_row++) {
		for (i = 1; as_row >= i; i++) {						//왼쪽 끝 별을 입력하는 반복문
			printf("*");
		}

		for (i = 1; (scan_row - as_row)* 2 >= i; i++) {		//양쪽 별 사이의 빈공간을 입력하는 반복문
			printf(" ");
		}

		for (i = 1; as_row >= i; i++) {						//오른쪽 끝 별을 입력하는 반복문
			printf("*");
			if (i == as_row) {
				printf("\n");
			}
		}
	}

	return 0;
}
