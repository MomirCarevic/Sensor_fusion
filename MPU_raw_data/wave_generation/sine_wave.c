#define _USE_MATH_DEFINES

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define FREQUENCY_HZ 5.0
#define SAMPLE_RATE_HZ 1000.0
#define DURATION_S 2.0

clock_t start_time, end_time;

int main()
{
    FILE* fptr;

    double time_s, amplitude,time_taken;
    int num_samples;

    start_time = clock();

    num_samples = (int)(DURATION_S*SAMPLE_RATE_HZ);

    fptr = fopen("sine_wave.csv", "w");

    if( fptr == NULL)
    {
        printf("File did not open successfully!\n");
        return 1;
    }
    
    //fprintf ( fptr, "Time [s], Amplitude\n");

    for ( int i = 0 ; i < num_samples ; i++ )
    {
        time_s = (double) i / SAMPLE_RATE_HZ;
        amplitude = sin( 2.0 * M_PI * FREQUENCY_HZ * time_s );
        fprintf(fptr , "%lf,%lf\n", time_s, amplitude);
    }

    if(fclose(fptr) == 0)
        printf("File succesfully closed.\n");
    else
        printf("Error closing file\n");
    printf("Sine signal generation complete\n");
    
    end_time=clock();

    time_taken = ((double)(end_time - start_time)) / CLOCKS_PER_SEC;
    printf("\nExecution time: %lf seconds\n",time_taken);

    return 0;
}
