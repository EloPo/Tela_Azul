#include <stdio.h>
#include <stdlib.h>
#include <conio.c>
int main (){
	
	int x,corfundo,linha,coluna;

	
	for (x=0; x<1000; x++){
		linha = (rand()%25)+1;
		coluna = (rand()%80)+1;
		corfundo = BLUE;
	
	gotoxy (coluna,linha);
	
	textbackground(corfundo);
	
	printf (" ");
	printf ("Problemas no WINDOWS ");
	Sleep(100);
}
    
	
	return 0;
}
