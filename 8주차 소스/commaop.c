/************************* ���� : commaop.c ***************************/ 

#include <stdio.h> 

int main(void)
{
	int sum, mult, i, max;

	printf("���� ������ �ϳ� �Է��ϼ���. > ");
	scanf("%d", &max);

    for (sum = 0, mult = 1, i = 1; i <= max; sum += i, mult *= i, i++);

	printf("1���� %d������ ���� %d �Դϴ�.\n", max, sum);
	printf("1���� %d������ ���� %d �Դϴ�.\n", max, mult);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<<<<<<<<<<<*/

