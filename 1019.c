#include <stdio.h>
void sorting (int *a,int m);
int main ()
{
    int n,i,sb,sc,a[4],b[4],c[4];
    scanf("%d",&n);
    if(n%1111==0)
        printf("%d - %d = 0000",n,n);
    else
        {
    while(n!=6174)
    {
        a[0]=n/1000;
        a[1]=(n%1000)/100;
        a[2]=(n%100)/10;
        a[3]=n%10;
        sorting(a,1);
        for(i=0;i<=3;i++)
            b[i]=a[i];
        sb=b[0]*1000+b[1]*100+b[2]*10+b[3];
        sorting(a,0);
        for(i=0;i<=3;i++)
            c[i]=a[i];
        sc=c[0]*1000+c[1]*100+c[2]*10+c[3];
        printf("%04d - %04d = %04d\n",sb,sc,sb-sc);
        n=sb-sc;
    }
         }
    return 0;
}
void sorting (int *a,int m)
{
    int i,j,temp;
    for(i=0;i<3;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(m==1)
            {
                if(a[j]>a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
            else if(m==0)
            {
                if(a[j]<a[i])
                {
                    temp=a[j];
                    a[j]=a[i];
                    a[i]=temp;
                }
            }
        }
    }
}
