#include "main.h"

int main()
{
    FILE *in;
    in = safe_open("../MPU_raw_data/MPU_data.csv","r",2);
    float *acc_x = readCSV(in,6);
    printf("i\t\tAxx\n");
    for( int i = 0 ; i < 200 ; i++){
        
        printf("[%d]\t-\t%lf\n",i,acc_x[i]);
    }

    return 0;

}
