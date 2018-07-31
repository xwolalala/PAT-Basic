#include <stdio.h>
int main ()
{
    int i=0,d,s=0;
    int a,b,c,yushu[999];
    scanf("%d %d %d",&a,&b,&d);
    c=a+b;
    while(1)
    {
        yushu[i]=c%d;
        i++;
        c=c/d;
        s++;
        if(c==0)
            break;
    }
    for(i=s-1;i>=0;i--)
        printf("%d",yushu[i]);
    return 0;
}
