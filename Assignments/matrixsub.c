/*
``Question 40:
                Harsh Pal
                19BAI10127
                CSE1001
                F11+F12+F13
*/
#include<stdio.h>
void main()
        {
            int a[2][2],b[2][2],sub[2][2],i,j;
            printf("Enter values For Matrix 1:\n");
            for(i=0;i<2;i++)
                {
                for(j=0;j<2;j++)
                    {
                     scanf("%d",&a[i][j]);
                     printf("\t");
                    }
                 printf("\n");
                }

            printf("\n Enter values For Matrix 2 \n");

            for(int h=0;h<2;h++)
                {
                printf("\n");
                for(int hp=0;hp<2;hp++)
                    {
                    scanf("%d",&b[h][hp]);
                    printf("\t");
                    }
                }

            for(int k=0;k<2;k++)
                {
                for(int l=0;l<2;l++)
                    {
                    sub[k][l]=a[k][l]-b[k][l];
                    }
                }

            printf("\n Subtraction Of Two Matrix is: \n  ");

            for(i=0;i<2;i++)
                {
                for(j=0;j<2;j++)
                    {
                    printf("%d \t",sub[i][j]);
                    }
                printf("\n");
                }

        }
