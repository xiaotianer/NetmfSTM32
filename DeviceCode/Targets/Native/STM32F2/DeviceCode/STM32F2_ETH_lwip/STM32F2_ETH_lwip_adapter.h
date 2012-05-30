/*
 * Portions Copyright (c) CSA Engineering AG, Switzerland
 * www.csa.ch, info@csa.ch
 */

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Copyright (c) Microsoft Corporation.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <tinyhal.h>

#ifndef _STM32F2_ETH_LWIP_ADAPTER_H_1
#define _STM32F2_ETH_LWIP_ADAPTER_H_1 1

struct STM32F2_ETH_LWIP_Driver
{
    static int  Open  (int);
    static BOOL Close (void);
    static BOOL Bind  (void);
};

//
// STM32F2_ETH_LWIP_ADAPTER
//////////////////////////////////////////////////////////////////////////////

#endif