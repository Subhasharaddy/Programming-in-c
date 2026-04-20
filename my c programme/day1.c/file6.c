#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    printf("enterd the letter: ");
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("it is vowels:\n");
    }
   else if (isalpha(ch))
    {
        printf("it is consonant:\n ");
    } 
    else{
        printf("invalid input!please enter an alphabet:\n");
     }
    return 0;
}