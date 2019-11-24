#include <stdio.h>

int main(void) 
{
	int i,k,t,n,flag,left;
	scanf("%d",&t);
while(t--)
{
scanf("%d%d",&n,&k);
int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    left=0;
    flag=0;
        for(i=0;i<n;i++)
        {
            left+=a[i];
            left-=k;
            if(left<0)
                {
                printf("NO %d\n",i+1);
                flag=1;
                break;
                }
        }
    if(flag==0)
        {
         printf("YES\n");
        }
	}
	return 0;
}
