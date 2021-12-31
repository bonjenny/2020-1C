/*========================= ���� : calculator.c =======================*/ 

#include <stdio.h> 

/*>>>>>>>>>>>>>>>  main() �Լ� ����  <<<<<<<<<<<<<<<<<<<<*/
int main(void)
{
	int    invalid_operator = 0;
	char   op;
	float  number1, number2, result;

	printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n");
	printf("�����ڴ� �� ����(+, -, *, /) ���� �ϳ����� �մϴ�.\n");
	printf("number1 ������ number2\n");
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
		printf("\n>>>>>>>>> ����� \n");
		printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
    }
	else
		printf("�����ڰ� �߸� �ԷµǾ����ϴ�.\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>  End of calculator.c  <<<<<<<<<<<<<<<<<<<<<<<<*/
