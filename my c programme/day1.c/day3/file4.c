#include<stdio.h>
int fn(int n){
    if (n==0){
        return 1;
    }return n*fn(n-1);
}int main(){
    int result;
    result=fn(3);
    printf("The facorial is:%d",result);
    return 0;

}