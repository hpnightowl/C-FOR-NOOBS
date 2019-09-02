#include<stdio.h>

void main()
			{
				int n,k=0,count=0;
				scanf("%d",&n);
				int r[n],c[n];
				for(int i =0 ;i<n;i++)
                    {
                        scanf("%d",&r[i]);
                        scanf("%d",&c[i]);
                    }
            while(k!=n)
            {
                for(int i=1;i<=r[count];i++)
                    {
                        printf("\n");
                        for(int j=1;j<=c[count];j++)
                        {
                            printf("*");
                        }
                    }
            count++;
            printf("\n");
            k++;
            }
        }

