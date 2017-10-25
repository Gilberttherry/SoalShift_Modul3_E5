#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

char weapon[6][10] = {"MP4A1", "PM2-V1", "SPR-3", "SS2-V5", "SPG1-V3", "MINE"};
void penjual(int* spek);
void pembeli(int* spek);
void menu_jual();
void menu_beli();
int main()
{
	key_t key=1234;
	int *value;	
	int shmid=shmget(key,sizeof(int), IPC_CREAT | 0666);
	value=shmat(shmid,NULL,0);

}
void pembeli(int* spek)
{
	int pilih_beli;
	char nama[100];
	int jumlah_beli;
	while(1)
	{
		menu_beli();
		scanf("%d",&pilih_beli);
		if(pilih_beli==1)
		{
			for(int i=0;i<6;i++)
				printf("%s %d\n",weapon[i],spek[i]);
		}
		else if(pilih_beli==2)
		{
			printf("Nama_senjata jumlah\n");
			scanf("%s %d",&nama,&jumlah_beli);
			if(strcmp(nama,"MP4A1")==0)
			{
				if(spek[0]>=jumlah_beli)
					spek[0]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
			else if(strcmp(nama,"PM2-V1")==0)
			{
				if(spek[1]>=jumlah_beli)
					spek[1]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
			else if(strcmp(nama,"SPR-3")==0)
			{
				if(spek[2]>=jumlah_beli)
					spek[2]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
			else if(strcmp(nama,"SS2-V5")==0)
			{
				if(spek[3]>=jumlah_beli)
					spek[3]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
			else if(strcmp(nama,"SPG1-V3")==0)
			{
				if(spek[4]>=jumlah_beli)
					spek[4]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
			else if(strcmp(nama,"MINE")==0)
			{
				if(spek[5]>=jumlah_beli)
					spek[5]-=jumlah_beli;
				else
					printf("Maaf jumlah stok barang tidak mencukupi\n");
			}
		}
		else
			printf("Invalid input try again bro\n");
	}
}
void penjual(int* spek)
{
	int pilih_jual;
	for(int i=0;i<6;i++)
		spek[i]=0;
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
			else if(strcmp(nama,"PM2-V1")==0)
			{
				spek[1]+=jumlah;
			}
			else if(strcmp(nama,"SPR-3")==0)
			{
				spek[2]+=jumlah;
			}
			else if(strcmp(nama,"SS2-V5")==0)
			{
				spek[3]+=jumlah;
			}
			else if(strcmp(nama,"SPG1-V3")==0)
			{
				spek[4]+=jumlah;
			}
			else if(strcmp(nama,"MINE")==0)
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
