/********************
  ���� : doubleptr.c 
 ********************/ 

#include <stdio.h> 

int main(void) 
{
	int i = 10;
	int *pi = &i; 
	int **dpi = &pi;
    
	printf("���� i  �� �ּҴ� [%p]�̸�, ���尪�� %d\n", &i, i);
	printf("���� pi �� �ּҴ� [%p]�̸�, ���尪�� %#x\n", &pi, pi);
	printf("���� dpi�� �ּҴ� [%p]�̸�, ���尪�� %#X\n\n", &dpi, dpi);

	*pi = i + 2;
	printf("���� *pi = i + 2; ����\n"); 
	printf("���� i  �� �ּҴ� [%p]�̸�, ���尪�� %d\n", &i, i);
	printf("���� pi �� �ּҴ� [%p]�̸�, ���尪�� %#x\n\n", &pi, pi);

	**dpi = *pi + 2;
	printf("���� **dpi = *pi + 2; ����\n"); 
	printf("���� i  �� �ּҴ� [%p]�̸�, ���尪�� %d\n", &i, i);
	printf("���� pi �� �ּҴ� [%p]�̸�, ���尪�� %#x\n", &pi, pi);
	printf("���� dpi�� �ּҴ� [%p]�̸�, ���尪�� %#X\n", &dpi, dpi);

	return 0;
}
/*** End of doubleptr.c ***/ 

