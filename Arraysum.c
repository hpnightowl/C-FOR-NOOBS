#include<stdio.h>

void main()
        {
            int a[100],sum=0,n;
            printf("Enter the number Of elements You Want To Enter: ");
            scanf("%d",&n);
            for(int i=0;i<n;i++)
            {
                printf("Element no.%d : ",i+1);
                scanf("%d",&a[i]);
            }
                for(int i=0;i<n;i++)
                sum+=a[i];

            printf("\n Sum Of All The Elements Of Array is : %d",sum);

        }
