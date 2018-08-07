/*#include <stdio.h>
int main ()
{
    int n,m,i,j;
    int a[100000],b[100000],c[100000]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&m);
    for(i=0;i<m;i++)
        scanf("%d",&b[i]);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(b[i]==a[j])
            {
                c[i]++;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        printf("%d ",c[i]);
    }
     printf("\b");
    return 0;
}
*/
#include <stdio.h>
int main ()
{
    int i,m,n,a[101]={0},b,c;
    scanf("%d",&m);
    for(i=0;i<m;i++)
    {
        scanf("%d",&b);
        a[b]++;
    }
    scanf("%d",&n);
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&c);
        printf("%d ",a[c]);
    }
    printf("%d",a[n]);
    return 0;
}
















