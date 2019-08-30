#include<stdio.h>

void main()
        {
            int a,b,ch;
            printf("Enter two values ");
            scanf("%d %d ",&a,&b);
            printf("1. Addition of two numbers");
            printf("\n2. Subtract two numbers");
            printf("\n3. Multiply two numbers");
            printf("\n4. Remainder two numbers");
            printf("\n Enter Your Choice");
            scanf("%d",&ch);
            switch(ch)
                {
              case 1:
                    printf("\nSum Of Two Numbers:= %d ",a+b);
                    break;
              case 2:
                    if(a>b)
                        printf("\nSubtraction Of Two Numbers:= %d ",a-b);
                    else
                        printf("\nSubtraction Of Two Numbers:= %d ",b-a);
                    break;
              case 3:
                    printf("\nMultiplication Of Two Numbers:= %d ",a*b);
                    break;
              case 4:
                    printf("\nRemainder Of Two Numbers:= %d ",a%b);
                    break;
              default:
                    printf("\nInvalid");
                    break;

                }


        }
