#include<stdio.h>

static int series_num;


int main(void){
    void series_start(int seed);
    int series(void);
}

int series(void){
    series_num = series_num+23;
    return series_num;
}

void series_start(int seed){
    series_num = seed;
}