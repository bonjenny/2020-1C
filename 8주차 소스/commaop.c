/************************* 파일 : commaop.c ***************************/ 

#include <stdio.h> 

int main(void)
{
	int sum, mult, i, max;

	printf("양의 정수를 하나 입력하세요. > ");
	scanf("%d", &max);

    for (sum = 0, mult = 1, i = 1; i <= max; sum += i, mult *= i, i++);

	printf("1에서 %d까지의 합은 %d 입니다.\n", max, sum);
	printf("1에서 %d까지의 곱은 %d 입니다.\n", max, mult);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<<<<<<<<<<<*/

