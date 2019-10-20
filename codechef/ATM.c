#include <stdio.h>

int main(void) {
            int w;float cb,dec;
            scanf("%d",&w);
            scanf("%f",&cb);
            if(w%5==0 && w<cb)
                printf("%.2f",cb-w-0.5);
            else
                printf("%.2f",cb);	return 0;
}
