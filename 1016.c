#include <stdio.h>
int main ()
{
    int i,sa=0,sb=0,ssa=1,ssb=1,sssa=0,sssb=0;
    char a[10]={0},b[10]={0},da,db;
    scanf("%s %c %s %c",a,&da,b,&db);
    for(i=0;i<=9;i++)
    {
        if(a[i]==da)
            sa++;
    }
    for(i=0;i<=9;i++)
    {
        if(b[i]==db)
            sb++;
    }
    for(i=1;i<sa;i++)
        ssa=ssa*10;
    for(i=1;i<sb;i++)
        ssb=ssb*10;
    for(i=0;i<sa;i++)
    {
        sssa=sssa+ssa;
        ssa=ssa/10;
    }
    for(i=0;i<sb;i++)
    {
        sssb=sssb+ssb;
        ssb=ssb/10;
    }
    printf("%d",sssa*(da-'0')+sssb*(db-'0'));
}









