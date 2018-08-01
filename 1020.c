#include <stdio.h>
int main ()
{
    int n,d,i,flag,flagp=0;
    float a[1000]/*每种库存量*/,b[1000]/*每种总售价*/,max=0,total=0;
    scanf("%d %d",&n,&d);
    for(i=0;i<n;i++)
        scanf("%f",&a[i]);
    for(i=0;i<n;i++)
        scanf("%f",&b[i]);
    while(d>0)
    {
        for(i=0;i<n;i++)
        {
            if((max<(b[i]/a[i]))||((max=(b[i]/a[i]))&&(a[i]>a[flag])))
                {
                    max=b[i]/a[i];
                    flag=i;
                }
        }
        printf("%d     %f\n",flag,max);
        if(a[flag]>=d)
        {
            total=total+max*d;
            break;
        }
        if(a[flag]<d)
        {
            total=total+b[i];
            d=d-a[flag];
            a[flag]=0;
            printf("%d\n",total);
        }
       d=d-a[flag];
       max=0;
    }
    printf("%f",total);
    return 0;
}

