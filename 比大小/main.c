#include <stdio.h>
#include <stdlib.h>
Max(int x,int y)
{
if (x>y)
    return x;
else
    return y;
}
int main()
{
    int a,b,max;
scanf("%d %d",&a,&b);
    max = Max(a,b);
printf("max=%d",max);
return 0;
}
