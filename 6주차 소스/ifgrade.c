/*================ ���� : ifgrade.c =====================*/ 

#include <stdio.h> //printf() �� �̿��� ���� ��� ���� ����

int main(void) 
{
	double grade = 0;

	printf("�̹� �б��� ����(��� ����)�� ���ΰ�? ");	
	scanf("%lf", &grade);	
	printf("---> �Է��� ��� ������ %lf �Դϴ�.\n", grade);	

	if (grade >= 4.3)
	{
		printf(">>>> ���б��� �޽��ϴ�.\n");	
		printf(">>>> �ؿܿ����� ����� �����˴ϴ�.\n");	
	}
	printf(">>>> �����Ḧ �����մϴ�.\n");	

	return 0;
}
/*>>>>>>>>>>>>>>>>>  End of ifgrade.c <<<<<<<<<<<<<<<<<<<<*/
