//注意字符串开辟大小空间的时候有反斜杠0的位置！！！！！
#include <stdio.h>
int main ()
{
    int n,i;
    char a[19];
    int quan[17]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
    char jiao[11]={'1','0','X','9','8','7','6','5','4','3','2'};
    scanf("%d",&n);
    int j,z,yes=0;
    for(i=0;i<n;i++)
    {
        scanf("%s",a);
        for(j=0,z=0;j<17&&a[j]>='0'&&a[j]<='9';j++)
            z=z+(a[j]-'0')*quan[j];
        if(jiao[z%11]==a[17]&&j==17)
            yes++;
        else
            printf("%s\n",a);
    }
    if(n==yes)
        printf("All passed");
        return 0;
}
