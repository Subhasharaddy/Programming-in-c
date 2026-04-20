#include<stdio.h>
#include<string.h>
void main(){
    char s1[40];
    printf("enter string: ");
    gets(s1);
    strlwr(s1);
    printf("string is :%s",s1);
}