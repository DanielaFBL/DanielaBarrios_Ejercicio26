
import matplotlib.pyplot as plt

plt.figure()
data_1 = np.loadtxt("euler.dat")
data_2 = np.loadtxt("rk4.dat")
data_3 = np.loadtxt("leapfrog.dat")

t1= data[:,0]
x1= data[:,1]
v1= data[:,2]

t2= data[:,0]
x2= data[:,1]
v2= data[:,2]

t3= data[:,0]
x3= data[:,1]
v3= data[:,2]

plt.figure(figsize=(5,5))
plt.title(Euler)
plt.plot(t1,v1)
plt.xlabel('Tiempo')
plt.ylabel('Posición')
plt.savefig("imagen1.png")


plt.figure(figsize=(5,5))
plt.title(Runge_kutta)
plt.plot(t2,v2)
plt.xlabel('Tiempo')
plt.ylabel('Posición')
plt.savefig("imagen2.png")


plt.figure(figsize=(5,5))
plt.title(Leap_frog)
plt.plot(t3,v3)
plt.xlabel('Tiempo')
plt.ylabel('Posición')
plt.savefig("imagen3.png")