/*================ ���� : evenodd.c =====================*/ 

#include <stdio.h> 

int main(void) 
{
	int number = 0;

	printf("���� ���� �ϳ��� �Է��ϼ���. ");	
	scanf("%d", &number);	
	printf("---> �Է��� �� %d��(��) ", number);	

	if (number % 2 == 0) 
	{
		printf("¦��(even) �Դϴ�.\n");	
	} 
	else 
	{
		printf("Ȧ��(odd) �Դϴ�.\n");	
	}

	return 0;
}
/*>>>>>>>>>>>>>>>  End of evenodd.c  <<<<<<<<<<<<<<<<<<<<*/
