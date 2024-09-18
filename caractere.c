#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f(int x, int b){

int a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166;
int a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038*pow(10,-7);

return a0 + (a1 + b)*x + a2* pow(x,2) + a3* pow(x,3) + a4* pow(x,4) + a5* pow(x,5) + a6* pow(x,6) + a7* pow(x,7);
}