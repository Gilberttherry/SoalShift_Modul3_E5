#include <stdio.h>
#include <string.h>
#include <pthread.h>
#include <stdlib.h>
#include <unistd.h>

int field1[16];
int field2[16];
void *p1(void *arg);
int main()
{
	char player1[100], player2[100];
	printf("Masukan Nama Player1 => ");
	scanf("%s",&player1);
	printf("Masukan Nama Player2 => ");
	scanf("%s",&player2);
}
void *p1(void *arg)
{
	int ranjau;	
	int banyak;
	printf("Berapa banyak ranjau yang akan dipasang => ");
	scanf("%d",&banyak);
	for(int i=0;i<banyak;i++)
	{
		printf("Letakan ranjau di => ");
		scanf("%d",&ranjau);
		field1[ranjau]=1;
	}
}
