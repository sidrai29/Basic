#include<stdio.h>
int main(){
    char str[]={'S','H','A','R','K','\0'};
    char *ptr=str;
    while(*ptr!='0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}
