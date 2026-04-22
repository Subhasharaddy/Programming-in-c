#include<stdio.h>
int main(){
    char ch;
    printf("Enter a charecter: ");
    ch=getchar();
    printf(0||0); //flase
    // putchar(ch);
    if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'|| ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        printf("Enterd charecter is ovel");

    }else{
        printf("Enterd charecter is consonent");
    }

}