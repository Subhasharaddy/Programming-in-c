#include<stdio.h>
int main(){
    int flag=0,i,num;
    printf("Enter a positive integer number: ");
    scanf("%d",&num);
    if (num<=1){
        printf("%d is a neither prime nor composite.\n",num);
    }else{
        for (i=2;i<=num/2;i++){
        if(num%i==0){
            flag=1;
            break;
        }
        }if(flag==0)
        {
            printf("%d is a prime number.\n",num);
        }
        else{
            printf("%d is a comoposite number",num);
        }
    }
    }
