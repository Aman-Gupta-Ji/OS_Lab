#include<stdio.h>
#include<unistd.h>
int main() {
	fork();
	fork();
	fork();
	printf("hi %u\n",getpid());
	printf("Hello %u\n",getpid());
	printf("Hello this is the process id : %u\n",getpid());
	printf("Bye %u\n",getpid());
	return 0;
}
