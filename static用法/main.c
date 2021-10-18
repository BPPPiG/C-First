#include <stdio.h>
#include <stdlib.h>
void test(){
    int a=1;
    printf("%d",a);
    a++;
}
void test2(){
   static int b=1;
    printf("%d",b);
    b++;
}
int main()
{
    int i;
    for(i=0;i<5;i++){
        test();
    }
    printf("\n");
    for(i=0;i<5;i++){
        test2();
    }
    printf("\n");
    for(i=0;i<5;i++){
        test3();
    }
    return 0;
}
