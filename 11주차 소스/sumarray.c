/****
 sumarray.c : �迭���� ��� ������ ���� ���ϴ� ���α׷�
 ****/ 

#include <stdio.h> 

int sum(int g[], int n);	//�迭 ���� ��� ���ϴ� �Լ� ����

int main(void) 
{
    int i = 0, total = 0;

	// �迭 �ʱ�ȭ
	int grade[] = {10, 20, 33, 35, 13, 79, 45};

	printf("7���� ���� ���� ������ ����. \n");	
	for (i = 0; i < 7; i++) 
	{
		printf("%d%s", grade[i], (i==6) ? "\n" : ", ");	
	}

	//�迭 ���� ��� ���ϱ� 
	for (i = 0; i < 7; i++) total += grade[i];

	printf("\n���ο��� ���� ���� ���� %d �̰�, \n", total);	
	printf("�Լ����� ���� ���� %d �̴�. \n", sum(grade, 7));	

	return 0;
}

//�迭 ���� ��� ���ϴ� �Լ� 
int sum(int g[], int n) 
{
	int i = 0, total = 0;

	for (i = 0; i < n; i++) total += g[i];

	return total;
}
/************************* ���α׷� ���� *************************/