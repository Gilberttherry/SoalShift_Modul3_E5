#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_t tid1;
pthread_t tid2;
FILE* x1;
int main(int arg,char *argv[])
{

	pthread_t tid[argc];

	for(int i=1;i<arg;++i)
	{
		pthread_create(&(tid[i]), NULL, &strstr_kata,(void *)argv[i]);
	}
	for(int i=1;i<arg;++i)
	{
		pthread_join(tid[1], NULL);
	}
	return 0;
}
