#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,d,e,f;
    printf("听力对了几题？\n");
    scanf("%f",&a);
    getchar();
    printf("阅读前一部分对了几题？\n");
    scanf("%f",&b);
    printf("阅读后一部分对了几题？\n");
    scanf("%f",&f);
    getchar();
    printf("作文给几分？\n");
    scanf("%f",&c);
    getchar();
    printf("翻译呢？\n");
    scanf("%f",&d);
    getchar();
    a=a*0.04*0.15;
    b=b/20*0.20;
    f=f/10*0.15;
    c=c*0.01*0.35;
    d=d*0.01*0.df15;
    e=a+b+c+d+f;
    printf("%.2f",e);
    return 0;
}
