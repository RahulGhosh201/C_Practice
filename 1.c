// Online C compiler to run C program online
#include <stdio.h>

void soln(char str[], int pos, int len)
{
    char ans[len+1],k=0;
    for(int i=pos-1;i<pos+len;i++){
        ans[k]=str[i];
        k++;
    }
    ans[k]='\0';
    printf("Ans: %s",ans);
    
}

int main() {
    // Write C code here
    char str[1000];
    int pos=0,len=0;
    printf("Enter str: ");
    fgets(str,sizeof(str),stdin);
    printf("Enter starting pos: ");
    scanf("%d",&pos);
    printf("Enter length of the substring: ");
    scanf("%d",&len);
    soln(str,pos,len);
    return 0;
}