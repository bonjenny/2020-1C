/******
 ���� : sumormult-main.c 
 ******/

#include <stdio.h> 

int main(void) {
	int n = 1, i = 1;
	long result = 0;

	//ǥ���Է����� ���� �б�
	//A. ����� �Է� ���� n�� ǥ���Է����� �ϳ��� ������ ����
	printf("���� ������ �ϳ� �Է��ϼ���. ");
	scanf("%d", &n);

	//¦��, Ȧ�� ���� 
	//B. �� ������ ���� �����Ͽ� ¦���̸� ���� Ȧ���̸� ���� ������.
    if (n%2 == 0) 
	{
		result = 0;
		for (i = 1; i <= n; i++) 
		{
			result += i;
		}
	} 
	else 
	{
		result = 1;
		for (i = 1; i <= n; i++) 
		{
			result *= i;
		}
	}

	//���
	//C. ����� ���
	printf("%2d���� %3d������ %s�� %3d�Դϴ�. \n", 1, n, (n%2) ? "��" : "��", result);

	return 0;
}
