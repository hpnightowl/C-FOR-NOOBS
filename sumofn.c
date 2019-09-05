#include<stdio.h>

void main()
            {
                int n,sum=0;
                printf("Enter A Number To Add");
                scanf("%d",&n);
                printf("0");
                for(int i=1;i<=n;i++)
                    {
                        sum+=i;
                        printf("+%d",i);
                    }
                printf(" = %d",sum);
            }
