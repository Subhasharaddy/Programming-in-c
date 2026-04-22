#include<stdio.h>
#include<string.h>
int main(){
    char cha[20];
    int vowels=0;
    printf("Enter a string: ");
    fgets(cha,sizeof(cha),stdin);
    // printf(0||0); //flase
    // putchar(ch);
    // ch =hello 
    for(int i= 0;i<strlen(cha)-1;i++){
        char ch= cha[i];
    if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||
         ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        vowels++;
        printf("Enterd charecter is ovel\n");

    }else if (('a' <=ch && ch <='z') || ('A' <=ch && ch<='Z') ) { 
        printf("Enterd charecter is consonant\n");
    }
    else{
        printf("Enterd charecter is invalid:");
    }

}return 0;
}