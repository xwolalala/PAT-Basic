/*C语言实现大数据除法*/

#include "stdio.h"
#include "string.h"
void main()
{
    char a[1000]={0};
    int b[1000]={0};
    int c[1000]={0};
    int i;
    int n;
    int x=0;
    int lena=0;
    int lenc=1;
    scanf("%s",a);
    scanf("%d",&n);
    for(i=0;i<strlen(a);i++)
    {
        b[i+1]=a[i]-'0';
    }
    lena=strlen(a);
    for(i=1;i<=lena;i++)
    {
        c[i]=(x*10+b[i])/n;
        x=(x*10+b[i])%n;/*余数就是最后一个的X*/
    }/*数学除法的分解求得除数*/

    while (c[lenc]==0&&lenc<lena)
    {
        lenc++;
    }/*找到第一个不为零的除数的数组下标*/

    c[0]=lena-lenc+1;/*除数的长度*/
    for(i=1;i<=c[0];i++)
    {
        c[i]=c[lenc];
        lenc++;/*从c[1]开始放进除数*/
    }
    for(i=1;i<=c[0];i++)
    {
        printf("%d",c[i]);
    }
    printf(" %d",x);
    return 0;
}










































