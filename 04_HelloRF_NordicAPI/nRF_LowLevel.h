/** @file nRF_LowLevel.h
 *
 * @author Wassim FILALI, inspired from nRF24L01P-EK
 *
 * @compiler IAR STM8
 *
 *  This low level is applied on the STM8103F3 so this should be the only file
 *  to modify when porting this to another MCU
 *
 * $Date: 20.09.2015
 * $Revision:
 *
 */

 // UINT type definition
#ifndef _UINT_DEF_
#define _UINT_DEF_
typedef unsigned int UINT;
#endif  /* _UINT_DEF_ */

// BYTE type definition
#ifndef _BYTE_DEF_
#define _BYTE_DEF_
typedef unsigned char BYTE;
#endif   /* _BYTE_DEF_ */

//------------------------Low Level API------------------------

void SPI_Init_ChipEnable_Pin();

void CE_Pin_LowDisable();

void CE_Pin_HighEnable();

void SPI_Init_ChipSelect_Pin();

void CSN_Pin_LowSelect();

void CSN_Pin_HighDisable();

void SPI_Init_Peripheral();

BYTE SPI_WriteRead(BYTE Data);
