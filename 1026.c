/*对于四舍五入的，+5的整十倍再除就OK了*/
#include <stdio.h>
# define clk 100
int main ()
{
    int c1,c2,hh,mm,ss,time;
    scanf("%d %d",&c1,&c2);
    time=(c2-c1+50)/clk;
    hh=time/3600;
    mm=(time%3600)/60;
    ss=time%60;
    printf("%2d:%2d:%2d",hh,mm,ss);
}
