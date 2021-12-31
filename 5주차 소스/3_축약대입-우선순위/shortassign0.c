//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//
// file : shortassign0.c                                      //
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++//

#include <stdio.h>

int main(void) 
{ 
    int m=10;
    int n =3;
    int x,y;

    printf("축약 대입 연산을 수행할 정수 x = 10 \n");
    printf("축약 대입 연산을 수행할 정수 y =  7 \n");

  	x = m; y = n;
    printf("\n연산 x += y 결과는 %d입니다.\n", x += y); 

	x = m; y = n;
    printf("연산 x -= y 결과는 %d입니다.\n", x -= y);

	x = m; y = n;
    printf("연산 x *= y 결과는 %d입니다.\n", x *= y);

	x = m; y = n;
    printf("연산 x /= y 결과는 %d입니다.\n", x /= y);

	x = m; y = n;
    printf("연산 x %%= y 결과는 %d입니다.\n", x %= y); 
       
    printf("\n\n 작업끝.\n\n\n"); 



    printf("참고  x += y 는  x = x + y 와 같습니다.\n"); 
    printf("참고  x -= y 는  x = x - y 와 같습니다.\n"); 
    printf("참고  x *= y 는  x = x * y 와 같습니다.\n"); 
    printf("참고  x /= y 는  x = x / y 와 같습니다.\n"); 
    printf("참고  x %%= y 는  x = x %% y 와 같습니다.\n\n"); 
    return 0;
}


