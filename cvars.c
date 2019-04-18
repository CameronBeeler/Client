/*
 * Second code file to exerices multi code file usages
 */

#include"decl.h"

void cvarsEntry()
{
	printf("Entry into the cvars.c module\n");
	sizeofVarsTest();
//	enumTest();
}



void enumTest()
{
    enum count TRY = 3;

	switch(TRY)
	{
		case 0:
			printf("The Enum was #%d\n", TRY);
			break;
		case 1:
			printf("The Enum was #%d\n", TRY);
			break;
		case 2:
			printf("The Enum was #%d\n", TRY);
			break;
		case 3:
			printf("The Enum was #%d\n", TRY);
			break;
		default:
			printf("No enum value selected\n");
			break;
	}
    printf("the size of an enum is %d\n", (int) sizeof(TRY)); 
size_t var = sizeof(TRY);
	printf("\nsize of sizeof - %d\n", (int) var);
}

void sizeofVarsTest()
{
	char x[20];
	short memshort = 10;
	int memint=25;
	int *ptrint=&memint;
	long longval = 9223372036854775807;
	long long reallyLongVal = 99;
	float memflt=25.1;
	double memdbl=25.01;
    printf("the size of a char variable is %d\n",(int) sizeof(char)); 
    printf("the size of a x[20] variable is %d\n",(int) sizeof(x)); 
    printf("the size of a memory address of a char variable is %d\n",(int) sizeof(&x)); 
    printf("the size of a short var is %d\n",(int) sizeof(short)); 
    printf("the size of a short var address is %d\n",(int) sizeof(&memshort)); 
    printf("the size of an int var is %d\n",(int) sizeof(int)); 
    printf("the size of an int memory address is %d\n",(int) sizeof(&memint)); 
    printf("the size of an long var is %d\n",(int) sizeof(long)); 
    printf("the value of an long var is %ld\n",longval); 
    printf("the size of an long memory address is %d\n",(int) sizeof(&longval)); 
    printf("the size of a long long var is %d\n",(int) sizeof(long long)); 
    printf("the size of a long long memory address is %d\n",(int) sizeof(&reallyLongVal)); 
    printf("the size of a float var is %d\n",(int) sizeof(float)); 
    printf("the size of a float value is %d\n",(int) memflt); 
    printf("the size of a float memory address is %d\n",(int) sizeof(&memflt)); 
    printf("the size of a double value is %d\n", (int) memdbl); 
    printf("the size of a double var is %d\n", (int) sizeof(double)); 
    printf("the size of a long double var is %d\n", (int) sizeof(long double)); 
    printf("the size of a double memory address is %d\n", (int) sizeof(&memdbl)); 

	int *ptr = malloc(10*sizeof(int)); 
	printf("the size of the memory space with 10 integers is %d\n", (int) sizeof(ptr));

	point p;
	p.x = 1;
	p.y = 2;
	testStruct ts1;
	ts1.p=&p;
	printf("the size of the testStruct structure is %d\n", (int) sizeof(ts1));

	printf("the original value of memint is %d\n", memint);
	testParamPassing(&memint);
	printf("if I send the memaddr of memint to the f() i get %d\n", memint);
	printf("the value of ptrint = %ld\n",(long)  ptrint);
	printf("the value of *ptrint = %d\n", (int) *ptrint);
}

/* x is a value */
/* value is a memory address of int memint */
/* *value is the value dereference of the memory address */
/* 2 * (*value); is the equation */

void testParamPassing(int *value)
{
	int x = 2;
	*value = x * (*value);
}
