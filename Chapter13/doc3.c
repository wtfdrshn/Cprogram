/* Prints file contents on printer */
#include "stdio.h"
main( )
{
	FILE  *fp ;
	char  ch ;	

	fp = fopen ( "poem.txt", "r" ) ;

	if ( fp == NULL )
	{
		printf ( "Cannot open file" ) ;
		exit( ) ;
	}

	while ( ( ch = fgetc ( fp ) ) != EOF )
		fputc ( ch, stdprn ) ;
		
	fclose ( fp ) ;
}
