/************************
  파일 : callbyaddress.c 
 ************************/ 

#include <stdio.h> 

void incrementbyvalue(int number);
void incrementbyaddress(int *number);

int main(void)
{
   int number = 10;

   printf("함수 main()에서 \n");
   printf("\t지역변수 number의 주소값 == %p, 저장값 == %d\n\n", &number, number);

   printf("\tincrementbyvalue(int number)를 호출 =>> \n\n");
   incrementbyvalue(number);
   printf("\tincrementbyvalue(int number)를 호출 이후 =>> \n");
   printf("\t지역변수 number의 주소값 == %p, 저장값 == %d\n\n", &number, number);

   printf("\tincrementbyaddress(int *number)를 호출 =>> \n\n");
   incrementbyaddress(&number);
   printf("\tincrementbyaddress(int *number)호출 이후 =>> \n");
   printf("\t지역변수 number의 주소값 == %p, 저장값 == %d\n\n", &number, number);

   return 0;
}

void incrementbyvalue(int number)
{
   number++;
   printf("\t\t함수 incrementbyvalue()에서 \n");
   printf("\t\t\t지역변수 number의 주소값 == %p, 저장값 == %d\n\n", &number, number);
}

void incrementbyaddress(int *number)
{
   (*number)++;
   printf("\t\t함수 incrementbyaddress()에서 \n");
   printf("\t\t\t지역변수 number의 주소값 == %p, 저장값 == %p\n\n", &number, number);
}
/*** End of callbyaddress.c ***/ 



