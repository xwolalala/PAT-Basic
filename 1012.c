#include <stdio.h>
int main ()
{
    int n,i=0,a[999]={0},s1=0,a1=0,p=-1,a2=0,s2=0,a3=0,a5=0,max=0;
    float q,a4=0,s4=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)

    {
        if(a[i]%5==0&&a[i]%2==0)
        {
            a1++;
            s1=s1+a[i];
        }
        if(a[i]%5==1)
        {
            a2++;
            p=p*(-1);
            s2=s2+a[i]*p;
        }
        if(a[i]%5==2)
        {
            a3++;
        }
        if(a[i]%5==3)
        {
            a4++;
            s4=s4+a[i];
        }
        if(a[i]%5==4)
        {
            a5++;
            if(a[i]>max)
                max=a[i];
        }
    }
        if(a1==0)
            printf("N ");
        if(a1!=0)
            printf("%d ",s1);
        if(a2==0)
            printf("N ");
        if(a2!=0)
            printf("%d ",s2);
        if(a3==0)
            printf("N ");
        if(a3!=0)
            printf("%d ",a3);
        if(a4==0)
            printf("N ");
        if(a4!=0)
            {
                q=s4/a4;
                printf("%.1f ",q);
            }
        if(a5==0)
            printf("N");
        if(a5!=0)
            printf("%d",max);
        return 0;
}
