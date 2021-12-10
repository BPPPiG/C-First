#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char *MyStrCpy(char *dstStr, char *srcStr){
    int i=0;
    while(*(dstStr+i)!='\0'){
        *(srcStr+i)=*(dstStr+i);
        i++;
    }
    *(srcStr+i)='\0';
    return dstStr;
};//·û´®¿½±´º¯Êý

int MyStrLen(char *pStr){
    int i=0;
    char *x=pStr;
    while(*x!='\0'){
        x++;
        i++;
    }
    return i;
};//×Ö·û´®³¤¶Èº¯Êý

int MyStrCmp(char *dstStr, char *srcStr){
    unsigned char *str1=(unsigned char *)dstStr;
    unsigned char *str2=(unsigned char *)srcStr;
    while(*str1!='\0'&&*str2!='\0'){
    if(*str1==*str2){
    str1++;
    str2++;
    }
    else if(*str1>*str2) return 1;
    else return -1;
    }
    if (MyStrLen(dstStr)>MyStrLen(srcStr))
    return 1;
    else  if (MyStrLen(dstStr)>MyStrLen(srcStr))
    return -1;
    else return 0;
    };//×Ö·û´®±È½Ïº¯Êý

char *MyStrCat(char *dstStr, char *srcStr){
    char *p=dstStr;
    for(;*p!='\0';p++);
    for(int i=0;*(srcStr+i)!='\0';i++){
        *p=*(srcStr+i);
        p++;
    }
    *p='\0';
    return dstStr;
};//×Ö·û´®Á¬½Óº¯Êý

int main(){
    return 0;
}
