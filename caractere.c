#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int f(int x, int b){

int a0 = 186.752, a1 = -148.235, a2 = 34.5049, a3 = -3.5091, a4 = 0.183166;
int a5 = -0.00513554, a6 = 0.0000735464, a7 = -4.22038*pow(10,-7);

return a0 + (a1 + b)*x + pow(a2*x,2) + pow(a3*x,3) + pow(a4*x,4) + pow(a5*x,5) + pow(a6*x,6) + pow(a7*x,7);
}