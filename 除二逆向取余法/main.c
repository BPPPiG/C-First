#include <stdio.h>
#include <stdlib.h>
int i;
int x=0;
int main()
{
    scanf("%d",&i);
    while(i>=2)
    {
        x=i%2;
        i=i/2;
        printf("%d\n",x);
    }
    if(i<2)
        printf("%d\n",i);
return 0;
}
