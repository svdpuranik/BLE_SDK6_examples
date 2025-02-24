/**
 ****************************************************************************************
 *
 * @file user_modules_config.h
 *
 * @brief User modules configuration file.
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

#ifndef _USER_MODULES_CONFIG_H_
#define _USER_MODULES_CONFIG_H_

/**
 ****************************************************************************************
 * @addtogroup APP
 * @ingroup RICOW
 *
 * @brief User modules configuration.
 *
 * @{
 ****************************************************************************************
 */

/*
 * DEFINES
 ****************************************************************************************
 */

/***************************************************************************************/
/* Exclude or not a module in user's application code.                                 */
/*                                                                                     */
/* (0) - The module is included. The module's messages are handled by the SDK.         */
/*                                                                                     */
/* (1) - The module is excluded. The user must handle the module's messages.           */
/*                                                                                     */
/* Note:                                                                               */
/*      This setting has no effect if the respective module is a BLE Profile           */
/*      that is not used included in the user's application.                           */
/***************************************************************************************/
#define EXCLUDE_DLG_GAP             (0)
#define EXCLUDE_DLG_TIMER           (0)
#define EXCLUDE_DLG_MSG             (0)
#define EXCLUDE_DLG_SEC             (0)
#define EXCLUDE_DLG_DISS            (0)
#define EXCLUDE_DLG_PROXR           (0)
#define EXCLUDE_DLG_BASS            (0)
#define EXCLUDE_DLG_FINDL           (0)
#define EXCLUDE_DLG_FINDT           (0)
#define EXCLUDE_DLG_SUOTAR          (0)
#define EXCLUDE_DLG_CUSTS1          (1)
#define EXCLUDE_DLG_CUSTS2          (0)

/// @} APP

#endif // _USER_MODULES_CONFIG_H_