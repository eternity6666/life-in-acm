#include <stdio.h>
#include <math.h>
int main(){
    const double pi = acos(-1.0);
    double r,h,s1,s2;
    scanf("%lf%lf",&r,&h);
    s1=pi*r*r;
    s2=2*pi*r*h;
    printf("Area = %.3f\n",s1*2.0+s2);
    return 0;}
