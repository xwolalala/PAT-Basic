/*����scanf()���ԣ�%c�Ǹ���Ϊ�����˵������ %cǰû�ո�scanf()����ȡ��׼�������еĵ�һ���ַ���%cǰ�пո�scanf()���ȡ��׼�������е�һ���ǿհ��ַ���*/
#include <stdio.h>
int main ()
{
    int n,i,jiacwin=0,jiajwin=0,jiabwin=0,yicwin=0,yijwin=0,yibwin=0,jiaping=0,yiping=0,jialose=0,yilose=0;
    char jia,yi;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf(" %c %c",&jia,&yi);
        if(jia=='C')
        {
            if(yi=='C')
            {
                jiaping++;
                yiping++;
            }
            else if(yi=='J')
            {
                jiacwin++;
                yilose++;
            }
            else if(yi=='B')
            {
                jialose++;
                yibwin++;
            }
        }
        else if(jia=='J')
        {
            if(yi=='C')
            {
                jialose++;
                yicwin++;
            }
            else if(yi=='J')
            {
                jiaping++;
                yiping++;
            }
            else if(yi=='B')
            {
                jiajwin++;
                yilose++;
            }
        }
        else if(jia=='B')
        {
            if(yi=='C')
            {
                jiabwin++;
                yilose++;
            }
            else if(yi=='J')
            {
                jialose++;
                yijwin++;
            }
            else if(yi=='B')
            {
                jiaping++;
                yiping++;
            }
        }
    }
    printf("%d %d %d\n",jiacwin+jiajwin+jiabwin,jiaping,jialose);
    printf("%d %d %d\n",yicwin+yijwin+yibwin,yiping,yilose);
    printf("%c ",jiabwin>=jiacwin?(jiabwin>=jiajwin?'B':'J'):(jiacwin>=jiajwin?'C':'J'));
    printf("%c",yibwin>=yicwin?(yibwin>=yijwin?'B':'J'):(yicwin>=yijwin?'C':'B'));
    return 0;
}
