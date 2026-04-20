#include<stdio.h>
void main(){
    int num;
    printf("enter the integer : ");
    scanf("%d",&num);
    if(num%2==0){
        printf("The num %d is even",num);
    }else{
        printf("The num %d is odd",num);
    }
    }