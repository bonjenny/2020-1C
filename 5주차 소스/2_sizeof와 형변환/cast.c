//++++++++++++++++++++++++++++++++++++++++++++++++//
// file : cast.c                                  //
//++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void) 
{ 
    double x = 2.4;
    double y = 3.9;
	
	int iResult1 = x + y;
	int iResult2 = (int) x + y;
	int iResult3 = (int) x + (int) y;

	double dResult1 = x + y;
	double dResult2 = (int) x + y;
	double dResult3 = (int) x + (int) y;
	double dResult4 = (int) (x + y);

    printf("iResult1 => %4d\n", iResult1);
    printf("iResult2 => %4d\n", iResult2);
    printf("iResult3 => %4d\n\n", iResult3);
    printf("dResult1 => %7.2f\n", dResult1);
    printf("dResult2 => %7.2f\n", dResult2);
    printf("dResult3 => %7.2f\n", dResult3);
    printf("dResult4 => %7.2f\n", dResult4);

    return 0;
}
//++++++++++++++++++++++++++++++++++++++++++++++++//
