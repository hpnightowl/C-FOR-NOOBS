#include<stdio.h>

void main()
            {
                int t,x[50],y[50],a[50];
                scanf("%d",&t);
                for(int i=0;i<t;i++)
                    {
                     scanf("%d",&a[i]);
                     scanf("%d",&x[i]);
                     scanf("%d",&y[i]);
                    }
                for(int k=0;k<2;k++)
                {
                    for(int j=0;j<a[k];j++)
                    {
                        if(j%x[k]==0 && j%y[k]!=0)
                           { printf("%d",j);
                             printf(" ");
                           }
                    }
                    printf("\n");

                }


            }
