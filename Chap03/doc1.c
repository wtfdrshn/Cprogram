/* Calculation of simple interest for 3 sets of p, n and r */
main( )
{
	int   p, n, count ;
	float   r, si ;

	count = 1 ;
	while ( count <= 3 )
	{
		printf ( "\nEnter values of p, n and r " ) ;
		scanf ( "%d %d %f", &p, &n, &r ) ;
		si = p * n * r / 100 ;
		printf ( "Simple interest = Rs. %f", si ) ;
		
		count = count + 1 ;
	}
}
