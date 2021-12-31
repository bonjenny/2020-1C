/***********************
  파일 : twoDAry2.c 
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
			printf("tAry[%d][%d] 배열 원소값 == %d\n", i, j, tAry[i][j]);
			printf("주소값 tAry[%d] + %d \t == [%p], ", i, j, tAry[i] + j);
			printf("참조값 *(tAry[%d] + %d) \t == %d\n", i, j, *(tAry[i] + j));
			printf("주소값 *tAry + %d    \t == [%p], ", cnt, *tAry + cnt);
			printf("참조값 *(*tAry + %d) \t == %d\n", cnt, *(*tAry + cnt));
			printf("주소값 *(tAry + %d) + %d \t == [%p], ", i, j, *(tAry + i) + j);
			printf("참조값 *(*(tAry + %d) + %d)== %d\n", i, j, *(*(tAry + i) + j));
			printf("\t\t\t\t\t참조값 (*(tAry + %d))[%d]\t == %d\n", i, j, (*(tAry + i))[j]);
		}
		printf("\n");
	}

	return 0;
}
/*** End of twoDAry2.c ***/ 
