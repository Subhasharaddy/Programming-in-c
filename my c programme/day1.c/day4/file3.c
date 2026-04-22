#include<stdio.h>
int vrlen(int n, ...){
    int i=0,marks=0;
    while(i<n){
        printf("Enter the marks: ");
        scanf("%d",&marks);
        marks+=marks;
        i++;
        return marks;
    }
}
int main(){
    // for(i=1;i<=8
    //     print("Emnter your %d semester mark",i)
         int n;
    printf("Enter the number of sub: ");
    scanf("%d",&n);
    int marks[n];
    for(int i=0; i<n;i++){
        printf("Enter the marks: ");
        scanf("%d",&marks);
        marks+=marks;
    //     scanf()
     }
    int Totalmarks=vrlen(n, marks);
    printf("Total marks are %d",Totalmarks);
  return 0;
}
   
  

