/****************** 파일 : whilemult.c ********************/ 

#include <stdio.h> 

int main(void)
{

	int mult = 1, i = 0, num = 0;

    printf("1부터 n까지의 곱을 구할 n을 입력하세요. > ");
	scanf("%d", &num);

	printf("\nfor 반복문을 이용 : \n");
	for (i = 1; i <= num; i++) 
	{
		mult *= i;
		printf("1에서 %d까지의 곱은 %d 입니다.\n", i, mult);
	}
	
	i = 1;
	mult = 1;
	while (i <= num) 
		mult *= i++;
	printf("\nwhile 반복문을 이용 : \n");
	printf("1에서 %d까지의 곱은 %d 입니다.\n", num, mult);

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<<<<*/

