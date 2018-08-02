#include <stdio.h>
int main ()
{
    int n,i,max1=0,max2=0,max3=0,flagmax,min1=3000,min2=13,min3=35,flagmin,sss=0;
    struct individual{
    char name [5];
    int yyyy,mm,dd;
    };
    struct individual each[9999];
    scanf("%d",&n);
   // printf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%s",each[i].name);
        scanf("%d/%d/%d/%d",&each[i].yyyy,&each[i].mm,&each[i].dd);
    }
   /*     if((each[i].yyyy>2014))
        {
            i--;
            continue;
        }
        else if((each[i].yyyy==2014)&&(each[i].mm>9))
        {
            i--;
            continue;
        }
        else if((each[i].yyyy==2014)&&(each[i].mm==9)&&(each[i].dd>6))
        {
            i--;
            continue;
        }
        else if(each[i].yyyy<1814)
        {
            i--;
            continue;
        }
        else if((each[i].yyyy==1814)&&(each[i].mm<9))
        {
            i--;
            continue;
        }
        else if((each[i].yyyy==1814)&&(each[i].mm==9)&&(each[i].dd<6))
        {
            i--;
            continue;
        }
        else
        sss++;
*/
    printf("%d\n",n);
    for(i=0;i<n;i++)
    printf("%s  ",each[i].name);
    for(i=0;i<n;i++)
    {
        if(each[i].yyyy>max1)
        {

            if(each[i].mm>max2)
            {

                if(each[i].dd>max3)
                    {max1=each[i].yyyy;
                     max2=each[i].mm;
                        max3=each[i].dd;
                        flagmax=i;
                    }
            }
        }

    }
    for(i=0;i<n;i++)
    {
        if(each[i].yyyy<min1)
        {
            if(each[i].mm<min2)
            {

                if(each[i].dd<min3)
                    {min1=each[i].yyyy;
                    min2=each[i].mm;
                        min3=each[i].dd;
                        flagmin=i;
                    }
            }
        }
    }
    printf("%d %d",flagmax,flagmin);
    printf("%s %s",each[flagmax].name,each[flagmin].name);
    return 0;
}
