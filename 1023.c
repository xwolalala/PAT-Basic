#include <stdio.h>
int main ()
{
    int n[10]={0},i,j,min;
    for(i=0;i<10;i++)
        scanf("%d",&n[i]);
    for(i=1;i<10;i++)
    {
        if(n[i]!=0)
        {
            min=i;
            break;
        }
    }
    printf("%d",min);
    for(i=0;i<n[0];i++)
        printf("0");
    for(i=1;i<n[min];i++)
        printf("%d",min);
    for(i=min+1;i<10;i++)
    {
        for(j=0;j<n[i];j++)
            printf("%d",i);
    }
    return 0;
}
