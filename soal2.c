#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

int temp;
int field1[17];
int field2[17];
int ranjau,count;
char player1[100];
char player2[100];
int stok1=16,stok2=16;
int nilai1=0,nilai2=0;

void* p1(void *arg)
{
	int ranjau;
	int banyak;
	while(1)
	{
        	printf("pemain 1,Banyak ranjau(max 16) =>  ");
        	scanf("%d",&banyak);
        	for(int i=0;i<banyak;i++)
		{
			printf("Letakan ranjau di => ");
	        	scanf("%d",&ranjau);
            		if(field1[ranjau]==0)stok1--;
            		field1[ranjau]=1;
        	}
        	printf("pemain 1, tebak =>  ");
		scanf("%d",&ranjau);
        	if(ladang2[nomor]==0)
		{
	            	printf("tebakkan %s benar, poin %s ditambah 1\n",name_1,name_1);
	            	++skor1;
	        }
	        else
		{
	        	printf("tebakkan %s salah, poin %s ditambah 1\n",name_1,name_2);
	         	++skor2;
        	}
        	if(skor1==10 || skor2 == 10 || stok1==0 || stok2==0)
		{
			return NULL;
		}
	}
    	return NULL;
}

int main()
{
	printf("Masukan Nama Player1 => ");
	scanf("%s",&player1);
	printf("Masukan Nama Player2 => ");
	scanf("%s",&player2);
}
