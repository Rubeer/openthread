/*
 *  Copyright (c) 2017, The OpenThread Authors.
 *  All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *  1. Redistributions of source code must retain the above copyright
 *     notice, this list of conditions and the following disclaimer.
 *  2. Redistributions in binary form must reproduce the above copyright
 *     notice, this list of conditions and the following disclaimer in the
 *     documentation and/or other materials provided with the distribution.
 *  3. Neither the name of the copyright holder nor the
 *     names of its contributors may be used to endorse or promote products
 *     derived from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 *  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 *  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 *  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 *  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 *  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 *  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 *  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 *  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 *  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 *  POSSIBILITY OF SUCH DAMAGE.
 */

/**
 * @file
 *   This file includes the platform-specific initializers.
 *
 */

#ifndef PLATFORM_EMSK_H_
#define PLATFORM_EMSK_H_

#include <openthread/config.h>
#include <openthread-core-config.h>
#include <stdint.h>
#include <stdbool.h>
#include "openthread/types.h"

#include "board/board.h"

/**
 * This function initializes the alarm service used by OpenThread.
 *
 */
void emskAlarmInit(void);

/**
 * This function retrieves the time remaining until the alarm fires.
 *
 * @param[out]  aTimeval  A pointer to timer value.
 *
 */
void emskAlarmUpdateTimeout(int32_t *aTimeout);

/**
 * This function performs alarm driver processing.
 *
 */
void emskAlarmProcess(otInstance *aInstance);

/**
 * This function initializes the radio service used by OpenThread.
 *
 */
void emskRadioInit(void);

/**
 * This function performs radio driver processing.
 *
 */
void emskRadioProcess(otInstance *aInstance);

/**
 * This function initializes the random number service used by OpenThread.
 *
 */
void emskRandomInit(void);

/**
 * This function performs UART driver processing.
 *
 */
void emskUartProcess(void);

#endif  // PLATFORM_EMSK_H_
