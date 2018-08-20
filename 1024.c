#include <stdio.h>
int main ()
{
    int b;
    char a[9999],*c=a;
    scanf("%[^E]E%d",a,&b);
    if(*c=='-')
        putchar('-');
    c++;
    if(b>0)
    {
        putchar(*c);
        for(c+=2;b;b--)
            putchar(*c ? *c++ : '0');
        if(*c)
        {
            putchar('.');
            while(*c)
                putchar(*c++);
        }
    }
    if(b<0)
    {
        printf("0.");
        b++;
        for(;b;b++)
            putchar('0');
        while(*c)
        {
            if(*c!='.')
            putchar(*c);
            c++;
        }
    }
    return 0;
}






/*#include <stdio.h>
int main()
{
    int exponent;
    char line[10000], *p = line;
    scanf("%[^E]E%d", line, &exponent);

    if(*p++ == '-') putchar('-');
    if(exponent >= 0)
    {
        putchar(*p);
        for(p += 2; exponent; exponent--)
            putchar(*p ? *p++ : '0');
        if(*p)
        {
            putchar('.');
            while(*p)
                putchar(*p++);
        }
    }
    if(exponent < 0)
    {
        printf("0.");
        for(exponent++; exponent; exponent++)
            putchar('0');
        for(; *p; p++) if(*p != '.') putchar(*p);
    }

    return 0;
}
*/
