/******************
  ���� : address.c 
 ******************/ 

#include <stdio.h> 

int main(void) 
{
	char ch = 'a';
	int  num = 100;
	double real[2] = {3.14, 1.87};

	printf("char   ����(ch)  �� %6c�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n", ch, &ch, &ch);
	printf("int    ����(num) �� %6d�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n", num, &num, &num);
    printf("\n���� ch�� ���� num�� �ּ� ���� ���̴� %u�̴�\n\n", 
		    (unsigned)&ch - (unsigned)&num);
	printf("double ����(real[1]) �� %6.2f�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n", 
		    real[1], &real[1], &real[1]);
	printf("double ����(real[0]) �� %6.2f�� �ּҴ� %p�̸�, 10������ %8u�̴�.\n", 
		    real[0], &real[0], &real[0]);
    printf("\n���� num�� ���� real[0]�� �ּ� ���� ���̴� %u�̴�\n\n",
		    (unsigned)&num - (unsigned)&real[0]);

	return 0;
}
/*** End of address.c ***/ 