#include <stdio.h>
#include <math.h>
int main ()
{
    int a[999],i=2,j,k=0,flag,num=0;
    int m,n;
    scanf("%d %d",&m,&n);
    while(1)
    {
        flag=0;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            a[k]=i;
            k++;
        }
        if(k==999)
            break;
        i++;
    }
    for(i=m-1;i<n;i++)
    {
        num++;
        if(num%10!=0)
            printf("%d ",a[i]);
        if(num%10==0)
            printf("%d\n",a[i]);
        }
        return 0;
}
