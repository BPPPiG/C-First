#include<stdio.h>
int main()
{
    int n,m,sum=1,o=1,p=0,L=1;
    scanf("%d",&n);
    for(int i=n;i>0;i--){
        m=o;
        for(int j=0;j<i;j++){
        printf("%d ",sum);
        sum+=++m;}
    printf("\n");
    p=o++;
    L+=p;
    sum=L;}
    return 0;
}
