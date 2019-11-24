#include <stdio.h>

int main(void) 
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d",&n);
	    int a[n],box=0;
	    for(int i = 0 ; i< n; i++)
	        scanf("%d",&a[i]);
	   
	    for(int i=0;i<n;i++)
	    {
	        int box=0;
	        for(int j=0;j<n;j++)
	            {
	                if(a[i]<a[j])
	                box++;
	            }
	            printf("%d ",box);
	    }
        printf("\n");
	}
	return 0;
}
