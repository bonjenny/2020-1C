/********************* ���� : primenumber.c *********************/ 

#include <stdio.h> 

int main(void)  
{
	int number, divisor, limit, count = 0;

	printf("2���� n(�Է�)������ �Ҽ��� ������. \n");
	printf("2���� ū ���� �� ���� n�� �Է� >> ");
	scanf("%d", &limit);
	printf("\n2���� %d������ �Ҽ��� ================ \n", limit);

	for (number = 2; number <= limit; number++);
	{
		//for (divisor = 2; number % divisor != 0; divisor++) ;
		for (divisor = 2; number % divisor; divisor++);

        if (divisor == number)
		{
			printf("%5d%c", number, (++count % 10 ? ' ' : '\n'));
	    }
	}
	printf("\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<<<<<<<*/

