/*
 * Mppt.h
 *
 *  Created on: Nov 28, 2023
 *      Author: Dani
 */

#ifndef MPPT_H_
#define MPPT_H_

void MpptInit(void);
void MpptLoop(void);

extern float m_dPWM;

#endif /* MPPT_H_ */
