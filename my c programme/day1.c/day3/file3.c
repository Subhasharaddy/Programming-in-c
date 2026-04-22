#include<stdio.h>
int add(int a,int b){
    // int a,b;
    return a+b;
}
int main(){
    int num1,num2;
    // int result;
    printf("Entern the num1: ");
     scanf("%d",&num1);
     printf("Enter the num2: ");
     scanf("%d",&num2);
     int result=add(num1,num2);
    // result=add(20,30);
    printf("The sum of %d and %d is %d",num1,num2,result);
    return 0;
}