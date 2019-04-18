#include"decl.h"

void cflowEntry()
{
	printf("Entry into the cflow.c module\n");
}

void flowMenu()
{
	printf("1 - IF() flow\n");
	printf("2 - SWITCH() flow\n");
	printf("3 - FOR() flow\n");
	printf("4 - WHILE() flow\n");
	printf("5 - DOWHILE() flow\n");
}

void IF(int y)
{
	if(y)
	{
		printf("TRUE\n");
	} else
	{
		printf("FALSE\n");
	}
}


/*  testing of conditionals in cflows.c 
 *		SWITCH(int nbr);
 *		FOR(int counter);
 *		WHILE(int incr);
 *		DOWHILE(int incr);
 */ 
void SWITCH(int nbr)
{
	switch(nbr)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		default:
			break;
	}
}

void FOR(int counter)
{
} 

void WHILE(int incr)
{
}

void DOWHILE(int incr)
{
}
