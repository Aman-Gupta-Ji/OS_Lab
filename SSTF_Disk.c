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
    int headm=0;
    int trn[n];
    for(i=0;i<n;i++) {
        trn[i]=(req[i]%ss)/ts;
    }
    int min;
    int count=0;
    printf("\nRequest fullfil order in SSTF : \n");
    while(count!=n) {
        min=-1;
        for(i=0;i<n;i++) {
            if(trn[i]==-1)
                continue;
            if(min==-1||abs(srt-trn[min])>abs(srt-trn[i]))
                min=i;
        }
        if(min==-1)
            return 1;
        count++;
        printf("%d\n",req[min]);
        headm+=abs(srt-trn[min]);
        trn[min]=-1;    // to mark as request done
    }
    printf("\nNo. of head movements : %d\n",headm);
    return 0;
}