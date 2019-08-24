#include<stdio.h>

void main()
            {
                int n,box=0;
                scanf("%d",&n);
                for(int i=n;i>0;i--)
                    if (n%i==0) box++;
                if(box>2)

                    printf("it's Not The Prime Number");
                else
                    printf("Congo! It's Prime :)");
            }
