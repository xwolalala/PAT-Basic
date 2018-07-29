/*不知道长度的char数组都可以先以字符串输入以后，用strlen函数计算长度*/
#include <stdio.h>
#include <string.h>
int main ()
{
    char a[1000];
    int i,b[10]={0};
    scanf("%s",a);
    for(i=0;i<strlen(a);i++)
    {
        b[a[i]-'0']++;
    }
    for(i=0;i<strlen(a);i++)
    {
        if(b[i]!=0)
        printf("%d:%d\n",i,b[i]);
    }
}
