/* =============================================================================
* Filename : crc.h
* Summary  : Interface of crc code generating
* Compiler : gcc
*
* Version  : 
* Update   : 
* Date     : 
* Author   : 
* Org      : 
*
* History  :
*
* ============================================================================*/

#ifndef __CRC_H__
#define __CRC_H__

/*==============================================================================
* Header files
*=============================================================================*/
#include "api.h"

/*==============================================================================
* Macro Definition
*=============================================================================*/
#define CRC_CODE_LEN	2		/* CRC code length */

/*==============================================================================
* Function declaration
*=============================================================================*/
extern uint16 CRCCode_get(const uint8* data, int32 len);

#endif



