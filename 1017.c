/*C����ʵ�ִ����ݳ���*/

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
        x=(x*10+b[i])%n;/*�����������һ����X*/
    }/*��ѧ�����ķֽ���ó���*/

    while (c[lenc]==0&&lenc<lena)
    {
        lenc++;
    }/*�ҵ���һ����Ϊ��ĳ����������±�*/

    c[0]=lena-lenc+1;/*�����ĳ���*/
    for(i=1;i<=c[0];i++)
    {
        c[i]=c[lenc];
        lenc++;/*��c[1]��ʼ�Ž�����*/
    }
    for(i=1;i<=c[0];i++)
    {
        printf("%d",c[i]);
    }
    printf(" %d",x);
    return 0;
}










































