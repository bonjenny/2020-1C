/*                file name : arithmetic.c                      */
//  C4996 ���� �߻���
//  scanf ��ſ� scanf_s�� ����ϰų�
//  SDL üũ�� ���� �մϴ�. 
//  (�������� ÷�������� scanf ���� ���� �ذ�.ppt �� �����ٶ�)

#include <stdio.h>

int main(void) 
{ 
    int x, y;
    int addition, subtraction, multiplication, division, modulus;

    printf("���� 1�� �Է��ϼ��� : ");
    scanf("%d", &x);
    printf("���� 2�� �Է��ϼ��� : ");
    scanf("%d", &y);

	//��Ģ����� ������ ������ ���� ���ô�.
    addition = x + y;
    subtraction = x - y;
    multiplication = x * y;
    division = x / y;
    modulus = x % y;

	//��Ģ����� ������ ������ ����սô�.
	
    printf("%d + %d�� %d�Դϴ�.\n", x, y, addition);
    printf("%d - %d�� %d�Դϴ�.\n", x, y, subtraction);
    printf("%d * %d�� %d�Դϴ�.\n", x, y, multiplication);
    printf("%d / %d�� %d�Դϴ�.\n", x, y, division);
    printf("%d %% %d�� %d�Դϴ�.\n", x, y, modulus);
    
    return 0;
}
/* ============================================================ */
