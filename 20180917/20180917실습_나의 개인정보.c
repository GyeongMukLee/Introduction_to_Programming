#include <stdio.h>

int main(){
	
	int age,sin,height,mass;	//sin=Student Identification Number(�й�)�� ���� 
	char blood;
	
	printf("�й� ���� Ű ü�� ������ �� �Է��� �ֽʽÿ�. �� �׸��� ����� �����մϴ�.\n");
	scanf("%d %d %d %d %c",&sin,&age,&height,&mass,&blood) ;
	
	printf("===============================\n�̰湬�� ��������\n");
	printf("%-6s: %10d\n","�й�",sin);
	printf("%-6s: %10d��\n","����",age);
	printf("%-6s: %10dcm\n","Ű",height);
	printf("%-6s: %10dkg\n","ü��",mass);
	printf("%-6s: %10c��\n","������",blood);
	
	return 0;
	
}
