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
void menu()
{
	printf("1.Status\n");
	printf("2.Feed Lohan\n");
	printf("3.Feed Kepiting\n");
}
