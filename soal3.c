#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

int lohan =100;
int kepiting = 100;

pthread_t kuy[5];

void* hewanku(void *agr)
{
	int i;
	pthread_t id=pthread_self();
	if(pthread_equal(id,kuy[0]))
	{
		while(1)
		{
			sleep(10);
			lohan-=15;
		}
	}
	else if(pthread_equal(id,kuy[1]))
	{
		while(1)
		{
			sleep(20);
			kepiting-=10;
		}
	}
	else if(pthread_equal(id,kuy[2]))
	{
		printf("Kondisi Lohan : %d\n",lohan);
		printf("Kondisi Kepiting : %d\n\n",kepiting);
	}
	else if(pthread_equal(id,kuy[3]))
	{
		lohan+=10;
		if (lohan<=0 || lohan>100)
		{
			printf("Game Over\n");
			exit(EXIT_FAILURE);
		}
	}
	else if(pthread_equal(id,kuy[4]))
	{
		kepiting+=10;
		if (kepiting <=0 || kepiting >100)
		{
			printf("Game Over\n");
			exit(EXIT_FAILURE);
		}	
	}
}
void menu();
int main()
{

	int err,err1,err2;	
	int pilih_menu;
	err=pthread_create(&(kuy[0]),NULL,&hewanku,NULL);
	err1=pthread_create(&(kuy[1]),NULL,&hewanku,NULL);
	while(1)
	{		
		if (lohan<=0 || lohan>100 || kepiting <=0 || kepiting >100)
		{
			printf("Game Over\n");
			break;
		}		
		else
		{
			menu();
			scanf("%d",&pilih_menu);
			if(pilih_menu==1)
			{
				err2=pthread_create(&(kuy[2]),NULL,&hewanku,NULL);
			}
			else if(pilih_menu==2)
			{
				err2=pthread_create(&(kuy[3]),NULL,&hewanku,NULL);
	
			}
			else if(pilih_menu==3)
			{
				err2=pthread_create(&(kuy[4]),NULL,&hewanku,NULL);
			}
		}

	}
}
void menu()
{
	printf("1.Status\n");
	printf("2.Feed Lohan\n");
	printf("3.Feed Kepiting\n\n");
}
