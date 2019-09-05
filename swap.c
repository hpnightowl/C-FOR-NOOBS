#include<stdio.h>

void main()
            {
                int a,b,box;
                scanf("%d%d",&a,&b);
                printf("Numbers Before Swapping a= %d and b= %d\n",a,b);
                box=a;
                a=b;
                b=box;
                printf("Numbers After Swapping a= %d and b= %d",a,b);
            }
/*
#include<stdio.h>

void main()
            {
                int a,b,box;
                scanf("%d%d",&a,&b);
                printf("Numbers Before Swapping a= %d and b= %d\n",a,b);
                a=a+b;
                b=a-b;
                a=a-b;
                printf("Numbers After Swapping a= %d and b= %d",a,b);
            }
*/
