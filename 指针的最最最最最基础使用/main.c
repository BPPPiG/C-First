#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a='Q';
    char* p=&a;
    printf("a=%c\n",a);
    printf("&a=%p\n",p);
    *p='q';
    printf("a=%c\n",a);
    return 0;
}
