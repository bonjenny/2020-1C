/**************** ���� : nestedfor.c ***************/ 

#include <stdio.h> 
#define LIMIT 10

int main(void)
{
    int i, j;

	for (i = 0; i < LIMIT; i++)
	{
		printf("%d", i);
	}
	printf("\n\n");

	//��ø�� for ����
	for (i = 1; i <= LIMIT; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}

	return 0;
}
/*>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<*/
