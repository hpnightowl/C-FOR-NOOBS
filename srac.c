#include<stdio.h>

void main()
    {
        int a[3][4],sumr=0,sumc=0;
        for(int i=0;i<3;i++)
        {
        for(int j=0;j<4;j++)
             {
                 scanf("%d",&a[i][j]);
               }
          }
        for(int i=0;i<3;i++)
        {
        sumr=0;
        for(int j=0;j<4;j++)
             {
                 printf("%d ",a[i][j]);
                 sumr+=a[i][j];
             }
             printf("%d",sumr);
             printf("\n");
          }
        for(int i=0;i<4;i++)
        {
        sumc=0;
        for(int j=0;j<3;j++)
             {
                 sumc+=a[j][i];
             }
             printf("%d ",sumc);
        }

    }
