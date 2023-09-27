/***************************************************************************//**
 * @file
 * @brief Application interface provided to main().
 *******************************************************************************
 * # License
 * <b>Copyright 2020 Silicon Laboratories Inc. www.silabs.com</b>
 *******************************************************************************
 *
 * SPDX-License-Identifier: Zlib
 *
 * The licensor of this software is Silicon Laboratories Inc.
 *
 * This software is provided 'as-is', without any express or implied
 * warranty. In no event will the authors be held liable for any damages
 * arising from the use of this software.
 *
 * Permission is granted to anyone to use this software for any purpose,
 * including commercial applications, and to alter it and redistribute it
 * freely, subject to the following restrictions:
 *
 * 1. The origin of this software must not be misrepresented; you must not
 *    claim that you wrote the original software. If you use this software
 *    in a product, an acknowledgment in the product documentation would be
 *    appreciated but is not required.
 * 2. Altered source versions must be plainly marked as such, and must not be
 *    misrepresented as being the original software.
 * 3. This notice may not be removed or altered from any source distribution.
 *
 ******************************************************************************/

#ifndef APP_H
#define APP_H

#include "sl_bt_api.h"

// Define user commands for reading versions (NOTE: this is just an
// example - these commands can be customized as needed/desired)
#define USER_CMD_SE_VERSION_ID 0xF0
#define USER_CMD_CUST_NCP_VERSION_ID 0xF1
#define USER_CMD_CHIP_REVISION_ID 0xF2
#define USER_CMD_BOOTLOADER_VERSION_ID 0xF3
#define USER_CMD_APP_VERSION_ID 0xF4

// Example: user command 1.
#define USER_CMD_1_ID    0x01
typedef uint8_t cmd_1_t[16];

// Example: user command 2.
#define USER_CMD_2_ID    0x02
typedef uint8_t cmd_2_t[8];

PACKSTRUCT(struct user_cmd {
  uint8_t hdr;
  // Example: union of user commands.
  union {
    cmd_1_t cmd_1;
    cmd_2_t cmd_2;
  } data;
});

typedef struct user_cmd user_cmd_t;

/**************************************************************************//**
 * Application Init.
 *****************************************************************************/
void app_init(void);

/**************************************************************************//**
 * Application Process Action.
 *****************************************************************************/
void app_process_action(void);

#endif // APP_H
