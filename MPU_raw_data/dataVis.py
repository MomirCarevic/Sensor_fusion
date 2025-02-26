import seaborn as sea
import matplotlib.pyplot as plt
import pandas as pd

mpu = pd.read_csv("MPU_data.csv")

sea.lineplot(x = 't' , y = 'Ax' , data = mpu )

plt.title('')
plt.xlabel('Time [s]')
plt.xlim(7.5,20)
plt.legend()

plt.show()
