/*=================== ���� : grade.c =====================*/ 

#include <stdio.h> 

int main(void)
{
	int point = 0;

	printf("���α׷��� ��� ������ �Է��ϼ���. --> ");
	scanf("%d", &point);

	if ( point >= 90 ) 
	{
		printf("���α׷��� ��� ������ A�Դϴ�.\n");
	} 
	else if ( point >= 80 ) // point >= 80 && point < 90  
	{
		printf("���α׷��� ��� ������ B�Դϴ�.\n");
	} 
	else if ( point >= 70 ) // point >= 70 && point < 80
	{
		printf("���α׷��� ��� ������ C�Դϴ�.\n");
	} 
	else if ( point >= 60 ) // point >= 60 && point < 70
	{
		printf("���α׷��� ��� ������ D�Դϴ�.\n");
	} 
	else // point < 60
	{
		printf("���α׷��� ��� ������ F�Դϴ�.\n");
	}

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  End of grade.c  <<<<<<<<<<<<<<<<<<<<*/

