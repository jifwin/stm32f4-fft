#define ARM_MATH_CM4 // czy tu ma byc m4?
#include <math.h>
#include <stdio.h>
#include "stm32f4xx.h"
#include "arm_math.h"



int main() {

	int i = 0;
	arm_cfft_instance_q15 fft_inst;
	
	q15_t data[16]; //input and output
	for(i = 0 ; i < 16; i++) {
		data[i] = 0;
	}
	
	arm_cfft_q15(&fft_inst,data,0,0); //rozkminic ostatnie dwa paraemtry
	
	//todo: policzyc modul juz przy wyswetilaniu?
	
	
	return 0;
}

