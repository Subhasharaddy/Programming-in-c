#include<stdio.h>
int main(){
    int n,a=0,b=1,c,i;
    printf("Enter length of fib series: ");
    scanf("%d",&n);
    printf("Fibonacci series:");
    for (i=1;i<=n;i++){
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    return 0;
}