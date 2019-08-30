#include<stdio.h>

void main()
        {
            int id,pass;
            printf("Enter your ID: ");
            scanf("%d",&id);
            switch(id)
                {
              case 101:
                    printf("\n Enter Your Password: ");
                    scanf("%d",&pass);
                        switch(pass)
                        {
                        case 100:
                            printf("\nCheers! Your are Welcome To Our Club");
                            break;
                        default:
                            printf("\n Sir please Enter valid Password");
                            break;
                        }
                    break;
              default:
                    printf("\nInvalid Id Please Enter Correct ID");
                    break;

                }


        }
