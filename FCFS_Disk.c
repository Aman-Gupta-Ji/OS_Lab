#include<stdio.h>
#include<stdlib.h>

int main(void) {
    int n;
    printf("Enter no. of requests : ");
    scanf("%d",&n);
    printf("\nEnter request sector no one by one : \n");
    int req[n];
    int i, j;
    for(i=0;i<n;i++) {
        scanf("%d",&req[i]);
    }
    printf("\nEnter Surface size and Track Size : ");
    int ss, ts;
    scanf("%d%d",&ss,&ts);
    printf("\nEnter initial track no: ");
    int srt;
    scanf("%d",&srt);
    int tr;
    int headm=0;
    printf("\nRequest fullfil order in FCFS : \n");
    for(i=0;i<n;i++) {
        tr=(req[i]%ss)/ts;
        headm+=abs(srt-tr);
        printf("%d\n",req[i]);
        srt=tr;
    }
    printf("\nNo. of head movements : %d\n",headm);
    return 0;
}