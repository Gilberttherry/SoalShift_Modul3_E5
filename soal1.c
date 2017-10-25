#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/ipc.h>
#include <sys/shm.h>

char weapon[6] = {"MP4A1", "PM2-V1", "SPR-3", "SS2-V5", "SPG1-V3", "MINE"};
void menu_jual();
void menu_beli();
int main()
{
	key_t key=1234;
	int *value;	
	int shmid=shmget(key,sizeof(int), IPC_CREAT | 0666);
	value=shmat(shmid,NULL,0);

}
void menu_jual()
{
	printf("1.Tambah Stock Persenjataan\n");
	printf("2.List Persenjataan\n\n");
}
void menu_beli()
{
	printf("1.List Persenjataan\n");
	printf("2.Beli Senjata\n\n");
}
