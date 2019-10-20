#include <stdio.h>

int main(void) {
	// your boxode goes here
int t;
	scanf("%d",&t);
	if(t<=100)
	{
	while(t!=0)
	{
	    int n,i,j,hp,box;
	    int a[101];
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
        box=1;
        hp=1;
        if(a[hp]<a[hp-1])
            box+=1;
        hp+=1;
        if(a[hp]<a[hp-1] && a[hp]<a[hp-2])
           box+=1;
        hp+=1;
        if(a[hp]<a[hp-3] && a[hp]<a[hp-1] && a[hp]<a[hp-2])
            box+=1;
        hp+=1;
        if(a[hp]<a[hp-3] && a[hp]<a[hp-1] && a[hp]<a[hp-2] && a[hp]<a[hp-4])
            box+=1;
        hp+=1;
        if(a[hp]<a[hp-3] && a[hp]<a[hp-1] && a[hp]<a[hp-2] && a[hp]<a[hp-4] && a[hp]<a[hp-5])
            box+=1;
        hp+=1;
        for(hp=hp;hp<n;hp++)
            if(a[hp]<a[hp-3] && a[hp]<a[hp-1] && a[hp]<a[hp-2] && a[hp]<a[hp-4] && a[hp]<a[hp-5])
                box+=1;
            hp+=1;
            
        printf("%d\n",box);
        t--;
	}
	}
	
	return 0;
}
