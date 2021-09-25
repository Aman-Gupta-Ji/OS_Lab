#include<stdio.h>
#include<unistd.h>
int main() {
	pid_t pid=fork();
	int i;
	if(pid>0)
		wait(NULL);
	for(i=0;i<=100;i++) {
		if(i%2==0&&pid>0)
			printf("Parent process : %d\n",i);
		else if(i%2!=0&&pid==0)
			printf("Child process : %d\n",i);
	}
	return 0;
}
