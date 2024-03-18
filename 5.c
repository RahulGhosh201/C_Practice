// Online C compiler to run C program online
#include <stdio.h>
#include<ctype.h>

char *soln(char str[]){
    int k=0;
    for(int i=0;str[i]!='\0';i++){
        if(isalpha(str[i])){
            str[k++]=str[i];
        }
    }
    str[k]='\0';
    return str;
}


int main() {
    // Write C code here
    char str[100];
    fgets(str, sizeof(str), stdin);
    printf("Ans: %s",soln(str));

    return 0;
}