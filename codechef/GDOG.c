#include <stdio.h>

int main(void) 
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,k,c=0,i=0;
	    scanf("%d%d",&n,&k);
	    for(i=2;i<=k;i++)
	    {
	        if((n%i)>c)
	          c=n%i;
	    }
	    printf("%d\n",c);
	}
	return 0;
}
