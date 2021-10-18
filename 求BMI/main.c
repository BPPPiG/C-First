#include<stdio.h>
#include<math.h>
int main()
{
    float hight,weight,BMI;
    scanf("%f %f",&weight,&hight);
    BMI=weight/pow(hight/100,2);
    printf("%.2f",BMI);
    return 0;
}
