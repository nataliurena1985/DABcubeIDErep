/*
 * Mppt.c
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

void MpptInit(void);
void MpptLoop(void);

float m_VPanel=0;
float m_IPanel=0;
float m_VBus=0;
float m_dPWM=0;

void MpptInit(void)
{
	//Aca se inicializan las variables.

	m_VPanel=0;
	m_IPanel=0;
	m_VBus=0;
}

void MpptLoop(void)
{
	//Por acá paso regularmente cada x tiempo,
	//y decido que cargar en m_dPWM;

	m_VPanel=LeerVPanel(g_LeerModo);
	m_IPanel=LeerIPanel(g_LeerModo);
	m_VBus=LeerVBus(g_LeerModo);

}
