#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){


    char a[]="llo";
    char b[]= "world";
    int length=strlen(a)>strlen(b)?strlen(b):strlen(a);
    printf("%d",length);
 // for(int i=0;i<strlen())
    return 0;
}