#include "main.h"

int main()
{
    FILE *in;
    in = safe_open("../MPU_raw_data/MPU_data.csv","r",2);
    readCSV(in);
    return 0;

}
