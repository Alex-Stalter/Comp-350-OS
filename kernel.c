#include <stdio.h>

void printString(char*);

void main()
{
	int startVidMem = 0xb800;
	int vidMemOffset = 0x0;
	int white = 0x7;
	char* letters = "Hello World!\0";
	while(*letters !=0x0){
		putInMemory(startVidMem,vidMemOffset,*letters);
		vidMemOffset++;
		putInMemory(startVidMem,vidMemOffset,white);
		vidMemOffset++;
		letters++;
	}
	interrupt(0x10,0xe*256+'Q',0,0,0);
	while(1);

}

void printString(char* chars){



}
