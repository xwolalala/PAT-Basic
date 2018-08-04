//答案部分正确的时候就要十分注意极限值了
#include <stdio.h>
int main ()
{
    int n,i,c,s;
    int max=0,max_school,a[100001]={0};
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&s,&c);
        a[s]+=c;
        if(a[s]>max)
        {
            max=a[s];
            max_school=s;
        }
    }
    printf("%d %d",max_school,a[max_school]);
}
