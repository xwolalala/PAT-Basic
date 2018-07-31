#include <stdio.h>
int main ()
{
    int i,j,n,s=1,a=3,left,ss=0;
    char h;
    scanf("%d",&n);
    scanf(" %c",&h);
    while((s+2*a)<n)
    {
        s=s+2*a;
        a=a+2;
        ss++;
    }
    left=n-s;
    for(i=0;i<ss;i++)
    {
        for(j=1;j<=i;j++)
            putchar(' ');
        for(j=1;j<=(1+2*(ss-i));j++)
           printf("%c",h);
        printf("\n");
    }
    for(i=ss;i>=0;i--)
    {
        for(j=i;j>0;j--)
            putchar(' ');
        for(j=1;j<=(1+2*(ss-i));j++)
            printf("%c",h);
        printf("\n");
    }
    printf("%d",left);
}

