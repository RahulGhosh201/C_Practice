// Online C compiler to run C program online
#include <stdio.h>

int soln(char str[], char ch){
    int cnt=0;
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==ch){
            cnt++;
        }
    }
    return cnt;
}

int main() {
    // Write C code here
    char str[100], ch;
    printf("Enter str: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter ch: ");
    scanf("%c",&ch);
    printf("Ans: %d",soln(str,ch));

    return 0;
}