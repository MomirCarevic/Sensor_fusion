#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#define MEASUREMENT_SIZE 2000


FILE *safe_open(char *name, char *mode, int n)
{
    FILE *file = fopen(name,mode);

    if(file == NULL)
    {
       perror("Error loading the file!");
       exit(n);
    }

    return file;
}

float *readCSV(FILE *file,int n)
{
    float value;
    int index = n, i = 0;

    float *arr = (float *)malloc(MEASUREMENT_SIZE * sizeof(float));
    if (arr == NULL)
    {
        perror("Memory allocation has failed!");
        fclose(file);
        return 0; 
    }

    while (fscanf(file, "%f,", &value) != EOF)
    {
        if (index % 7 == 0)
        {
            arr[i] = value;  
            i++;  
        }
        index++; 
    }

    fclose(file);
    return arr; 
}