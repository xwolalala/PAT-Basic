#include <stdio.h>
#include <string.h>
int main ()
{
    char origin[80],now[80],new_[80],newly[80];
    int i,j,k=0;
    scanf(" %s",origin);
    scanf(" %s",now);
    for(i=0;i<strlen(origin);i++)
    {
        for(j=0;j<strlen(now);j++)
        {
            if(origin[i]==now[j])
            {
                origin[i]=' ';
            }
        }
    }//除去好的
         for(i=0;i<strlen(origin);i++)
    {
        if(origin[i]!=' ')
        {
            new_[k]=origin[i];
            k++;
        }
    }//只剩下坏的
    for(i=0;i<strlen(new_);i++)
    {
        if((new_[i]>='a')&&(new_[i])<='z')
            new_[i]=(new_[i]-'a'+'A');
    }
    for(i=0;i<(strlen(new_)-1);i++)
        {
            for(j=i+1;j<strlen(new_);j++)
            {
                if(new_[i]==new_[j])
                {
                    new_[j]=' ';
                }
            }
        }//删去重复
         k=0;
    for(i=0;i<strlen(new_);i++)
    {
        if(new_[i]!=' ')
        {
            newly[k]=new_[i];
            k++;
        }
    }//删去空格
   for(i=0;i<strlen(newly);i++)
        printf("%c",newly[i]);
         printf("\n");

    return 0;
    }

/*#include<stdio.h>
#include<string.h>


int main()
{
	char real[81], s[81], bro[81];
	int i, j;
	scanf("%s", real);
	scanf("%s", s);
	for (i = 0; i < strlen(s); i++)
	{
		for (j = 0; j < strlen(real); j++)
		{
			if (s[i] == real[j])
			{
				real[j] = ' ';
			}
		}

	}
	for (i = 0; i < strlen(real); i++)
	{

		if (real[i] != ' ')
		{

			if (real[i] >= 'a'&&real [i]<= 'z')
				real[i] += 'A' - 'a';

		}
	}

	for (i = 0; i < strlen(real); i++)
	{
		for (j = i+1; j < strlen(real); j++)
		{
			if (real[i] == real[j])
			{
				real[j] = ' ';
			}
		}
	}
for (i = 0; i < strlen(real); i++)
	{
		if (real[i] != ' ')
		{
			printf("%c", real[i]);
		}
	}



    return 0;
}
*/


