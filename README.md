# ble-ncp-custom-commands
Example code for the implementation of custom BGAPI commands (Silicon Labs Bluetooth NCP) that provide the ability for the host processor to query version info and other status information from the NCP firmware

# Using
1. Create a Bluetooth NCP example project for your target device using Silicon Labs Simplicity Studio.
2. Replace the app.c and app.h from the example project with the files from this repo.
3. Build and flash.
4. Use NCP Commander to query the target using the API "sl_bt_user_message_to_target()", using the defined code as the argument/parameter.

# Implemented Commands
| #define | Command Byte | Description              |
| ------- | ------------ | ------------------------ |
| USER_CMD_SE_VERSION_ID | 0xF0 | Retrieve the version information for the secure element firmware running on the device |
| USER_CMD_CUST_NCP_VERSION_ID | 0xF1 | Retrieve a custom 32-bit version from the NCP firmware running on the device |
| USER_CMD_CHIP_REVISION_ID | 0xF2 | Retrieve the chip revision of the NCP device |
| USER_CMD_BOOTLOADER_VERSION_ID | 0xF3 | Retrieve the version information from the bootloader running on the NCP device |
| USER_CMD_APP_VERSION_ID | 0xF4 | Retrieve the "application version" from the application properties |






