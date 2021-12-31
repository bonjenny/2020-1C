/*========================== 파일 : sumormult.c ======================*/ 

#include <stdio.h> 

int main(void) 
{
	char op = 0;
	int num1 = 0, num2 = 0;

	printf("두 정수의 더하기(add)를 원하면 a를\n");	
	printf("두 정수의 곱하기(multiply)를 원하면 m을 입력하세요. : > ");	
	scanf("%c", &op);

	if (op == 'a') 
		printf("---> 더할 ");	
	else
		printf("---> 곱할 ");	

	printf(" 두 수를 현재 줄에 입력하세요. : > ");	
	scanf("%d %d", &num1, &num2);	

	if (op == 'a') 
	{
		printf("두 수의 합 %d + %d은 ", num1, num2);	
		printf("%d 입니다.\n", num1 + num2);	
	} 
	else
	{
		printf("두 수의 곱 %d * %d은 ", num1, num2);	
		printf("%d 입니다.\n", num1 * num2);	
	};

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>  End of sumormult.c  <<<<<<<<<<<<<<<<<<<<<<<<*/
