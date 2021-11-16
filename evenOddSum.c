#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main() {
	int i;
    int arr[10]= {10,14,2,5,1,3,7,19,18};
    pid_t pid=fork();
    int evenSum, oddSum;
    if(pid==0) {
        //child
        oddSum=0;
        for(i=0;i<10;i++) {
            if(i%2==1)
                oddSum+=arr[i];
        }
        printf("Odd elements sum by child process: %d\n",oddSum);
    }
    if(pid>0) {
        //parent
        evenSum=0;
        for(i=0;i<10;i++) {
            if(i%2==0)
                evenSum+=arr[i];
        }
        printf("Odd elements sum by child process: %d\n",evenSum);
    }
	return 0;
}
