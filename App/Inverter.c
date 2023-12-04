/*
 * Inverter.c
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

void InverterInit(void);
void InverterLoop(void);

float i_Vac=0;
float i_Iac=0;
float i_VBus=0;
float i_PMod=0;

void InverterInit(void)
{
	//Aca se inicializan las variables.
	i_Vac=0;
	i_Iac=0;
	i_VBus=0;
	i_PMod=0;
}

void InverterLoop(void)
{
	//Por acá paso regularmente cada x tiempo,
	//y decido que cargar en i_PMod;
	i_Vac=LeerVac(g_LeerModo);
	i_Iac=LeerIac(g_LeerModo);
	i_VBus=LeerVBus(g_LeerModo);
}
