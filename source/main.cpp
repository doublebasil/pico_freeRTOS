#include <stdio.h>

#include "pico/stdlib.h"

int main( void )
{
    // Initialise the debug output
    stdio_init_all();
    // Wait for the stdio to initialise
    for( int i = 0; i < 3; i++ )
    {
        sleep_ms( 500U );
        printf( "Starting\n" );
    }

    printf("Running\n");

    for( ;; ) {}
}
