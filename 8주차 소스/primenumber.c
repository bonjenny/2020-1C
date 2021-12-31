/********************* 파일 : primenumber.c *********************/ 

#include <stdio.h> 

int main(void)  
{
	int number, divisor, limit, count = 0;

	printf("2부터 n(입력)까지의 소수를 구하자. \n");
	printf("2보다 큰 상한 값 정수 n을 입력 >> ");
	scanf("%d", &limit);
	printf("\n2부터 %d까지의 소수는 ================ \n", limit);

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
/*>>>>>>>>>>>>>>>>>>>>>>  프로그램 종료  <<<<<<<<<<<<<<<<<<<<<<<*/

