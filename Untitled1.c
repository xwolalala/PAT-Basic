#include <stdio.h>
int main ()
{
	int n,s=0;
	scanf("%d",&n);
	while(n!=1)
	{
		if(n%2!=0)
			n=(3*n+1)/2;
		else
			n=n/2;
        s=s+1;
	}
	printf("%d",s);
	return 0;

}
