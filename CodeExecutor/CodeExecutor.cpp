#include "stdafx.h"
#include <stdio.h>
#include "Executor.h"

#define MAX_VARIABLES 1024

char* variables[MAX_VARIABLES];


int main(int argc, char *argv[])
{
	/*if (argc < 2 || argc > 3)
	{
		printf("This is wrong syntax, correct one is: %s {input file} [log output file]\n", argv[0]);
		return 0x10;
	}*/

	FILE* f = NULL;
	Executor exec;

	/*if (argc == 3)
	{
		f = fopen(argv[2], "w");
		exec.setCalledFuncsLogFile(f);
	}
	exec.run((char*)argv[1]);*/
	exec.run((char*)"code.bin");
	if(f)
		fclose(f);
}

