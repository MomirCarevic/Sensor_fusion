#ifndef IMU_MODULE_H
#define IMU_MODULE_H

#define MPU6050_ADDR 0x68

void IMUinit();
void writeIMU(int reg, int data);
int readIMU(int reg);
short readRAWdata(int reg);

namespace IMUmodule {
    void initialize();
    float sensor_reading();
}

#endif
