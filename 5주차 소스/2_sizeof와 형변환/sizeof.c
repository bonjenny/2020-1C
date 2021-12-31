//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// file : sizeof.c                                                              //
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void) 
{ 
    char cVal = 'a';
    long gVal = 256L;
    float fVal = 3.14F;
    double dVal = 14.56E5;
	
    printf("char �� ���� cVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (cVal) );
    printf("long �� ���� gVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof gVal);
    printf("float �� ���� fVal�� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (fVal) );
    printf("double �� ���� dVal�� ũ��� %d ����Ʈ�Դϴ�.\n\n", sizeof (dVal) );

    printf("int ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (int));
    printf("unsigned int ���� ũ��� %d ����Ʈ�Դϴ�.\n", sizeof (unsigned int));

    return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
