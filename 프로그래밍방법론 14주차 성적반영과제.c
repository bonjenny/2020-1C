/************test.c************/

#include <stdio.h>
main() {
    int p = 2, k, y, year, month;   //p는 각 달 1일의 요일을 정하는 변수, k는 counter
    int m[13] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };  //m[0] = 0;
    printf("\n출력을 원하는 연도와 달을 입력하세요 : ");
    scanf_s("%4d %2d", &year, &month);  //연도와 달 입력받음

    for (y = 1900; y < year; y++) { //1900년에서 입력받은 연도의 직전까지 반복
        for (k = 1; k <= 12; k++) {
            if (y % 4 == 0 && y % 100 != 0) //윤년일 경우 m[2] = 29, 윤년이 아닐 경우 m[2] = 28
                m[2] = 29;
            else if (y % 400 == 0)
                m[2] = 29;
            else
                m[2] = 28;
            p = p + m[k];
            p = p % 7;
        }
    }

    for (k = 1; k < month; k++) {   //입력받은 연도 내에서 입력받은 달까지 반복
        if (y % 4 == 0 && y % 100 != 0)
            m[2] = 29;
        else if (y % 400 == 0)
            m[2] = 29;
        else
            m[2] = 28;
        p = p + m[k];
        p = p % 7;
    }

    if (p == 0) //p가 0일 경우 7로 대체
        p = 7;

    printf("\n\n            %4d년 %2d월 \n\n", year, month);  //입력받은 연도와 달 출력
    printf(" 일   월   화   수   목   금   토   \n\n");    //요일 출력
    for (k = 1; k < p; k++) //1일의 위치 맞추기
        printf("     ");
    for (k = 1; k <= m[month]; k++) {   //날짜 출력
        printf("%3d  ", k);
        p = p + 1;
        if (p > 7) {
            printf("\n\n");
            p = 1;
        }
    }
    printf("\n\n");

}