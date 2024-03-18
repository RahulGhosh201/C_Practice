// Online C compiler to run C program online
#include <stdio.h>
// #include<bool.h>
#include<string.h>

// int soln(char str[], char substr[]){
//     if(strstr(str, substr)!=NULL){
//         return 1;
//     }
//     return 0;
// }
//strstr function returns the first occurence of sub string in a string
int main() {
    // Write C code here
    char str[100],substr[100];
    printf("Enter str: ");
    fgets(str, sizeof(str),stdin);
    printf("Enter substr: ");
    fgets(substr,sizeof(substr),stdin);
    
     // Removing newline characters
    str[strcspn(str, "\n")] = '\0';
    substr[strcspn(substr, "\n")] = '\0';
    //above two lines are must
    //
    // if(soln(str,substr)){
    //     printf("%s is part of %s",substr, str);
    // }else{
    //     printf("%s is not part of %s",substr, str);
    // }
    if(strstr(str,substr)!=NULL){
        printf("Exists");
    }else{
        printf("Do not exists");
    }

    return 0;
}