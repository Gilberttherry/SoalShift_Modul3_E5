#include<stdio.h>
#include<string.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdlib.h>

int angka[100];
int x;

void* playAndCount(void *arg)       
{
	x=0;
	int *bil = arg;
	int hasil=1;
	if(angka[*bil]!=0)
	{
		for(int i=2;i<=angka[*bil];i++)
		{
			hasil*=i;
		}
	}
	else if(angka[*bil]==1)
	{
		hasil=1;
	}
	else
	{
		
	x=1;
	printf("Hasil %d! = %d\n",angka[*bil],hasil);
}

int main(void)
{
        int k=0;
	int i=0;
	int err;
	int temp1,temp2;
	char temp;
	if(temp!='\n')
	do
	{ 
	scanf("%d%c", &angka[k],&temp);
	k++;
	if(k!=1)
		{
		int n=1;
		temp1=angka[k-n];
		temp2=angka[k-n-1];
		while(temp1<temp2)
			{
				angka[k-n]=temp2;
				angka[k-n-1]=temp1;
				n++;
				temp1=angka[k-n];
				temp2=angka[k-n-1];
			}	
		}
	} while(temp!='\n');
	pthread_t tid[k];
	while(i<k)
    	{
		x=0;
        	err=pthread_create(&(tid[i]),NULL,playAndCount,(void*)&i);
		while(x!=1){}
		i++;	

    	}
    	for(int a=0;a<k;a++){
    	pthread_join(tid[a],NULL);}
    	return 0;	
}
