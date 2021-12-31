/*============================== 파일 : switchop.c =========================*/ 

#include <stdio.h> 

int main(void) 
{
	int  invalid_operator = 0;
	char  op;
	float  number1, number2, result;

	printf("두 수를 다음과 같은 형태로 입력하세요.\n");
	printf("연산자는 네 가지(+, -, *, /) 중의 하나여야 합니다.\n");
	printf("number1 연산자 number2\n");
	scanf("%f %c %f", &number1, &op, &number2);

	switch( op ) 
	{
		case '*' : 
			result = number1 * number2; 
			break;
		case '/' : 
			result = number1 / number2; 
			break;
		case '+' : 
			result = number1 + number2; 
			break;
		case '-' : 
			result = number1 - number2; 
			break;

		default : 
			invalid_operator = 1;
	}

	switch( invalid_operator )
	{
		case 1 : printf("연산자가 잘못 입력되었습니다.\n"); 
			break;

		default : 
			printf("\n>>>>>>>>> 결과는 \n");
			printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
			break;
	} 

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>  End of switchop.c  <<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

