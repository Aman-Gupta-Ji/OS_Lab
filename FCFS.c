#include<stdio.h>
#include<stdlib.h>
#define max(a,b) ((a>b)?a:b)
int main(void) {
    int n;
    scanf("%d",&n);
    int At[n], Bt[n];
    int Ct[n], Tt[n], Wt[n], Rt[n], St[n];
    float AvgTt, AvgWt, AvgRt, CpuUtil;
    int i;
    printf("AT\tBT\n");
    for(i=0;i<n;i++) {
        scanf("%d%d",&At[i],&Bt[i]);
    }
    Ct[0]=At[0]+Bt[0];
    St[0]=At[0];
    for(i=1;i<n;i++) {
        St[i]=max(Ct[i-1],At[i]);
        Ct[i]=St[i]+Bt[i];
    }
    for(i=0;i<n;i++) {
        Tt[i]=Ct[i]-At[i];
        Wt[i]=Tt[i]-Bt[i];
        Rt[i]=St[i]-At[i];
    }
    AvgTt=AvgWt=AvgRt=CpuUtil=0;
    for(i=0;i<n;i++) {
        AvgTt+=Tt[i];
        AvgWt+=Wt[i];
        AvgRt+=Rt[i];
        CpuUtil+=Bt[i];
    }
    AvgTt/=n;
    AvgWt/=n;
    AvgRt/=n;
    CpuUtil/=Ct[n-1]/100.0;
    printf("\n---------------------------------------------------------------\n");
    printf("P No\tAT\tBT\tST\tCT\tTT\tRT\tWT\n");
    for(i=0;i<n;i++) {
        printf("%d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",i+1,At[i],Bt[i],St[i],Ct[i],Tt[i],Rt[i],Wt[i]);
    }
    printf("\nAverage TT\t: %f\nAverage WT\t: %f\nAverage RT\t: %f\nCPU Utilization\t: %f\n",AvgTt,AvgWt,AvgRt,CpuUtil);
    return 0;
}