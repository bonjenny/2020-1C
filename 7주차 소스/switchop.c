/*============================== ���� : switchop.c =========================*/ 

#include <stdio.h> //��ó���� ������

int main(void) 
{
	int  invalid_operator = 0;
	char  op;
	float  number1, number2, result;
	//float �Ǽ��� ���� ����
	//������ ���� �� �ʱⰪ ����

	printf("�� ���� ������ ���� ���·� �Է��ϼ���.\n");
	printf("�����ڴ� �� ����(+, -, *, /) ���� �ϳ����� �մϴ�.\n");
	printf("number1 ������ number2\n");
	scanf("%f %c %f", &number1, &op, &number2);
	//ȭ�� �ȳ� �޼��� ���
	//%f=float������ ���� ��ȯ��, %c=char������ ���� ��ȯ��

	switch( op ) //�����ڴ� �� ���� �߿� �ϳ�����
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
			//�����ڰ� �߸��Ǿ����� �˷���
	}

	switch( invalid_operator )
	{
		case 1 : printf("�����ڰ� �߸� �ԷµǾ����ϴ�.\n"); 
			break;

		default : 
			printf("\n>>>>>>>>> ����� \n");
			printf("%5.2f %c %5.2f = %5.2f\n", number1, op, number2, result);
			break;
			//5.2f=5ĭ ��� �Ҽ��� 2�ڸ�
	}

	return 0;
}
/*>>>>>>>>>>>>>>>>>>>>>>>>>  End of switchop.c  <<<<<<<<<<<<<<<<<<<<<<<<<<<<*/

