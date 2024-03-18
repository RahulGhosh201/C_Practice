// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

char *soln( char *s1, char *s2){
    int i=strlen(s1);
    for(int j=0;s2[j]!='\0';i++,j++){
        s1[i]=s2[j];
    }
    s1[i]='\0';
    // strcat(s1,s2);
    printf("%s",s1);
}

int main() {
    // Write C code here
    char s1[100], s2[100];
    printf("Enter s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter s2: ");
    fgets(s2, sizeof(s2), stdin);
    
    soln(s1,s2);
    // printf("Ans: %s",ans);
    return 0;
}