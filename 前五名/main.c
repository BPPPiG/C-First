#include<stdio.h>


int main(){
    int n;
    int i;
    int o;
    int temp;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(o=0;o<n-1;o++){
    for(i=0;i<n;i++){
    if(a[i]<a[i+1]){
       temp=a[i];
       a[i]=a[i+1];
       a[i+1]=temp;
       }
    }
}
   for(i=0;i<5;i++){
    printf("%d ",a[i]);
   }
    return 0;
}
