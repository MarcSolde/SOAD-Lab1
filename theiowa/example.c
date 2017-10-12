/****
 * file example.c
 *
   Program to demonstrate the thread management package *
   Written by Douglas Jones, Feb 18, 1998               *
                                                     ****/

#include <stdio.h>
#include "eziowa.h"

void test_thread( int n )
{
	printf( "A%d\n", n );
	iowaLaunchAndRelinquish(4000, test_thread, n);
	printf( "B%d\n", n );
	iowaRelinquish();
	printf( "C%d\n", n );
	iowaRelinquish();
}

int main()
{
	iowaSetup(4000, test_thread, 5);
	/* control never reaches this point */
}

