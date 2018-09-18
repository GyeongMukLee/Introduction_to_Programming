#include<stdio.h>
#include<math.h>

int main(){
	double tri_base,tri_height,tri_width;	//순서대로 삼각형의 밑변,높이,넓이
	double circle_rad;						//원의 반지름
	
	printf("입력하는 항목의 단위는 cm입니다.\n0");
	 
	printf("삼각형의 밑변과 높이를 입력하십시오. 각 항목은 띄어쓰기로 구분힙니다. ");
	scanf("%lf %lf",&tri_base,&tri_height);
	
	printf("원의 반지름을 입력하십시오. ");
	scanf("%lf",&circle_rad);
	
	printf("=======================\n");
	printf("결과는 아래와 같습니다. 소수 셋째 자리에서 반올림됩니다.\n");
	
	printf("%-13s: %8.2lfcm^2\n","삼각형의 넓이",tri_base*tri_height*0.5);
	printf("%-13s: %8.2lfcm^2","원의 넓이",pow(circle_rad,2)*M_PI);
	
	return 0;
}
