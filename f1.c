#include <stdio.h>

void printMessage (int counter) ;

int main ( void )
{
	int num;
	printf ("Enter an integer: ") ;
	scanf ("%d", &num) ;
	printMessage (num) ;
    getchar(); 
    getchar(); 
	return 0 ;
}
						
void printMessage (int counter)
{
	int i ;
	for ( i = 0; i < counter; i+=2 )
	{
	     printf ("Have a nice day!\n") ;
	}
}