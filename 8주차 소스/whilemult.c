/****************** ���� : whilemult.c ********************/ 

#include <stdio.h> 

int main(void)
{

	int mult = 1, i = 0, num = 0;

    printf("1���� n������ ���� ���� n�� �Է��ϼ���. > ");
	scanf("%d", &num);

	printf("\nfor �ݺ����� �̿� : \n");
	for (i = 1; i <= num; i++) 
	{
		mult *= i;
		printf("1���� %d������ ���� %d �Դϴ�.\n", i, mult);
	}
	
	i = 1;
	mult = 1;
	while (i <= num) 
		mult *= i++;
	printf("\nwhile �ݺ����� �̿� : \n");
	printf("1���� %d������ ���� %d �Դϴ�.\n", num, mult);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<<<<*/

