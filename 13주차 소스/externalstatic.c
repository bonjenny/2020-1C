/***********************************************************************/
/* ���� : externalstatic.c */ 
/***********************************************************************/

#include <stdio.h> 

int sum(int);
static int cntFunction = 0; 

//////////////////////////////////////////////////////////////////
int main(void) 
{
	int count = 1;
    //extern int cntFunction; 

	for ( ; count <= 5; count++ )
		printf("1���� %3d������ ���� %5d�̴�.\n", count, sum(count));
	
	printf("���� ���ϴ� �Լ��� �� %2d�� ȣ��Ǿ����ϴ�.\n", cntFunction);
}

/////////////////////////////////////////////////////////////////
int sum(int limit) 
{
	auto int i = 1, total = 0;

	cntFunction++;
	for ( i = 1; i <= limit; i++ )
		total += i;

	return total;
}
/***********************************************************************/
