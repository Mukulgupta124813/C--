#include<stdio.h>
void findWaitingTime(int processes[], int n, int at[],int ct[],  int wt[])
{
    for (int  i = 0; i < n ; i++ )
        wt[i] =  ct[i] - at[i] ;
}

void findCompletionTime(int processes[],int n, int bt[],int ct[]){
    ct[0]=bt[0];
    for(int i=1;i<n;i++){
        ct[i] = bt[i] + ct[i-1];  
    }
}
   
// Function to calculate turn around time
void findTurnAroundTime( int processes[], int n, int bt[], int wt[], int tat[])
{
    for (int  i = 0; i < n ; i++)
        tat[i] = wt[i] - bt[i];
}
   
void findavgTime( int processes[], int n, int bt[],int at[])
{
    int wt[n],ct[n], tat[n], total_wt = 0, total_tat = 0;

    findCompletionTime(processes,n,bt,ct);
    findWaitingTime(processes, n, at,ct,wt);
    findTurnAroundTime(processes, n, bt, wt, tat);
   
    //Display processes along with all details
    printf("Processes   Arrival time   Burst time   Compeletion Time   Waiting time   Turn around time\n");
  
    for (int  i=0; i<n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf("   %d ",(i+1));
        printf("       \t%d",at[i]);
        printf("       \t%d ", bt[i] );
        printf("       \t%d ", ct[i] );
        printf("      \t %d",wt[i] );
        printf("       \t%d\n",tat[i] );
    }
    int s=(float)total_wt / (float)n;
    int t=(float)total_tat / (float)n;
    printf("Average waiting time = %d",s);
    printf("\n");
    printf("Average turn around time = %d ",t);
}
   
// Driver code
int main()
{
    //process id's
    int processes[] = { 1, 2, 3};
    int n = sizeof processes / sizeof processes[0];
    int arrivalTime[]={0,3,5};
    //Burst time of all processes
    int  burst_time[] = {2, 1, 6};
   
    findavgTime(processes, n,  burst_time,arrivalTime);
    return 0;
}
