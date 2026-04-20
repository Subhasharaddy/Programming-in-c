#include <stdio.h>
int main(){
    int fact=1,num;
    int i;
    printf("\n Enter the number: ");
    scanf("%d",&num);
    if (num==0){
        fact=1;
}else{
    for(int i=1;i<=num;i++){
    fact=fact*i;
    }
}printf("The factorial of a given number is:%d",fact);
return 0;
}