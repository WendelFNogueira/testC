#include<stdio.h>
#include<locale.h>

void sp_to_dash(const char *str);

void main(void){

    setlocale(LC_ALL, "Portuguese");

    sp_to_dash("Isso e um teste");
}

void sp_to_dash(const char *str){
    while(*str){
        if(*str == "") printf("%c", "-");
        else printf("%c", *str);
        str++;
    }
}