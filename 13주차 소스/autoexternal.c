/*************************************************************************/
/* ���� : autoexternal.c */ 
/*************************************************************************/

#include <stdio.h> //printf() �� �̿��� ���� ��� ���� ����

void increment(int);

int gIndex = 11;
int count = 51;

//////////////////////////////////////////////////////////////////////
int main(void)  
{
    extern int gIndex;    //�ܺ� ��������

    auto int index = 15;  //�ڵ� ��������
    int count = 55;       //�ڵ� ��������

	printf("���� �Լ����� increment() �Լ� ȣ�� ��\n");
	printf(" (����)gIndex = %2d, (����)index = %2d, (����)count = %2d\n\n", 
		    gIndex, index, count);

    increment(index); 

	printf("���� �Լ����� increment() �Լ� ȣ�� ��\n");
	printf(" (����)gIndex = %2d, (����)index = %2d, (����)count = %2d\n\n", 
		    gIndex, index, count);

	return 0;
}

//////////////////////////////////////////////////////////////////////
void increment(int i)
{
	i++;
	gIndex++;
	count++;
	printf("\tincrement() �Լ� ������\n");
	printf("\t\t (����)gIndex = %2d, (����)i = %2d, (����)count = %2d\n\n", 
		    gIndex, i, count);
}
/*************************************************************************/
