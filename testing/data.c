//
// Created by grzegorz on 02.06.15.
//
/*
#include <stdint.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include "data.h"

#define SAMPLE_LIMIT 102400000

uint16_t data[SAMPLE_LIMIT];


int main() {
    int i = 0;
    srand((unsigned int) time(NULL));
    uint16_t tmp1,tmp2,tmp3;
    for(i = 0; i< (SAMPLE_LIMIT); i+=3) {
        tmp1 = (uint16_t) (rand()%4096);
        tmp2 = (uint16_t) (rand()%4096);
        tmp3 = (uint16_t) (rand()%4096);

        //printf("%d %d\n",tmp1,tmp2);

        data[i] = (uint16_t) tmp1;
        data[i+1] = (uint16_t) tmp2;
        data[i+2] = (uint16_t) tmp3;

    }

    return 0;
}
*/