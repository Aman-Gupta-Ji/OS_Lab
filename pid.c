#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h> //data types pid_t
int main() {
	pid_t pid;
	int a = 20;
	pid=fork();
	if(pid<0) {
		printf("Fork Failed");
		exit(1);
	}
	if(pid==0) { //if ture, chilf process will executed
		printf("Child Process is executingh having return value as = %d\n",pid);
		a=40;
		printf("a %d child\n",a);
	}
	else {// if ture, prarent process will executed
		printf("Parent Process is executing haaving return value as = %d\n",pid);
		printf("a %d parent\n",a);
	}
	return 0;
}
