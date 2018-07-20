#include <stdio.h>
int main ()
{
    int a[99],n,i,m;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=n-m;i<n;i++)
        printf("%d\t",a[i]);
    for(i=0;i<n-m;i++)
        printf("%d\t",a[i]);
    printf("\b");
    return 0;
}
