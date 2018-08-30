#include <stdio.h>
#include <ctype.h>
int main ()
{
    char c;
    int a[128]={0};
    while((c=getchar())!='\n')
    {
        a[c]=1;
    }
    while((c=getchar())!='\n')
    {
        if(!a[toupper(c)]&&!(a['+']&&isupper(c)))
        {
            putchar(c);
        }
    }
    return 0;
}































