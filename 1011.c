#include <stdio.h>
int main ()
{
    int n;
    long a,b,c;
    int i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%ld %ld %ld",&a,&b,&c);
        if(a+b>c)
            printf("Case #%d: true\n",i);
        else
            printf("Case #%d: false\n",i);
    }
    return 0;
}
