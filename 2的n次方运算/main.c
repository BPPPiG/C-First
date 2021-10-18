#include<stdio.h>
int main(){
    int x=0,y=0;
    while((scanf("%d",&x)) !=EOF){
        y=1<<x;
    printf("%d\n",y);
    }
    return 0;
}
