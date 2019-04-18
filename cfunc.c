#include"decl.h"


void cfuncEntry()
{
	printf("Entry into the cfunc.c module\n");
}

void presskeytocontinue()
{

	printf("Press any key to continue\n");
	myflush ( stdin );
//	fflush(stdin);
	getchar();
	clear();
}
 
void myflush ( FILE *in )
{
  int ch;

  do
    ch = fgetc ( in );
  while ( ch != EOF && ch != '\n' );

  clearerr ( in );
}

void clear()
{
	char command[50];
	strcpy(command, "clear");
	system(command);
}


void selection(char **buffer)
{
/*
 *	the buffer value is the memory address of the char* str.  &str.  you want to put the memory 
 *	address in *buffer. so that the string can be passed back.
 */
	char s[100];

	*buffer = (char*) malloc(4);
	strcpy(*buffer, "    ");

	printf("Please enter a number or a character\n");
	scanf("%s", s );
	if(isdigit(s[0]))
	{
		memcpy(*buffer,s, 3);
	} else
	{
		s[0] = 'Q';
		memcpy(*buffer, s, 3);
	}
		
}

void menu()
{
/*
/ always begin with a clear screen (system("clear"); and then present the 
/ list of methods you can call, by proper name in an enum.
/ use a case statement to set the enum.
/ create a func_ptr array, and input the enum value into the array to
/ trigger the selection & run that function.} 
*/
	printf("0 - Functions\n");
	printf("1 - Memory\n");
	printf("2 - dLink\n");
	printf("3 - Enums\n");
	printf("4 - File\n");
	printf("5 - Flow\n");
	printf("6 - Fork\n");
	printf("7 - Pointers\n");
	printf("8 - Sockets\n");
	printf("9 - Structures\n");
	printf("10 - Threads\n");
	printf("11 - Variables\n");

	/*
	 * given a little more time, I could pass the array forward and cycle through
	 * the elements until a \0 is found, and then use that to advertise the available 
	 * functions.
	 */
}


void execution(int selection)
{
	if(selection<=11)
	{
		cfunc_ptr[selection]();
	} else
	{
		printf("The selection was outside of the array index\n");
		presskeytocontinue();
	}
}

