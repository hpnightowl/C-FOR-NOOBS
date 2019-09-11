#include<stdio.h>

void main()
            {
                int a[5],sum=0;float per;
                for(int i=0;i<5;i++)
                    {
                     printf("Enter Marks Of Subject %d: ",i+1);
                     scanf("%d",&a[i]);
                    }
                for(int i=0;i<5;i++)
                    {
                     sum+=a[i];
                    }
                per=sum/5.0;
                if(per>=90) printf("Grade A");
                  else
                    if(per>=80) printf("Grade B");
                   else
                      if(per>=70) printf("Grade C");
                    else
                        if(per>=60) printf("Grade D");
                     else
                        if(per>=40) printf("Grade E");
                      else
                         if(per<40) printf("Grade F");
            }
