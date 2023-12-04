/*
 * Dab.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Dani
 */

#ifndef DAB_H_
#define DAB_H_


#define VBUSmax   450.0
#define VBUSmin   350.0
#define VBUSi     400.0
#define VBATmax   50.0
#define VBATmin  30.0

void DabInit(void);
void DabLoop(void);

extern float d_Fase;
extern unsigned int d_ActL;
extern unsigned int d_ActH;


#endif /* DAB_H_ */
