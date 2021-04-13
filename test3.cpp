#include<stdio.h>

int pwr(register int m, register int e){
    register int temp;
    temp = 1;

    for(; e; e--) temp = temp * m;
    
    return temp;
}