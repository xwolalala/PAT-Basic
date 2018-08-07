#include <stdio.h>
int main ()
{
    int i,a[128]={0},more=0,less=0;
    char c;
    while((c=getchar())!='\n')
    {
        a[(int)c]++;
    }
    while((c=getchar())!='\n')
    {
        a[(int)c]--;
    }
    for(i=0;i<128;i++)
    {
        if(a[i]>0)
        {
            more+=a[i];
        }
        if(a[i]<0)
        {
            less+=a[i];
        }
    }
    if(less!=0)
    {
        printf("No %d",less*(-1));
    }
    else
    {
        printf("Yes %d",more);
    }
    return 0;
}
