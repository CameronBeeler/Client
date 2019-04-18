#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <string.h>
#include <ctype.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <errno.h>
#include <arpa/inet.h>
#include <time.h>


/*
 *  an include file with all function declarations and constants to be shared with all code modules
 */
void menu();
void selection(char **buffer);
void execution(int selection);
void IF(int y);
void SWITCH(int nbr);
void FOR(int counter);
void WHILE(int incr);
void DOWHILE(int incr);
void screenPrint();
void cdlinkEntry();
void cenumEntry();
void cfileEntry();
void cflowEntry();
void cforkEntry();
void cfuncEntry();
void cmemEntry();
void cpointEntry();
void csockEntry();
void cstructEntry();
void cthreadEntry();
void cvarsEntry();
	void enumTest();
	void sizeofVarsTest();
void testParamPassing(int *value);
void clear();
void presskeytocontinue();
void myflush(FILE *in);
int initClientRequest();
void func(int sockfd);
int writeFile(char *ptr);

/********************    STRUCTS, ENUMS ************************/

typedef struct
{
	int x;
	int y;
}point;

typedef struct 
{
	int ctr;
	point *p;
	char name[20];
}testStruct;

enum count {ZERO, ONE, TWO, THREE, FOUR};

/********************    GLOBAL VARIABLES************************/

extern void (*cfunc_ptr[])();
#define MAX 80 
#define PORT 8080 
#define SA struct sockaddr 

