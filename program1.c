#include<stdio.h>
main()
{
    int sec,minutes,ans_sec;
    printf("enter seconds");
    scanf("%d",&sec);
    ans_sec=(sec%60);
    minutes=sec/60;
    printf("%d minutes \n%d seconds",minutes,ans_sec);
}
