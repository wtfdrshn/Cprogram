/* Multiple line in macros */
/* Program to draw horizontal & vertical line */
#define HLINE   for ( i = 0 ; i < 79 ; i++ ) \  
                      	      printf ( "%c", 196 ) ;

#define VLINE( X, Y )  {\gotoxy ( X, Y ) ; \
		     printf ( "%c", 179 ) ; \
		   }
main( )
{
	int  i, y ;
	clrscr( ) ;

	gotoxy ( 1, 12 ) ;
	HLINE

	for ( y = 1 ; y < 25 ; y++ )
		VLINE ( 39, y ) ;
}
