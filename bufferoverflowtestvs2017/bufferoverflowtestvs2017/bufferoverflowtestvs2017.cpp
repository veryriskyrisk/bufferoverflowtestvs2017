// bufferoverflowtestvs2017.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int main()
{
	char           A[8] = "";
	strcpy(A, "more than 8 characters");
	return 0;
}

