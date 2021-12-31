/********************************************************************************/
/* 파일 : register.c */ 
/********************************************************************************/

#include <stdio.h> 
#include <time.h>	//함수 clock(), time() 이용을 위한 헤더파일

#define LIMIT 1000000000

/////////////////////////////////////////////////////////
int main(void) 
{
	register int rcount = 1;
    auto int count = 1;
	clock_t now_cpu, interval_cpu;
	time_t now_time, interval_time;

	now_time = time(NULL);		//현재 시간을 반환
	now_cpu = clock();			//프로그램에서 사용한 프로세서 시간을 반환

	for ( ; rcount <= LIMIT; rcount++);
	
	interval_cpu = clock() - now_cpu;		//프로세서 사용 시간
	interval_time = time(NULL) - now_time;  //소요된 시간
	
	printf("레지스터 변수를 사용한 루프 : \n"
		   "\t 프로세서에서 소요된 시간은 %lf입니다.\n", (double) interval_cpu);
	printf("\t 루프에서 소요된 시간은 %lf입니다.\n", (double) interval_time);

	return 0;
}
/*******************************************************************************/
