#include<stdio.h>
int main(){
    char str[]={'T','I','T','L','I','\0'};
    char *ptr=str;
    while(*ptr!='0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}