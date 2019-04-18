#include"decl.h"


void cfileEntry()
{
	printf("Entry into the cfile.c module\n");
	char input[] = "this is a bunch of input";
	writeFile(input);
}

int writeFile(char *input)
{
	int bytes_written=0, trash = 0;
	time_t ticks ;
	char fileName[50];// = "/Users/cam/DEV/C/out/socket";
	printf("function input = %s\n", input);
	printf("sprintf dbg\n");
	ticks = time(NULL);
	printf("%ld", ticks);
	sprintf(fileName, "/Users/cam/DEV/C/out/socket.%ld", ticks);
	printf("FILE  name %s\n", fileName);
	FILE *wf = fopen(fileName, "w");

	printf("trash1  dbg\n");
	if((trash = fprintf(wf, "This is a test of the file IO writeFile() function\n")) > 0)
		bytes_written = trash;

	trash = 0;
	printf("trash1  dbg\n");
	if((	trash =  fputs("This is a test of the file IO writeFile() function\n", wf))>0)
		bytes_written += trash;

	printf("close dbg\n");
	fclose(wf);

	return bytes_written;;
}
