/*=================== ���� : marriage.c ==================*/ 

#include <stdio.h> 

int main(void) 
{
	char man = 0;
	int age = 0;

	printf("����(���ڸ� M�� ���ڸ� W)�� �Է� �ϼ���. > ");	
	scanf("%c", &man);	
	printf("���̸� �Է� �ϼ���. > ");	
	scanf("%d", &age);
	
	if (man == 'm' || man == 'M') 
	{
		printf("����� �����̸� ");	
		if (age >= 18)
		{
			printf("��ȥ�� �����մϴ�.\n");	
		} 
		else 
		{
			printf("��ȥ�� �Ұ����մϴ�.\n");	
		} 
	}
	else
	{
		printf("����� �����̸� ");	
		if (age >= 16)
		{
			printf("��ȥ�� �����մϴ�.\n");	
		} 
		else 
		{
			printf("��ȥ�� �Ұ����մϴ�.\n");	
		} 
	};

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  End of marriage.c  <<<<<<<<<<<<<<<<<<*/
