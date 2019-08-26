#include"stdio.h"
void main()
            {
                int a,b,c,s;
                printf("enter a,b,c");
                scanf("%d %d %d",&a,&b,&c);
                s=a+b+c;
                if(a<180 && a>0 && b<180 && b>0 && c<180 && c>0)
                {
                    if(s==180)
                      printf("valid triangle");
                }
                else
                    printf("not valid");
            }
