#include <stdio.h>
int a,b;
char x;
void dm(){
        switch(x){
            case 'A':
                a++;
                break;
            case 'B':
                b++;
                break;
            case '0':
                break;
}
}
int main(){
    while((x=getchar())!=EOF){
    dm();
    if (x=='0')
        break;
    }
    if (a>b)
        printf("A");
    else if(a<b)
        printf("B");
    else if(a==b)
        printf("E");
    return 0;
}
