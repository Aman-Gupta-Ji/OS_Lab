#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>

int main(void) {
    pid_t p;
    p=fork();
    
    if(p<0) {
        printf("fork failed");
        exit(1);
    }

    /*Child*/
    else if(p==0)
        exit(0);
    
    else if(p<0) {
        sleep(20);
        printf("Parent is not going");
    }

    else // parent 
    {
        sleep(2);
        printf("gone");
    }
    return 0;
}