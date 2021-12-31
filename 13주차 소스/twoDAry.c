/***********************
  颇老 : twoDAry.c 
 ***********************/

#include <stdio.h> 

int main(void) 
{
	int tAry[][3] = {{1, 20, 12}, {3, 5, 16}};
	int ROW = 2, COL = 3, i = 0, j = 0, cnt = 0;
    
	for ( i = 0; i < ROW; i++ ) 
	{
		for ( j = 0; j < COL; j++, cnt++ ) 
		{
			printf("tAry[%d][%d] 硅凯 盔家蔼 == %d\n", i, j, tAry[i][j]);
			printf("\t\t林家蔼 tAry[%d][%d]  \t == [%p]\n ", i, j, &tAry[i][j]);
			printf("\t\t林家蔼 tAry[%d] + %d \t == [%p]\n ", i, j, tAry[i] + j);
			printf("\t\t林家蔼 *tAry + %d    \t == [%p]\n ", cnt, *tAry + cnt);
			printf("\t\t林家蔼 *(tAry + %d) + %d \t == [%p]\n", i, j, *(tAry + i) + j);
		}
		printf("\n");
	}

	printf("sizeof (tAry) == %d\n", sizeof (tAry));
	printf("sizeof (tAry[0]) == %d\n", sizeof (tAry[0]));
	printf("sizeof (tAry[0][0]) == %d\n", sizeof (tAry[0][0]));

	return 0;
}
/*** End of twoDAry.c ***/ 
