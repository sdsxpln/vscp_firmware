/***********************************************************************/
/*                                                                     */
/*  FILE        :fvector.c                                             */
/*  DATE        :Tue, Jun 04, 2013                                     */
/*  DESCRIPTION :define the fixed vector table.                        */
/*  CPU GROUP   :Other                                                 */
/*                                                                     */
/*  This file is generated by Renesas Project Generator (Ver.4.18).    */
/*  NOTE:THIS IS A TYPICAL EXAMPLE.                                    */
/***********************************************************************/
/*********************************************************************
*
* Device     : R8C/Tiny
*
* File Name  : fvector.c
*
* Abstract   : Define the fixed vector table.
*
* History    : 1.20  (2009-01-27)
*
* Copyright (C) 2009 (2010) Renesas Electronics Corporation.
* and Renesas Solutions Corporation. All rights reserved.
*
*********************************************************************/

#include "cstartdef.h"

#pragma sectaddress     fvector,ROMDATA 0xffdc
                                                                                
//////////////////////////////////////////////////////////////////////////
                                                                                
#pragma interrupt/v _dummy_int  //udi
#pragma interrupt/v _dummy_int  //over_flow
#pragma interrupt/v _dummy_int  //brki
#pragma interrupt/v _dummy_int  //address_match
#pragma interrupt/v _dummy_int  //single_step
#pragma interrupt/v _dummy_int  //wdt
#pragma interrupt/v _dummy_int  //reserved
#pragma interrupt/v _dummy_int  //reserved
#pragma interrupt/v start

#if __WATCH_DOG__ != 0
_asm("	.ofsreg 0FEH");
#else
_asm("	.ofsreg	0FFH");
#endif

_asm("	.id	""\"#FFFFFFFFFFFFFF\"");

#pragma interrupt _dummy_int()
void _dummy_int(void);
void _dummy_int(void){}
                                                                                


