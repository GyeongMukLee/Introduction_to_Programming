#include<stdio.h>

/*
	���ڸ� �Է¹޴� �Լ��� getchar�� �������� Ȯ���غ��� �ڵ�
*/

int main(){
	int age, height;
	char gender;
	
	printf("���̴�? ");
	scanf("%d",&age);
	//���̸� �Է��� �� enter

	printf("Ű��? ");
	scanf("%d",&height);
	//Ű�� �Է��� �� enter
	
	printf("������? ");
	gender=getchar();
	//������ �Է����� �ʾҴµ��� �Ѿ�� ���� Ȯ���� �� �ִ�.
	//�̴� getchar�� �Է¹��� ���� enter�� �Է��� ������ �����ϰ� �Ѿ�� �����̴�.
	
	printf("====================\n");
	printf("������ %c�Դϴ�.\n",gender);
	printf("���̴� %d�Դϴ�.\n",age);
	printf("Ű��  %d�Դϴ�.\n",height);
	
	return 0;
} 
