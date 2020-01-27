#include<stdio.h>

void main()
            {
                int n;
                scanf("%d",&n);
                //pattern line one
                printf("*");
                //spaces
                for(int i=0;i<(n+1)/2-2;i++)
                    printf(" ");
                for(int i=0;i<(n+1)/2;i++)
                    printf("*");
                int loop1 = (n+1)/4;
                int hp=0;
                while(loop1!=hp)
                    {
                    printf("\n");
                    printf("*");
                    for(int i=0;i<(n+1)/2-2;i++)
                    printf(" ");
                    printf("*");
                    hp++;
                    }
                printf("\n");
                if( n%2 == 0)
                 for(int i=0;i<n-1;i++)
                {
                 printf("*");
                }
                else
                    for(int i=0;i<n;i++)
                    printf("*");


                int loop2 = (n+1)/4;
                int hp1=0;
                while(loop2!=hp1)
                    {
                    printf("\n");
                    for(int i=0;i<(n+1)/2-1;i++)
                    printf(" ");
                    printf("*");
                    for(int i=0;i<(n+1)/2-2;i++)
                    printf(" ");
                    printf("*");
                    hp1++;
                    }
                printf("\n");
                for(int i=0;i<(n+1)/2;i++)
                    printf("*");
                for(int i=0;i<(n+1)/2-2;i++)
                    printf(" ");
                printf("*");
            }
