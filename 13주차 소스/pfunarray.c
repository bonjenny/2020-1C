/*********************
  ���� : pfunarray.c
 *********************/

#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void) 
{
	double m, n, result;
	int opmenu;
	char *opstr[4] = {"���ϱ�", "����", "���ϱ�", "������"};
	char op[4] = {'+', '-', '*', '/'};

	void (*pfary[4])(double*, double, double) = {add, subtract, multiply, devide};

	printf("��Ģ������ ���Ͽ� �� ���꿡 ���� ��ȣ�� �Է��ϼ���. >> \n");
	printf("[���ϱ�] : 0, [����] : 1, [���ϱ�] : 2, [������] : 3\n");
	scanf("%d", &opmenu);

	if ( !(0 <= opmenu && opmenu <= 3) ) 
	{
		printf("\�޴� �Է��� �߸��Ǿ� ���α׷��� �����մϴ�.\n");
		return 0;
	}

	printf("\n��Ģ������ ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &m, &n);

	printf("\n�Լ� pfary[0] ���尪 == %p, �Լ�      add() �ּ� == %p\n", pfary[0], add);
	printf("�Լ� pfary[1] ���尪 == %p, �Լ� subtract() �ּ� == %p\n", pfary[1], subtract);
	printf("�Լ� pfary[2] ���尪 == %p, �Լ� multiply() �ּ� == %p\n", pfary[2], multiply);
	printf("�Լ� pfary[3] ���尪 == %p, �Լ�   devide() �ּ� == %p\n", pfary[3], devide);

	//��Ģ������ �迭�� ÷�ڸ� �̿��Ͽ� ����
	pfary[opmenu](&result, m, n);  

	printf("\n���� : pfary[%d] �Լ� ȣ��\n", opmenu); 
	printf("%s ���� : %lf %c %lf == %lf\n\n", opstr[opmenu], m, op[opmenu], n, result);

	return 0;
}
/*** End of pfunarray.c ***/ 

