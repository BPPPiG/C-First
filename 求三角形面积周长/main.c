#include<stdio.h>
#include<math.h>
int main ()
{
    double x,y,z,circumference,area,p;
    scanf("%lf %lf %lf",&x,&y,&z);
    circumference=x+y+z;
    p=circumference/2;
    area=sqrt(p*(p-x)*(p-y)*(p-z));
    printf("circumference=%.2lf area=%.2lf",circumference,area);
    return 0;
}

