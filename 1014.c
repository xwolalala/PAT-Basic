#include <stdio.h>
#include <string.h>
int main ()
{
    int day,hh,mm;
    char str1[61],str2[61],str3[61],str4[61];
    char *weekday[]={"MON","TUE","WED","THU","FRI","SAT","SUN"};
    scanf("%s %s %s %s",str1,str2,str3,str4);
    for(day=0;str1[day]&&str2[day];day++)
    {
        if(str1[day]==str2[day]&&str1[day]>='A'&&str1[day]<='G')
            {
                printf("%s ",weekday[str1[day]-'A']);
                break;
            }
    }
    for(hh=day+1;str1[hh]&&str2[hh];hh++)
    {
        if(str1[hh]==str2[hh]&&str1[hh]>'0'&&str1[hh]<='9')
        {
            printf("0%d:",str1[hh]-'0');
            break;
        }
        if(str1[hh]==str2[hh]&&str1[hh]>='A'&&str1[hh]<='N')
        {
            printf("%d:",str1[hh]-'A'+10);
            break;
        }
    }
    for(mm=0;str3[mm]&&str4[mm];mm++)
    {
        if(str3[mm]==str4[mm]&&str3[mm]>='a'&&str3[mm]<='z')
        {
            printf("%02d",mm);
            break;
        }
        if(str3[mm]==str4[mm]&&str3[mm]>='A'&&str3[mm]<='Z')
        {
            printf("%02d",mm);
            break;
        }
    }
    return 0;
}
