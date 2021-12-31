/***************************
  ���� : pointerfunction.c
 ***************************/

#include <stdio.h>

void add(double*, double, double);
void subtract(double*, double, double);
void multiply(double*, double, double);
void devide(double*, double, double);

int main(void) 
{
	double m, n, result;
	void (*pf)(double*, double, double) = NULL;

	printf("�Լ� ������ ���� void (*pf)(double*, double, double) = NULL; ���� ��\n");
	printf("�Լ� ������ ���� pf �ּҰ� : %p\n", &pf);
	printf("�Լ� ������ ���� pf ���尪 : %p\n", pf);
	printf("�Լ� ������ ���� pf ����Ʈ ũ�� : %d\n\n", sizeof(pf));

	printf("\n��Ģ������ ������ �Ǽ� 2���� �Է��ϼ���. >> ");
	scanf("%lf %lf", &m, &n);

	//��Ģ������ ����
	pf = add;
	pf(&result, m, n);  //add(&result, m, n);
	printf("\n���� : pf = add; ���� �� �Լ� ȣ��\n"); 
	printf("�Լ� ������ ���� pf ���尪 == %p, �Լ� add() �ּ� == %p\n", pf, add);
	printf("���ϱ� ���� : %lf + %lf == %lf\n\n", m, n, result);

	pf = subtract;
	pf(&result, m, n);  //subtract(&result, m, n);
	printf("���� : pf = subtract; ���� �� �Լ� ȣ��\n"); 
	printf("�Լ� ������ ���� pf ���尪 == %p, �Լ� subtract() �ּ� == %p\n", pf, subtract);
	printf("  ���� ���� : %lf - %lf == %lf\n\n", m, n, result);

	pf = multiply;
	pf(&result, m, n);  //multiply(&result, m, n);
	printf("���� : pf = multiply; ���� �� �Լ� ȣ��\n"); 
	printf("�Լ� ������ ���� pf ���尪 == %p, �Լ� multiply() �ּ� == %p\n", pf, multiply);
	printf("���ϱ� ���� : %lf * %lf == %lf\n\n", m, n, result);

	pf = devide;
	pf(&result, m, n);  //devide(&result, m, n);
	printf("���� : pf = devide; ���� �� �Լ� ȣ��\n"); 
	printf("�Լ� ������ ���� pf ���尪 == %p, �Լ� devide() �ּ� == %p\n", pf, devide);
	printf("������ ���� : %lf / %lf == %lf\n\n", m, n, result);

	return 0;
}
/*** End of pointerfunction.c ***/ 

 

