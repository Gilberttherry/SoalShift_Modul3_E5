#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <pthread.h>
#include <string.h>

void menu();
int main()
{
	int pilih_menu;
	while(1)
	{
		menu();
		scanf("%d",&pilih_menu)'
	}
}
void menu()
{
	printf("1.Status Lohan\n");
	printf("2.Status Kepiting\n");
	printf("3.Feed Lohan\n");
	printf("4.Feed Kepiting\n");
}
