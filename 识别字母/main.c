#include<stdio.h>
int main(){
    char a;
    while((a=getchar()) !=EOF){
            getchar();
        if((a>=65&&a<=90)||(a>=97&&a<=122))
           printf("YES\n");
        else
           printf("NO\n");
}
    return 0;
}
