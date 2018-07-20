#include <stdio.h>
#include <math.h>
int main ()
{
    int n,i,k,j=0,b=0,s=0,flag,a[100000];
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        flag=0;
        for(k=2;k<=sqrt(i);k++)
          if(i%k==0)
            {
                flag=1;
                break;
            }
          if(flag==0)
               {
                 a[j]=i;
                 j++;
                 b++;
               }
    }
    for(i=b-1;i>1;i--)
        if(a[i]-a[i-1]==2)
            s++;
    printf("%d\n",s);
    return 0;
}
