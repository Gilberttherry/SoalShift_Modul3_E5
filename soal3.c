#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

int lohan =100;
int kepiting = 100;

pthread_t kuy[6];

void* hewanku(void *agr)
{
	int i;
	pthread_t id=pthread_self();
	if(pthread_equal(id,kuy[0]))
	{
		sleep(10);
		lohan-=15;
		if(lohan>100 || kepiting >100 || lohan <=0 ||kepiting >100)
		{
			printf("Maaf Game Selesai\n");
			break;
		}
		else
		{
			printf("Status Lohan -> %d\n",lohan);
			printf("Status Kepiting -> %d\n",kepiting);
		}
	}
	else if(pthread_equal(id,kuy[1]))
	{
		sleep(20);
		kepiting-=10;
		if(lohan>100 || kepiting >100 || lohan <=0 ||kepiting >100)
		{
			printf("Maaf Game Selesai\n");
			break;
		}
		else
		{
			printf("Status Lohan -> %d\n",lohan);
			printf("Status Kepiting -> %d\n",kepiting);
		}
	}
void menu();
int main()
{

	int err;	
	int pilih_menu;
	while(1)
	{
		err=pthread_create(&(kuy[0]),NULL,&hewanku,NULL);		
		menu();
		scanf("%d",&pilih_menu);
		if(pilih_menu==1)
		{
		}
	}
}

