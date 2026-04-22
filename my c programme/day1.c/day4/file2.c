#include <stdio.h>
int minfun(int *arr,int n){
     int min=*arr;
     int ptr=*arr;
     while (n--){
  
        if(min>*arr){
            min=*arr;
        }
        arr++;
    }return min;
}
int main(){
   
    int arr[6]={10,20,30,40,50,60};
    int *p=arr;
    int min=minfun(arr,6);
    printf("%d",min);
    return 0;
}