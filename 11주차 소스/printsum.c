/*****
 ���� : printsum.c 
 *****/

#include <stdio.h> 

//�Լ� ����
int sum(int a, int b);
void printKorea(void);

int main(void) 
{
	int a=3, b=4;

	printKorea();
	printf("%3d + %3d = %4d\n", a, b, sum(a, b));

	return 0;
}

/****************** �ٸ� �Լ��� ���� ******************/
int sum(int a, int b) 
{ 
	return (a + b);
}

void printKorea(void)
{
    printf("2010�� ������! ��~�� �α� ¥��~¥��¥ \n");
}