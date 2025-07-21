import numpy as np
import matplotlib.pyplot as plt

# read generated wave, ignore header and delimeters, data type is float
data = np.loadtxt('sine_wave_noisy.csv', delimiter=',', dtype = float)

time = data[:,0]
amplitude = data[:,1]


plt.plot(time,amplitude)
plt.title('Sine Wave')
plt.xlabel('Time [s]')
plt.ylabel('Amplitude')
plt.grid(True)

plt.show()
