#include <stdio.h>
int main ()
{
    int n,hang,i,j;
    char f;
    scanf("%d %c",&n,&f);
    hang=(n*10/2+5)/10;
    for(i=0;i<n;i++)
    {
        printf("%c",f);
    }
    printf("\n");
    for(i=0;i<hang-2;i++)
    {
        printf("%c",f);
        for(j=0;j<n-2;j++)
        {
            printf(" ");
        }
        printf("%c\n",f);
    }
    for(i=0;i<n;i++)
    {
        printf("%c",f);
    }
    return 0;
}
