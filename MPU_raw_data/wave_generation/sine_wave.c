#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    FILE* fptr;

    int amplitude = 10;
    int wavelength = 30;

    fptr = fopen("sine_wave.txt","w");

    for (int i = 0 ; i < amplitude * 2 ; i ++ )
    {
        for ( int j = 0 ; j < wavelength * 2 ; j++ )
        {
            int sine_pos = (int)(amplitude + amplitude*sin(i*0.2));
            fprintf(fptr,"%d\n",sine_pos);
        }
    }

    fclose(fptr);
    return 0;
}