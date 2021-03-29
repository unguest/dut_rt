t = (0:1/40000:2);
x1 = 1 * sin(2*pi*400*t);
x2 = 1 * sin(2*pi*1000*t);
x3 = 1 * sin(2*pi*10000*t);
x=[x1 x2 x3];
sound(x)