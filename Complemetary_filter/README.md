# Complementary filter

Most IMU's don't return their orientation directly in euler angles. Accelerometers are fast and dont drift, but can be very noisy. On the other hand gyroscopes has very few of these problems. However, minuscule noise in the signal will eventually multiply to skew the calculated rotation angel. //
Thus, it makes sense to choose a filter that combines the two sensors. By inputing a bit of the calculated accelerometer data into the gyro output, we can compesate the gyroscope's drift.
