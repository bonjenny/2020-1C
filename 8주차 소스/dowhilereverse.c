/************** ���� : dowhilereverse.c *************/ 

#include <stdio.h> 

int main(void)  
{
    int value;		//�Է��� ���� ��
	int r_digit;	//����� ������ �ڸ���

    printf("�ݴ�� ����� ������ �Է��ϼ���.\n");
    scanf("%d", &value);
    printf("\n�Է��� ���� �ݴ�� ����ϸ� >>> ");

    do
	{
        r_digit = value % 10;
        printf("%d", r_digit);
        value = value / 10;
    } while( value /* value != 0 */ );
    printf("\n");

    return 0;
}
/*>>>>>>>>>>>>>>>>  ���α׷� ����  <<<<<<<<<<<<<<<<<*/
