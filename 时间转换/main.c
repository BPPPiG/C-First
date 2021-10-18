#include<stdio.h>

int main()
{
    int h,m,s;
    long int x;
    scanf("%ld",&x);
    h=x/3600;
    m=x%3600/60;
    s=x%3600%60;
    printf("%d %d %d",h,m,s);
return 0;
}
