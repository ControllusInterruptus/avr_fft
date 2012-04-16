#ifndef _CONSTANTS_H_
#define _CONSTANTS_H_

/**
 * KS0108 LCD Constants
 */

// KS0108 commands
#define LCD_ON		0x3f
#define LCD_OFF	0x3e
#define LCD_ADDR	0x40
#define LCD_PAGE	0xB8
#define LCD_START_LINE	0xC0

// KS0108 status register flags (register should be == 0x00 when everything is ready)
#define LCD_STATUS_BUSY (1<<7)  // low when ready
#define LCD_STATUS_ONOFF (1<<5) // low when on
#define LCD_STATUS_RESET (1<<5) // low when normal

/**
 * Digital potentiometer constants
 */
#define POT_READ_DATA 0x3
#define POT_WRITE_DATA 0x0
#define POT_INC 0x1
#define POT_DEC 0x2

#define POT_REG_WIPER0 0x0
#define POT_REG_WIPER1 0x1
#define POT_REG_TCON   0x4
#define POT_REG_STATUS 0x5


#endif
