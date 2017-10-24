#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>
int* playAndCount(void *arg)       
{

}

int main(void)
{
        int k=0;
	int i=0;
	int err;
	char temp;
    	int angka[100];
	if(temp!='\n')
	do
	{ 
	scanf("%d%c", &angka[k],&temp);
	k++;
	} while(temp!='\n');
	k-=1;
	while(i<k)
    	{
		int temp1=angka[i];
        	err=pthread_create(&(tid[i]),NULL,&playandcount,NULL);
		printf("Hasil %d!= %d",i,err);
        	i++;	

    	}
    	pthread_join(tid[0],NULL);
    	pthread_join(tid[1],NULL);
    	return 0;	
}
