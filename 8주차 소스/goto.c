/*********************** ���� : goto.c ***********************/ 

#include <stdio.h> 

int main(void)  
{
    int count = 0;

    while (1)
	{
		if (count++ == 30)
			goto LableExit; 
		else 
			printf("%3d%c", count, (count % 5) ? ' ' : '\n');
    }

LableExit :
	printf("\n���α׷��� �����մϴ�.\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>  main() �Լ� ����  <<<<<<<<<<<<<<<<<<<<*/
