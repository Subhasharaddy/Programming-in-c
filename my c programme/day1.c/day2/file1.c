#include <stdio.h>
int main(){
    int num;
    int i;
    printf("Enter how many numbers do you want: ");
    scanf("%d",&num);
    printf("The required numbers are: ");
    for(i=0;i<=num;i++){
        printf("%d\n",i);
    }
}