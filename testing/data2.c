//
// Created by grzegorz on 02.06.15.
//
/*
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "data.h"

#define SAMPLE_LIMIT 1024

//uint16_t data[SAMPLE_LIMIT];
uint8_t data[SAMPLE_LIMIT];

int main() {
    int i = 0;
    int j = 0;
    srand((unsigned int) time(NULL));
    uint16_t tmp1,tmp2;
    for(i = 0; i< (SAMPLE_LIMIT-3); i+=2) {
        tmp1 = (uint16_t) (rand()%4096);
        tmp2 = (uint16_t) (rand()%4096);
        printf("%d %d\n",tmp1,tmp2);

        data[j] = (uint8_t) (tmp1>>4);
        data[j+1] = (uint8_t) (tmp1<<4) + (uint8_t) (tmp2>>8);
        data[j+2] = (uint8_t) tmp2;
        j=j+3;
        printf("bytesa: %d %d %d\n\n",data[i],data[i+1],data[i+2]);
    }
        printf("i:%d j:%d",i,j);
    return 0;
}*/