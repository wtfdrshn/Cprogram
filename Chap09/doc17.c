/* Program to use array of pointers */
/* Use of malloc */
#include "alloc.h"
main( )
{
	char  *names[6] ;
	char n[50] ;
	int  len, i ;
	char *p ;

	for ( i = 0 ; i <= 5 ; i++ )
	{
		printf ( "\nEnter name " ) ;
		scanf ( "%s", n ) ;
		len = strlen ( n ) ;
		p = malloc ( len + 1 ) ;
		strcpy ( p, n ) ;
		names[i] = p ;
	}

	for ( i = 0 ; i <= 5 ; i++ )
		printf ( "\n%s", names[i] ) ;
}
