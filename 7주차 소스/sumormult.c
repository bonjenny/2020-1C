/*========================== ���� : sumormult.c ======================*/ 

#include <stdio.h> 

int main(void) 
{
	char op = 0;
	int num1 = 0, num2 = 0;

	printf("�� ������ ���ϱ�(add)�� ���ϸ� a��\n");	
	printf("�� ������ ���ϱ�(multiply)�� ���ϸ� m�� �Է��ϼ���. : > ");	
	scanf("%c", &op);

	if (op == 'a') 
		printf("---> ���� ");	
	else
		printf("---> ���� ");	

	printf(" �� ���� ���� �ٿ� �Է��ϼ���. : > ");	
	scanf("%d %d", &num1, &num2);	

	if (op == 'a') 
	{
		printf("�� ���� �� %d + %d�� ", num1, num2);	
		printf("%d �Դϴ�.\n", num1 + num2);	
	} 
	else
	{
		printf("�� ���� �� %d * %d�� ", num1, num2);	
		printf("%d �Դϴ�.\n", num1 * num2);	
	};

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>  End of sumormult.c  <<<<<<<<<<<<<<<<<<<<<<<<*/
