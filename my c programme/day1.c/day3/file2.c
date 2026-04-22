#include<stdio.h>
int main(){
    int i =10;
    int *p=&i;
    i=900;
    
    *p=20;
    printf("%d",*p);
    return 0;
}