//fputc example: alphabet writer
#include<stdio.h>

int main(){
	FILE *pFile;
	char c;
	pFile = fopen ("alphabet.txt", "w"); //akses write
	if(pFile != NULL){
		for(c = 'A'; c<='Z'; c++)
		fputc(c, pFile);
		
		fclose(pFile);
	}
	return 0;
}
