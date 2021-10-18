#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a>=100)
        a=a%100;
    else
        a=a;
    if(b>=100)
        b=b%100;
    else
        b=b;
    c=a+b;
    if(c>=100)
        c=c%100;
    else
        c=c;
    printf("%d",c);
    return 0;
}
