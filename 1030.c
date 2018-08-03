#include <stdio.h>
#include <string.h>
int main ()
{
    int i,j,t,n,p,a[100000],max,min,num,nummax=0;
    scanf("%d %d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }//把输入数据排序
    for(max=n-1;max>=0;max--)
    {
        min=a[max]/p;
        num=0;
        for(i=max-1;i>=0;i--)
        {
            if(a[i]>=min)
            {
                num++;

            }
            else
            {
                break;
            }
        }
        if(num>nummax)
        {
            nummax=num;
        }
    }
    printf("%d",nummax);
}
