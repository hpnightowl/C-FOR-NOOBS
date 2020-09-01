#include<stdio.h>
#define N 15 // default size for 15 to init the array to zeros
int main(){

	int i,j,k,t,t1,bt[N]={0},at[N]={0},tat[N]={0},wt[N]={0},ct[N]={0};
	int n,tBT=0;
	float sumtat=0,sumwt=0;

	printf("Enter total no of processes: ");
	scanf("%d",&n);

	for(i=0;i<n;i++){
		printf("\nEnter Arrival Time for process %d: ",i+1);
		scanf("%d",&at[i]);
	}
	for(int i =0;i<n;i++){
	    printf("\nBurst Time for process %d: ",i+1);
	    scanf("%d",&bt[i]);
	}

	for(i=0;i<n;i++){
        for(j=i+1; j<n; j++){
            if(at[i] > at[j]){
                t = at[i];
                t1 = bt[i];
                at[i] = at[j];
                bt[i] = bt[j];
                at[j] = t;
                bt[j] = t1;
            }
        }
    }

    tBT = at[0];
	for( j=0;j<n;j++){
		tBT+=bt[j];
		ct[j]+=tBT;
	}

	for(k=0;k<n;k++){
		tat[k]=ct[k]-at[k];    // turnaroundtime
		wt[k]=tat[k]-bt[k];  //waiting time
		sumtat+=tat[k];       //for Average tat sum
        sumwt+=wt[k];         //for Average waiting time sum
	}
    //Printing Table
	printf("\nP#\t\tAT\t\tBT\t\tCT\t\tTAT\t\tWT\t\n\n");

	for(i=0;i<n;i++){
		printf("P%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i+1,at[i],bt[i],ct[i],tat[i],wt[i]);
	}
	printf("------------------------------------------------------------------------------------");
	printf("\n\t\t\t\t\t\t\t\t%.2f\t\t%.2f\n",sumtat,sumwt);

	printf("\n\nAverage Turnaround Time = %f\n",sumtat/n);
	printf("Average WT = %f\n\n",sumwt/n);

	return 0;
}
