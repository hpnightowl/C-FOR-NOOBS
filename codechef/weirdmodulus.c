#include <stdio.h>

int main(void) {
                int result,t,n,p[100],box1,box2;
                scanf("%d",&t);
                while(t--)
                        {
                          scanf("%d",&n);
                          for(int hp=0;hp<n;hp++)
                          {
                            scanf("%d",&p[hp]);
                          }
                            for(int i=0;i<n-1;i++)
                            {
                                box1=p[i]%p[i+1];
                                box2=p[i+1]%p[i];

                                if(box1>box2)
                                    result=box1;
                                else
                                    result=box2;
                            }
                            printf("%d",result);
                        }
	            return 0;
                }


