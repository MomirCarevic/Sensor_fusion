#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>


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

int readCSV(FILE *file)
{
    
    char line[5];
    int ctr = 0;

    while (fgets(line,sizeof(line),file) && ctr < 10)    //  Read each line
    {
         char *token = strtok(line,",");

         while(token != NULL)
         {
             printf("%s\n",token);
             token = strtok(NULL,",");
         }
         printf("\n");
         ctr++;
    }
    fclose(file);
}
