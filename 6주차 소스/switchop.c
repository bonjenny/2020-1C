/*============================== ���� : switchop.c =========================*/ 

#include <stdio.h> 

int main(void) 
{
	int  invalid_operator = 0;
	char  op;
	float  number1, number2, result;

	printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n");
	printf("�����ڴ� �� ����(+, -, *, /) ���� �ϳ����� �մϴ�.\n");
	printf("number1 ������ number2\n");
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
		case 1 : printf("�����ڰ� �߸� �ԷµǾ����ϴ�.\n"); 
			break;

		default : 
			printf("\n>>>>>>>>> ����� \n");
			printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
			break;
	} 

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>  End of switchop.c  <<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

