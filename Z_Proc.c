#include <stdio.h>
#include <stdlib.h>
int main()
{
	pid_t id=fork();
	if(id>0) {
		//parent
		printf("i am parent ,id:[%d]\n",getpid());
		sleep(30);
	}
	else{
		//child
		printf("i am child ,id:[%d]\n",getpid());
		sleep(3);
		exit(0);
	}
	return 0;
}
