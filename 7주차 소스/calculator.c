/*========================= 파일 : calculator.c =======================*/ 

#include <stdio.h> 

/*>>>>>>>>>>>>>>>  main() 함수 시작  <<<<<<<<<<<<<<<<<<<<*/
int main(void)
{
	int    invalid_operator = 0;
	char   op;
	float  number1, number2, result;

	printf("두 수를 다음과 같은 형태로 입력하세요.\n");
	printf("연산자는 네 가지(+, -, *, /) 중의 하나여야 합니다.\n");
	printf("number1 연산자 number2\n");
	scanf("%f %c %f", &number1, &op, &number2);

	if (op == '*')
		result = number1 * number2;
	else if (op == '/')
		result = number1 / number2;
	else if (op == '+')
		result = number1 + number2;
	else if (op == '-')
		result = number1 - number2;
	else
		invalid_operator = 1;

	if ( invalid_operator != 1 )
	{
		printf("\n>>>>>>>>> 결과는 \n");
		printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
    }
	else
		printf("연산자가 잘못 입력되었습니다.\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>  End of calculator.c  <<<<<<<<<<<<<<<<<<<<<<<<*/
