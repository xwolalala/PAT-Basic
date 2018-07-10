#include <stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
    int n,i,max=0,p,q,min=100;
    scanf("%d",&n);
    struct student
    {
        char name[10];
        char num[10];
        int gread;
    };
    struct student a[1000];
    for (i=0;i<n;i++)
        {
            scanf("%s",a[i].name);
            scanf("%s",a[i].num);
            scanf("%d",&a[i].gread);
        }
    for(i=0;i<n;i++)
       {
        max=max>a[i].gread?max:a[i].gread;
        min=min<a[i].gread?min:a[i].gread;
       }
    for(i=0;i<n;i++)
        if(max==a[i].gread)
    {
        q=i;
        break;
    }
     for(i=0;i<n;i++)
        if(min==a[i].gread)
     {
         p=i;
         break;
     }
     printf("%s %s\n",a[q].name,a[q].num);
     printf("%s %s\n",a[p].name,a[p].num);
     return 0;
}
