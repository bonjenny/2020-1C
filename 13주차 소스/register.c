/********************************************************************************/
/* ���� : register.c */ 
/********************************************************************************/

#include <stdio.h> 
#include <time.h>	//�Լ� clock(), time() �̿��� ���� �������

#define LIMIT 1000000000

/////////////////////////////////////////////////////////
int main(void) 
{
	register int rcount = 1;
    auto int count = 1;
	clock_t now_cpu, interval_cpu;
	time_t now_time, interval_time;

	now_time = time(NULL);		//���� �ð��� ��ȯ
	now_cpu = clock();			//���α׷����� ����� ���μ��� �ð��� ��ȯ

	for ( ; rcount <= LIMIT; rcount++);
	
	interval_cpu = clock() - now_cpu;		//���μ��� ��� �ð�
	interval_time = time(NULL) - now_time;  //�ҿ�� �ð�
	
	printf("�������� ������ ����� ���� : \n"
		   "\t ���μ������� �ҿ�� �ð��� %lf�Դϴ�.\n", (double) interval_cpu);
	printf("\t �������� �ҿ�� �ð��� %lf�Դϴ�.\n", (double) interval_time);

	return 0;
}
/*******************************************************************************/
