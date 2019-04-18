/*
* this is a c program by Cam Beeler 04-12-19
* The purpose of this program is to be a review training ground
* it will grow to be a client/server with a paired client/program (maybe a fork of itself even) 
* There will be a function to follow the topic in Evernote and all the functions within will be in that topic
*/

#include "decl.h"
void (*cfunc_ptr[])()= {&cfuncEntry, &cmemEntry, &cdlinkEntry, &cenumEntry, &cfileEntry, &cflowEntry, &cforkEntry, &cpointEntry, &csockEntry, &cstructEntry, &cthreadEntry, &cvarsEntry, NULL};

typedef void (*fptr)(int i);

int main()
{
	char trash[] = "start";
	char *str=trash;

	presskeytocontinue();
	do{
		menu();
		selection(&str);
		if(str[0]!='Q')
		{
			execution(atoi((str)));
			presskeytocontinue();
		}
	}while(isdigit(*str));
}
