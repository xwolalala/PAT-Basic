#include <stdio.h>
#include <string.h>
int main()
{


    int sum=0,i=0,a[100],n;
    char s[100];
    gets(s);
    n=strlen(s);

    for(i=0;i<n;i++)
        sum=sum+s[i]-'0';

        i = 0;
        n = 0;
    while(sum != 0)
    {
        a[i++] = sum%10;
        sum = sum/10;
        n++;
    }


    for(i=n-1;i>=0;i--)
       {
            switch(a[i])
            {
            case 0:printf("ling ");break;
            case 1:printf("yi ");break;
            case 2:printf("er ");break;
            case 3:printf("san ");break;
            case 4:printf("si ");break;
            case 5:printf("wu ");break;
            case 6:printf("liu ");break;
            case 7:printf("qi ");break;
            case 8:printf("ba ");break;
            case 9:printf("jiu ");break;
            }
        }
        printf("\b\n");
    return 0;
}
