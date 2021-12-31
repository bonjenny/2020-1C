/*****
 ���� : sumormult-func.c 
 *****/

#include <stdio.h> 

//�� ���� �Լ� ����(����)
long sum(int n) { 
	long result = 0;
	int i = 1;

	for(i = 1; i <= n; i++)
	{
		result += i;
	}
	return result;
}

long mult(int n) {
	long result = 1;
	int i = 1;

	for(i = 2; i <= n; i++)
	{
		result *= i;
	}
	return result;
}

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
		result = sum(n);		//�Լ� sum() ȣ��
	} else 
	{	
		result = mult(n);		//�Լ� mult() ȣ��
	}

	//���
	//C. ����� ���
	printf("%2d���� %3d������ %s�� %3d�Դϴ�. \n", 1, n, (n%2) ? "��" : "��", result);

	return 0;
}