
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
FILE *x1;
int main()
{
  	char g[10000];
   	char h[10000];
   	char arr[100];
   	char kata[100];
   	char *z;
    int x,e=0,i,y,selisih,j,k=0,d;
	while(1)
	{
    	printf("File = ");
    	scanf("%s",arr);
    	x1=fopen(arr,"r+");
    	while(!feof(x1))
		fgets(g,10000,x1);
    	printf("Kata = ");
    	scanf("%s",kata);
    	strcpy(h,g);
    	x=strlen(kata);
    	while(strstr(h,kata)!=0)
		{
    		z=strstr(h,kata);
			y=z-h;
    		for(i=y;i<=y+x-1;i++)
			h[i]='*';
			e++;
    	}
    	if(e==0) printf("Tidak Ditemukan\n",kata);
    	else printf("Ditemukan %d Kata\n",e);
    	fclose(x1);
    	system("pause");
    	break;
    }
    return 0;
}

     
