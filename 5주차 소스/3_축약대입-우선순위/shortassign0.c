//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// file : shortassign0.c                                      //
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void) 
{ 
    int m=10;
    int n =3;
    int x,y;

    printf("��� ���� ������ ������ ���� x = 10 \n");
    printf("��� ���� ������ ������ ���� y =  7 \n");

  	x = m; y = n;
    printf("\n���� x += y ����� %d�Դϴ�.\n", x += y); 

	x = m; y = n;
    printf("���� x -= y ����� %d�Դϴ�.\n", x -= y);

	x = m; y = n;
    printf("���� x *= y ����� %d�Դϴ�.\n", x *= y);

	x = m; y = n;
    printf("���� x /= y ����� %d�Դϴ�.\n", x /= y);

	x = m; y = n;
    printf("���� x %%= y ����� %d�Դϴ�.\n", x %= y); 
       
    printf("\n\n �۾���.\n\n\n"); 



    printf("����  x += y ��  x = x + y �� �����ϴ�.\n"); 
    printf("����  x -= y ��  x = x - y �� �����ϴ�.\n"); 
    printf("����  x *= y ��  x = x * y �� �����ϴ�.\n"); 
    printf("����  x /= y ��  x = x / y �� �����ϴ�.\n"); 
    printf("����  x %%= y ��  x = x %% y �� �����ϴ�.\n\n"); 
    return 0;
}


