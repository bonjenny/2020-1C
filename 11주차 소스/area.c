/*****
 ���� : area.c 
 *****/

#include <stdio.h>

double triangle(double w, double h);
double rectangle(double w, double h);

int main(void) 
{
	double width, height;

	printf("������ ���� �ﰢ���� �簢���� ���ο� ���θ� �Է��ϼ���.\n");
	scanf("%lf%lf", &width, &height);
	printf("\n�Է��Ͻ� ���ο� ���δ�");
	printf("\n���� %lf�� %lf�Դϴ�.\n", width, height);

	printf("�� �ﰢ���� ������ %.2lf�Դϴ�.\n", triangle(width, height) );
	printf("�� �簢���� ������ %.2lf�Դϴ�.\n", rectangle(width, height) );

	return 0;
}

/**** �ﰢ���� ������ ���ϴ� �Լ� ���� *****/
double triangle(double w, double h)
{
	return w * h / 2;
}

/**** �簢���� ������ ���ϴ� �Լ� ���� *****/
double rectangle(double w, double h)

{
	return w * h;
}
