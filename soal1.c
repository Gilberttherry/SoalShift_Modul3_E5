#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

char weapon[6] = {"MP4A1", "PM2-V1", "SPR-3", "SS2-V5", "SPG1-V3", "MINE"};
void penjual(int* spek);
void menu_jual();
void menu_beli();
int main()
{
	key_t key=1234;
	int *value;	
	int shmid=shmget(key,sizeof(int), IPC_CREAT | 0666);
	value=shmat(shmid,NULL,0);

}
void penjual(int* spek)
{
	int pilih_jual;
	spek[6]={'0','0','0','0','0','0'};
	char nama[100];
	int jumlah;
	while(1)
	{
		menu_jual();
		scanf("%d",&pilih_jual);
		if(pilih_jual==1)
		{
			printf("Nama_senjata jumlah\n");
			scanf("%s %d",&nama,&jumlah);
			if(strcmp(nama,"MP4A1")==0)
			{
				spek[0]+=jumlah;
			}
			if(strcmp(nama,"PM2-V1")==0)
			{
				spek[1]+=jumlah;
			}
			if(strcmp(nama,"SPR-3")==0)
			{
				spek[2]+=jumlah;
			}
			if(strcmp(nama,"SS2-V5")==0)
			{
				spek[3]+=jumlah;
			}
			if(strcmp(nama,"SPG1-V3")==0)
			{
				spek[4]+=jumlah;
			}
			if(strcmp(nama,"MINE")==0)
			{
				spek[5]+=jumlah;
			}
		}
		else if(pilih_jual==2)
		{
			for(int i=0;i<6;i++)
				printf("%s %d\n",weapon[i],spek[i]);
		}
		else
			printf("Invalid input try agian bro\n");
		
	}
}
void menu_jual()
{
	printf("1.Tambah Stock Persenjataan\n");
	printf("2.List Persenjataan\n");
	printf("Pilih menunya => \n\n");
}
void menu_beli()
{
	printf("1.List Persenjataan\n");
	printf("2.Beli Senjata\n");
	printf("Pilih menunya => \n\n");
}
