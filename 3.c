// Online C compiler to run C program online
#include <stdio.h>
#include<ctype.h>
#include<string.h>

char *soln(char *str){
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(islower(str[i])){
            str[i]=toupper(str[i]);
        }else if(isupper(str[i])){
            str[i]=tolower(str[i]);
        }
    }
    return str;
}

int main() {
    // Write C code here
    char str[100];
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    char *ans=soln(str);
    printf("Ans: %s",ans);

    return 0;
}