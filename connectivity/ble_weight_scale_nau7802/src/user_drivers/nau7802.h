/**
 ****************************************************************************************
 *
 * @file nau7802.h
 *
 * @brief Driver implementation for NAU7802 bridge sensor ADC.
 *
 * The MIT License (MIT)
 * Copyright (c) 2023 Renesas Electronics Corporation and/or its affiliates
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
 * IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR
 * OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE
 * OR OTHER DEALINGS IN THE SOFTWARE.
 *
 ***************************************************************************************
 */

#ifndef _NAU7802_H_
#define _NAU7802_H_

/**
 ****************************************************************************************
 * @addtogroup APP
 * @ingroup RICOW
 *
 * @brief 
 *
 * @{
 ****************************************************************************************
 */

/*
 * INCLUDE FILES
 ****************************************************************************************
 */
#include <stdint.h>
#include <stdbool.h>

/*
 * TYPE DEFINITIONS
 ****************************************************************************************
 */

/*
 * DEFINES
 ****************************************************************************************
 */

/*
 * FUNCTION DECLARATIONS
 ****************************************************************************************
 */
 
 int nau7802_init(void);
 int nau7802_enable_adc(void);
 int nau7802_sw_reset(void);
 int nau7802_get_chip_rev(uint8_t * const chip_id);
 int nau7802_get_ofset_load(int *offsload);
 int nau7802_get_ug_load(uint32_t *load);
 int nau7802_get_adc(int *adcval);
 int nau7802_zero_scale(void);
 int nau7802_calib_scale(uint32_t weight);


/// @} APP

#endif // _NAU7802_H_