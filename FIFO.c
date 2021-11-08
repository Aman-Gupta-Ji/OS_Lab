#include<stdio.h>

typedef struct frame
{
    int page, time;
}frame;

typedef struct PT
{
    int frame, valid;
}PT;


int main(void) {
    int nf,n,i,np,j;
    scanf("%d",&n);
    scanf("%d",&nf);
    frame f[nf];
    scanf("%d",&np);
    PT pt[np];

    for(i=0;i<np;i++) {
        pt[i].valid=0;
    }
    
    int pf=0;
    int temp, min, count=0;
    for(i=0;i<n;i++) {
        scanf("%d",&temp);
        if(temp<0||temp>np) {
            printf("Segmentation fault ... :(\n");
            return 1;
        }
        if(pt[temp].valid)
            continue;
        pf++;
        pt[temp].valid=1;
        if(count<nf) {
            pt[temp].frame=count;
            f[count].page=temp;
            f[count].time=i;
            count++;
            continue;
        }
        min=0;
        for(j=1;j<nf;j++) {
            if(f[min].time>f[j].time) {
                min=j;
            }
        }
        pt[f[min].page].valid=0;
        pt[temp].frame=min;
        f[min].page=temp;
        f[min].time=i;
    }
    double miss=(double)pf/n, hit=1.0-miss;
    printf("\nNo. of page fault : %d\nHit ratio : %.3lf\nMiss raion : %.3lf\n",pf,hit,miss);

}