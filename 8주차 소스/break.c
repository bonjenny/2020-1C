/******************** ���� : break.c *********************/ 

#include <stdio.h> 
#define TERMINAL 10

int main(void)
{
    int num;

    printf("������ �ϳ� �Է��ϰ� ����Ű�� ��������.\n");
    printf("���� 10�� �Է��ϸ� ���α׷��� ����˴ϴ�.\n");

    for ( ; ; ) 
	{
		scanf("%d", &num);
        if (num == TERMINAL) break;
    }
    printf("���� ������ �����մϴ�.\n");

	return 0;
}
/*>>>>>>>>>>>>>>>>>>  main() �Լ� ����  <<<<<<<<<<<<<<<<<*/

