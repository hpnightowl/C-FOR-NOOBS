#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char *s,count[10]={0};
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    for(int i =0 ;i<strlen(s);i++)
        if(isdigit(s[i]))
            {
            count[(int)s[i]-48]+=1;     
            }
    for(int i =0 ;i<10;i++)
            {
            printf("%d ",count[i]);
            }
    
    return 0;
}
