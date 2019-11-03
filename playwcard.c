#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
    {
        srand(time(0));
        int hp1[6] , hp2[1], box = 1;
        w:
        printf("\n");
        for( int i = 0; i < 6 ; i++ ) //picking 6 cards
        {
            hp1[i] = rand() % 6 + 1;
            printf("%d" , hp1[i]);
        }
        x:
        for( int i = 0 ; i < 2 ; i++ ) //choosing 2 cards
        {
            hp2[i] = rand() % 5 + 1;
            printf("\n%d" , hp2[i]);
            if(hp2[0] == hp2[1])
                goto x;
        }
        if( hp1[hp2[0]] == hp1[hp2[1]] )  //same cards then break else re-doit
            {
                printf("\nNo. Of Shuffle %d\n", box);
                exit(0);
            }
        else
        {
            box++;
            goto w;
        }

    }
