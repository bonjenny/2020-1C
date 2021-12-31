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
	
    printf("char 형 변수 cVal의 크기는 %d 바이트입니다.\n", sizeof (cVal) );
    printf("long 형 변수 gVal의 크기는 %d 바이트입니다.\n", sizeof gVal);
    printf("float 형 변수 fVal의 크기는 %d 바이트입니다.\n", sizeof (fVal) );
    printf("double 형 변수 dVal의 크기는 %d 바이트입니다.\n\n", sizeof (dVal) );

    printf("int 형의 크기는 %d 바이트입니다.\n", sizeof (int));
    printf("unsigned int 형의 크기는 %d 바이트입니다.\n", sizeof (unsigned int));

    return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
