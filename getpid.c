#include<stdio.h>
#include<unistd.h>
int main() {
	printf("PID of the process : %d\n",getpid());
	printf("Parent PID of the process : %d\n",getppid());
	return 0;
}
