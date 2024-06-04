#include <stdio.h>
#include <stdlib.h>

int waiting_time(int p[],int n,int bt[],int wt[]){
    wt[0]=0;
    int i=0;
  for (i=1;i<n;i++){
    wt[i]= wt[i-1] + bt[i-1];
  }
  return wt;
}
int turnaround_time(int p[],int n,int bt[],int wt[],int tt[]){
  int i=0;
  for (i=0;i<n;i++){
    tt[i]= wt[i] + bt[i];
  }
  return tt;
}

void avg_time(int p[],int n, int bt[])
{ int wt[n],tt[n],total_wt=0,total_tt=0,i=0;
  float avg_wt,avg_tt;
  waiting_time(p,n,bt,wt);
  turnaround_time(p,n,bt,wt,tt);
  for (i=0;i<n;i++){
    total_wt= total_wt + wt[i];
    total_tt= total_tt + tt[i];
    }
    avg_wt = total_wt/n;
    avg_tt = total_tt/n;
    printf("process no. \t burst time \t waiting time \t Turn around time \n");
    for(i=0;i<n;i++){
    printf("%d          \t %d         \t %d           \t %d               \n",i,bt[i],wt[i],tt[i]);
    }
    printf("Average waiting time is %f \n",avg_wt);
    printf("Average turn around time is %f \n",avg_tt);

}

int main()
{  int n,i=0;
   int bt[n],p[n];

   printf("Enter the number of processes \n");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
   printf("Enter process number %d \n",i);
   scanf("%d",&p[i-1]);
   }
   for(i=1;i<=n;i++){
   printf("Enter burst time for process %d \n",i);
   scanf("%d",&bt[i-1]);
   }
   avg_time(p,n,bt);
}
