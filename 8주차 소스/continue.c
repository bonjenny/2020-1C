/************************* ���� : continue.c *************************/ 

#include <stdio.h> 
#define LIMIT 10

int main(void)
{
    int i = 1, sum = 0, miss;

    printf("1�� %d������ �� ������ �Է��ϼ���. >> ", LIMIT);
	scanf("%d", &miss);
	
    for ( ; i <= LIMIT; i++)
	{
        if (i == miss) continue;
		sum += i;
	    printf("1���� %d������ ��� ������ ���� %d�Դϴ�.\n", i, sum);
    }

    printf("\n1�� %d���̿��� %d�� ������ ��� ������ ���� %d�Դϴ�.\n",
		   LIMIT, miss, sum);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<<<<<<<<<<*/

