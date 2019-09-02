#include<stdio.h>

void main()
			{
				int n,j,k=1,count=0,box=0;
				scanf("%d",&n);
				int s[n],e[n];
				for(int i =0 ;i<n;i++)
                    {
                        scanf("%d",&s[i]);
                        scanf("%d",&e[i]);
                    }
                    printf("\n");
                for(int l=0;l<n;l++)
                {
                    for(j=s[count];j<=e[count];j++)
                    {
                        box=0;
                        if(j==1) continue;
                        for(int k=1;k<j;k++)
                        {
                            if(j%k==0) box++;
                        }
                        if(box<2)
                    printf("%d \n",j);
                }
                count++;
                printf("\n");
            }
        }

