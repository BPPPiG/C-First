#include<stdio.h>
int main(){
    int n,h,m,x;
    scanf("%d %d %d",&n,&h,&m);
    x=m/h;
    if(m==x*h){
        printf("%d\n",n-x);
    }
    else{
        x++;
        printf("%d",n-x);
    }
        return 0;
}
