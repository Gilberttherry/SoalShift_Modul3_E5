#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

pthread_t tid1;
pthread_t tid2;
FILE* X1;

void* strstr_kata(void *arg)
{
	char kata1[10];
	int temp=0;
	char kata2[256];
	X1 =fopen("Novel.txt","r");
	strcpy(kata1,arg);
	while(fscanf(X1,"%s",kata2)!=EOF)
	{
	        if(strstr(kata2,kata1)!=NULL)
		{
	            temp++;
        	}
    	}
	fclose(X1);
	printf("%s : %d\n",kata1,temp);
}

int main(int temp1,char *argv[])
{

	pthread_t tid[temp1];

	for(int i=1;i<temp1;++i)
	{
		pthread_create(&(tid[i]), NULL, &strstr_kata,(void *)argv[i]);
	}
	for(int i=1;i<temp1;++i)
	{
		pthread_join(tid[1], NULL);
	}
	return 0;
}
