#include<stdio.h>
int main(){
        char a=0;
    while((a=getchar())!=EOF){
        getchar();
    if(a>='a'&&a<='z'){
        a-=32;
        printf("%c\n%d\n",a,a);
        }
    else
        printf("你输的是小写字母嘛?\n");
}
    return 0;
}

