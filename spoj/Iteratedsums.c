#include<stdio.h>

void main()
            {
                int a,b;
                scanf("%d %d",&a,&b);
                a=a-1;
                int sum1=(a*(a+1)*(2*a+1))/6;
                int sum=(b*(b+1)*(2*b+1))/6;
                printf("%d",sum-sum1);
            }
