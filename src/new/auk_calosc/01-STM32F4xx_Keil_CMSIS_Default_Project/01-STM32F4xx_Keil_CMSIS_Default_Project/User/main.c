#include "stm32f4xx.h"
#include "stm32f4xx_spi.h"
#include "defines.h"
#include "tm_stm32f4_ili9341_ltdc.h"
#include "tm_stm32f4_fonts.h"
#include "tm_stm32f4_delay.h"
#include <stdio.h>

#define SAMPLES 320*10
 int i=0;
		int tab[SAMPLES];
		
int main(void) {
	uint16_t max = 0;
	int step = 0; 
	uint16_t min = 4096;
    //Initialize system
    SystemInit();
    //Initialize delay
    TM_DELAY_Init();
    //Initialize ILI9341 with LTDC
    //By default layer 1 is used
	
		/* Initialize ADC1 on channel 0, this is pin PA0 */
	TM_ADC_Init(ADC1, ADC_Channel_0);
	
    TM_ILI9341_Init();
    //Rotate LCD for 90 degrees
    TM_ILI9341_Rotate(TM_ILI9341_Orientation_Landscape_2);
    
    TM_ILI9341_SetLayer1();
    /* Fill data on layer 1 */
   /* TM_ILI9341_Fill(ILI9341_COLOR_WHITE);
    //Show text
    TM_ILI9341_Puts(65, 30, "Layer 1", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
    TM_ILI9341_Puts(20, 130, "OLOL!", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
    TM_ILI9341_Puts(60, 150, "To DZIALA!!!", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
    TM_ILI9341_Puts(70, 170, "Test Test", &TM_Font_11x18, ILI9341_COLOR_BLACK, ILI9341_COLOR_BLUE2);
    TM_ILI9341_Puts(170, 230, "Grzesiek, widze Cie", &TM_Font_7x10, ILI9341_COLOR_BLACK, ILI9341_COLOR_ORANGE);
    
    TM_ILI9341_SetLayer2();
  */  /* Fill data on layer 2 */
    //TM_ILI9341_Fill(ILI9341_COLOR_GREEN2);
    //Show text
//Draw circle on layer 2
    //TM_ILI9341_DrawCircle(150, 150, 140, ILI9341_COLOR_BLACK);
		
		while(1) {
			
		
    for(i=0;i<SAMPLES;i++){
			tab[i]=TM_ADC_Read(ADC1, ADC_Channel_0);
		//Delayms(10);
		}
		TM_ILI9341_DrawFilledRectangle(0,0,320,240,ILI9341_COLOR_WHITE);
		TM_ILI9341_DrawRectangle(0, 120, 320, 240, ILI9341_COLOR_RED);
		TM_ILI9341_DrawRectangle(0, 0, 320, 119, ILI9341_COLOR_RED);
		
		//TODO: SCALE FFT
		
		step = SAMPLES/320;
		
		for(i=0;i<320; i++){
			//TM_ILI9341_DrawLine(i, 0, i, 240*(tab[i])/4096, ILI9341_COLOR_BLACK);
			//TM_ILI9341_DrawCircle(i,240*(tab[i*step])/4096+40,1,ILI9341_COLOR_BLACK);
			TM_ILI9341_DrawCircle(i,(240-140)*tab[i*step]/4096+120,1,ILI9341_COLOR_BLACK);
			TM_ILI9341_DrawCircle(i,(240-140)*tab[i*step]/4096,1,ILI9341_COLOR_BLACK); //for future fft
		}
		//Delayms(5000);
	}
    while (1) {        
        //This will set opacity of one layer to 0, other to max (255) each time
        //This is like toggle function
        //TM_ILI9341_ChangeLayers();
        //Delayms(500);
        
        /*
        //Bottom code works the same as one before inside while loop
        
        //Turn on Layer1 and turn off Layer2
        TM_ILI9341_SetLayer1Opacity(255);
        TM_ILI9341_SetLayer2Opacity(0);
        Delayms(500);
        
        //Turn on Layer2 and turn off Layer1
        TM_ILI9341_SetLayer1Opacity(0);
        TM_ILI9341_SetLayer2Opacity(255);
        Delayms();*/
        
    
	
}
		}