/*
 * Dab.c
 *
 *  Created on: Nov 28, 2023
 *      Author: Dani
 */

#include <stdio.h>
#include "ff.h"
#include "fatfs.h"
#include "main.h"
#include "stm32f3xx_hal.h"
#include <string.h>
#include <math.h>
#include "Panel Tactil.h"
#include "Idioma.h"
#include "ILI9341_Driver.h"
#include "Memoria.h"
#include "Recursos.h"
#include "XPT2046_touch.h"
#include "Aplicacion.h"
#include "OSC.h"
#include "Dab.h"
#include "Inverter.h"

void DabInit(void);
void DabLoop(void);

float d_VBat=0;
float d_VBus=0;
float d_Fase=0;

unsigned int d_ActL=0;
unsigned int d_ActH=0;

void DabInit(void)
{
	//Aca se inicializan las variables.


	d_ActL=0;
	d_ActH=0;
	d_Fase=0;
}

void DabLoop(void)
{
	//Por acá paso regularmente cada x tiempo,
	//y decido que cargar en d_ActL,d_ActL=0 y en d_Fase;

	d_VBat=LeerVBat(g_LeerModo);
	d_VBus=LeerVBus(g_LeerModo);
 //  edite el codigo en mi trabajo

if(d_VBus > VBUSi) {
  if(d_VBat == VBATmax) {
    d_ActL=0;
    d_ActH=0;
  }else{
     if(d_VBat < VBATmax) {
        d_ActL=0;
        d_ActH=1;
      }
  }
}else{
  if(d_VBus == VBUSmin) {
   if(d_VBat== VBATmin) {
        d_ActL=0;
        d_ActH=0;
    }else{
      if(d_VBat== VBATmax) {
        d_ActL=1;
        d_ActH=0;
      }
    }
  }
}


}
