#include<stdio.h>
#include<math.h>

int main(){
	double tri_base,tri_height,tri_width;	//������� �ﰢ���� �غ�,����,����
	double circle_rad;						//���� ������
	
	printf("�Է��ϴ� �׸��� ������ cm�Դϴ�.\n0");
	 
	printf("�ﰢ���� �غ��� ���̸� �Է��Ͻʽÿ�. �� �׸��� ����� �������ϴ�. ");
	scanf("%lf %lf",&tri_base,&tri_height);
	
	printf("���� �������� �Է��Ͻʽÿ�. ");
	scanf("%lf",&circle_rad);
	
	printf("=======================\n");
	printf("����� �Ʒ��� �����ϴ�. �Ҽ� ��° �ڸ����� �ݿø��˴ϴ�.\n");
	
	printf("%-13s: %8.2lfcm^2\n","�ﰢ���� ����",tri_base*tri_height*0.5);
	printf("%-13s: %8.2lfcm^2","���� ����",pow(circle_rad,2)*M_PI);
	
	return 0;
}
