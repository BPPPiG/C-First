#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,max;
    scanf("%d %d",&a,&b);
    max=(a>b?a:b);//exp1?exp2:exp3 若exp1为真则输出exp2，为假则输出exp3
    printf("%d",max);
    return 0;
}
