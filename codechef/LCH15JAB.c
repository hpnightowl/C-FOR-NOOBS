#include <stdio.h>

int main(void) {
    int t;char s[50],box=0,sum,greenlight;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%s",&s);
        for(int i = 0 ;i <strlen(s);i++)
            {
                sum=0;box=0;
                for(int j = 0 ;j <strlen(s);j++)
                 {
                   if(s[i] == s [j] ) box++;
                   sum=strlen(s)-box;
                 }
     //             printf("%d ",sum);
       //           printf("%d\n",box);
                if(sum == box)
                { 
                    greenlight=1;
                    break;
                }
                else
                {
                 greenlight=0;
                }
                
            }
            if(greenlight)
                { 
                 printf("Yes\n");
                }
                else
                {   
                 printf("No\n");
                }
           


    }
    
    return 0;
}

