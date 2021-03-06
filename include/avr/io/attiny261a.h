/******************************************************************************
 *   This file is part of avr-libc3.                                          * 
 *                                                                            * 
 *   Automatically created by devtools/gen-ioheader-atdf.py (V0.91)           * 
 *                                                                            * 
 *   .atpack File: ATtiny261A.atdf                                            * 
 *   .ATDF File:   atdf/ATtiny261A.atdf                                       * 
 *   Version:      2.0.10                                                     * 
 *   Date:         2019-04-25                                                 * 
 *   Device:       ATtiny261A                                                 * 
 *   Architecture: AVR8                                                       * 
 *                                                                            * 
 *   Changelog:                                                               * 
 *                                                                            * 
 *   2.0.10 2019-04-25 :                                                      * 
 *        - Added missing TCB1 PORTMUX for tiny3217/3216/1617/1616/1614.      * 
 *    2.0.2 2019-01-24 :                                                      * 
 *        - Corrected TC2 instance in ATtiny441.                              * 
 *        - Corrected defines for ATtiny1634.                                 * 
 *        - Refactored away family header files, now there is one header file * 
 *        - per device.                                                       * 
 *        - Corrected FUSE_MEMORY_SIZE for ATtiny4/5/9/10/20/40.              * 
 *        - Added simulator support for mega1609/1608/809/808.                * 
 *        - Succeeds Atmel.ATtiny_DFP 1.3.229.                                * 
 *                                                                            * 
 *   Generated Source Derived from data:                                      * 
 *   Copyright (c) 2019 Microchip Technology Inc.                             * 
 *                                                                            * 
 *   Licensed under the Apache License, Version 2.0 (the "License");          * 
 *   you may not use this file except in compliance with the License.         * 
 *   You may obtain a copy of the Licence at                                  * 
 *                                                                            * 
 *       http://www.apache.org/licenses/LICENSE-2.0                           * 
 *                                                                            * 
 *   Unless required by applicable law or agreed to in writing, software      * 
 *   distributed under the License is distributed on an "AS IS" BASIS,        * 
 *   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. * 
 *   See the License for the specific language governing permissions and      * 
 *   limitations under the License.                                           * 
 ******************************************************************************/


#ifndef _AVR_IO_H_
#  error "Include <avr/io.h> instead of this file."
#endif

#ifndef _AVR_IOXXX_H_
#  define _AVR_IOXXX_H_ "ioATtiny261A.h"
#else
#  error "Attempt to include more than one <avr/ioXXX.h> file."
#endif

#ifndef _AVR_ATtiny261A_H_INCLUDED
#  define _AVR_ATtiny261A_H_INCLUDED

/*
================================================================================
Ungrouped common register
================================================================================
*/

#define GPIOR0 _SFR_MEM8 (0x2A) /* General purpose register 0 */
#define GPIOR1 _SFR_MEM8 (0x2B) /* General Purpose register 1 */
#define GPIOR2 _SFR_MEM8 (0x2C) /* General Purpose IO register 2 */

#define DWDR   _SFR_MEM8 (0x40) /* debugWire data register */

#define CLKPR  _SFR_MEM8 (0x48) /* Clock Prescale Register */
#define PLLCSR _SFR_MEM8 (0x49) /* PLL Control and status register */

#define OSCCAL _SFR_MEM8 (0x51) /* Oscillator Calibration Register */

#define MCUSR  _SFR_MEM8 (0x54) /* MCU Status register */
#define MCUCR  _SFR_MEM8 (0x55) /* MCU Control Register */
#define PRR    _SFR_MEM8 (0x56) /* Power Reduction Register */

#define SPL    _SFR_MEM8 (0x5D) /* Stack Pointer Low Byte */

#define SREG   _SFR_MEM8 (0x5F) /* Status Register */


/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

#if !defined (__ASSEMBLER__)
/*
================================================================================
IO Module Structures
================================================================================
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/

typedef struct FUSE_struct
{
    register8_t LOW;     
    register8_t HIGH;    
    register8_t EXTENDED;
} FUSE_t;


/* Self Programming enable */
typedef enum FUSE_SELFPRGEN_enum
{
    FUSE_SELFPRGEN_CLEAR_gc = (0x00), /* Self Programming enable - CLEAR */
    FUSE_SELFPRGEN_SET_gc   = (0x01), /* Self Programming enable - SET */
} FUSE_SELFPRGEN_t;

/* Reset Disabled (Enable PB7 as i/o pin) */
typedef enum FUSE_RSTDISBL_enum
{
    FUSE_RSTDISBL_CLEAR_gc = (0x00), /* Reset Disabled (Enable PB7 as i/o pin) - CLEAR */
    FUSE_RSTDISBL_SET_gc   = (0x80), /* Reset Disabled (Enable PB7 as i/o pin) - SET */
} FUSE_RSTDISBL_t;

/* Debug Wire enable */
typedef enum FUSE_DWEN_enum
{
    FUSE_DWEN_CLEAR_gc = (0x00), /* Debug Wire enable - CLEAR */
    FUSE_DWEN_SET_gc   = (0x40), /* Debug Wire enable - SET */
} FUSE_DWEN_t;

/* Serial program downloading (SPI) enabled */
typedef enum FUSE_SPIEN_enum
{
    FUSE_SPIEN_CLEAR_gc = (0x00), /* Serial program downloading (SPI) enabled - CLEAR */
    FUSE_SPIEN_SET_gc   = (0x20), /* Serial program downloading (SPI) enabled - SET */
} FUSE_SPIEN_t;

/* Watch-dog Timer always on */
typedef enum FUSE_WDTON_enum
{
    FUSE_WDTON_CLEAR_gc = (0x00), /* Watch-dog Timer always on - CLEAR */
    FUSE_WDTON_SET_gc   = (0x10), /* Watch-dog Timer always on - SET */
} FUSE_WDTON_t;

/* Preserve EEPROM through the Chip Erase cycle */
typedef enum FUSE_EESAVE_enum
{
    FUSE_EESAVE_CLEAR_gc = (0x00), /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
    FUSE_EESAVE_SET_gc   = (0x08), /* Preserve EEPROM through the Chip Erase cycle - SET */
} FUSE_EESAVE_t;

/* Brown-out Detector trigger level */
typedef enum FUSE_BODLEVEL_enum
{
    FUSE_BODLEVEL_4V3_gc      = (0x04), /* Brown-out detection at VCC=4.3 V */
    FUSE_BODLEVEL_2V7_gc      = (0x05), /* Brown-out detection at VCC=2.7 V */
    FUSE_BODLEVEL_1V8_gc      = (0x06), /* Brown-out detection at VCC=1.8 V */
    FUSE_BODLEVEL_2V3_gc      = (0x03), /* Brown-out detection at VCC=2.3 V */
    FUSE_BODLEVEL_2V2_gc      = (0x02), /* Brown-out detection at VCC=2.2 V */
    FUSE_BODLEVEL_1V9_gc      = (0x01), /* Brown-out detection at VCC=1.9 V */
    FUSE_BODLEVEL_2V0_gc      = (0x00), /* Brown-out detection at VCC=2.0 V */
    FUSE_BODLEVEL_DISABLED_gc = (0x07), /* Brown-out detection disabled */
} FUSE_BODLEVEL_t;

/* Divide clock by 8 internally */
typedef enum FUSE_CKDIV8_enum
{
    FUSE_CKDIV8_CLEAR_gc = (0x00), /* Divide clock by 8 internally - CLEAR */
    FUSE_CKDIV8_SET_gc   = (0x80), /* Divide clock by 8 internally - SET */
} FUSE_CKDIV8_t;

/* Clock output on PORTB5 */
typedef enum FUSE_CKOUT_enum
{
    FUSE_CKOUT_CLEAR_gc = (0x00), /* Clock output on PORTB5 - CLEAR */
    FUSE_CKOUT_SET_gc   = (0x40), /* Clock output on PORTB5 - SET */
} FUSE_CKOUT_t;

/* Select Clock source */
typedef enum FUSE_SUT_CKSEL_enum
{
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 = (0x00), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS_gc                 = (0x10), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_64MS_gc                = (0x20), /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_PLLCLK_1KCK_14CK_8MS_gc                = (0x01), /* PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 8 ms */
    FUSE_SUT_CKSEL_PLLCLK_16KCK_14CK_8MS_gc               = (0x11), /* PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 8 ms */
    FUSE_SUT_CKSEL_PLLCLK_1KCK_14CK_68MS_gc               = (0x21), /* PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 68 ms */
    FUSE_SUT_CKSEL_PLLCLK_16KCK_14CK_68MS_gc              = (0x31), /* PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 68 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          = (0x02), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS_gc          = (0x12), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_64MS_gc         = (0x22), /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_0MS_gc           = (0x03), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_4MS_gc           = (0x13), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
    FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_64MS_gc          = (0x23), /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1CK_4MS_gc                  = (0x04), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK 4 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_1CK_64MS_gc                 = (0x14), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTLOFXTAL_32CK_64MS_gc                = (0x24), /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32 CK + 64 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc = (0x08), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_65MS_gc = (0x18), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   = (0x28), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  = (0x38), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  = (0x09), /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  = (0x19), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc = (0x29), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc = (0x39), /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  = (0x0A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_65MS_gc  = (0x1A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    = (0x2A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   = (0x3A), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   = (0x0B), /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   = (0x1B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  = (0x2B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  = (0x3B), /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_4MS1_gc   = (0x0C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_65MS_gc   = (0x1C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_0MS_gc     = (0x2C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    = (0x3C), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_65MS_gc    = (0x0D), /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    = (0x1D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   = (0x2D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   = (0x3D), /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_14CK_4MS1_gc     = (0x0E), /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_14CK_65MS_gc     = (0x1E), /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_0MS_gc       = (0x2E), /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_4MS1_gc      = (0x3E), /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_65MS_gc      = (0x0F), /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc      = (0x1F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc     = (0x2F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
    FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc     = (0x3F), /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
} FUSE_SUT_CKSEL_t;

/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/

typedef struct LOCKBIT_struct
{
    register8_t LOCKBIT;
} LOCKBIT_t;


/* Memory Lock */
typedef enum LOCKBIT_LB_enum
{
    LOCKBIT_LB_PROG_VER_DISABLED_gc = (0x00), /* Further programming and verification disabled */
    LOCKBIT_LB_PROG_DISABLED_gc     = (0x02), /* Further programming disabled */
    LOCKBIT_LB_NO_LOCK_gc           = (0x03), /* No memory lock features enabled */
} LOCKBIT_LB_t;

/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTA_struct
{
    register8_t rsv_0x00[57]; /* RESERVED REGISTER BLOCK */
    register8_t PINA;         /* Port A Input Pins */
    register8_t DDRA;         /* Port A Data Direction Register */
    register8_t PORTA;        /* Port A Data Register */
} PORTA_t;


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/

typedef struct PORTB_struct
{
    register8_t rsv_0x00[54]; /* RESERVED REGISTER BLOCK */
    register8_t PINB;         /* Port B Input Pins */
    register8_t DDRB;         /* Port B Data Direction Register */
    register8_t PORTB;        /* Port B Data Register */
} PORTB_t;


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/

typedef struct ADC_struct
{
    register8_t rsv_0x00[33]; /* RESERVED REGISTER BLOCK */
    register8_t DIDR0;        /* Digital Input Disable Register 0 */
    register8_t DIDR1;        /* Digital Input Disable Register 1 */
    register8_t ADCSRB;       /* ADC Control and Status Register B */
    _REGISTER16 (ADC);        /* ADC Data Register  Bytes */
    register8_t rsv_0x25;     /* RESERVED REGISTER */
    register8_t ADCSRA;       /* The ADC Control and Status register */
    register8_t ADMUX;        /* The ADC multiplexer Selection Register */
} ADC_t;


/* Reference Selection Bits */
#define ADC_ADMUX_REFS_gc(x) ((x<<6) & 0xC0)

/* Left Adjust Result */
typedef enum ADC_ADLAR_enum
{
    ADC_ADLAR_CLEAR_gc = (0x00), /* Left Adjust Result - CLEAR */
    ADC_ADLAR_SET_gc   = (0x20), /* Left Adjust Result - SET */
} ADC_ADLAR_t;

/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x1F)

/* ADC Enable */
typedef enum ADC_ADEN_enum
{
    ADC_ADEN_CLEAR_gc = (0x00), /* ADC Enable - CLEAR */
    ADC_ADEN_SET_gc   = (0x80), /* ADC Enable - SET */
} ADC_ADEN_t;

/* ADC Start Conversion */
typedef enum ADC_ADSC_enum
{
    ADC_ADSC_CLEAR_gc = (0x00), /* ADC Start Conversion - CLEAR */
    ADC_ADSC_SET_gc   = (0x40), /* ADC Start Conversion - SET */
} ADC_ADSC_t;

/* ADC Auto Trigger Enable */
typedef enum ADC_ADATE_enum
{
    ADC_ADATE_CLEAR_gc = (0x00), /* ADC Auto Trigger Enable - CLEAR */
    ADC_ADATE_SET_gc   = (0x20), /* ADC Auto Trigger Enable - SET */
} ADC_ADATE_t;

/* ADC Interrupt Flag */
typedef enum ADC_ADIF_enum
{
    ADC_ADIF_CLEAR_gc = (0x00), /* ADC Interrupt Flag - CLEAR */
    ADC_ADIF_SET_gc   = (0x10), /* ADC Interrupt Flag - SET */
} ADC_ADIF_t;

/* ADC Interrupt Enable */
typedef enum ADC_ADIE_enum
{
    ADC_ADIE_CLEAR_gc = (0x00), /* ADC Interrupt Enable - CLEAR */
    ADC_ADIE_SET_gc   = (0x08), /* ADC Interrupt Enable - SET */
} ADC_ADIE_t;

/* ADC Prescaler Select Bits */
typedef enum ADC_ADPS_enum
{
    ADC_ADPS_VAL_0x00_gc = (0x00), /* 2 */
    ADC_ADPS_VAL_0x01_gc = (0x01), /* 2 */
    ADC_ADPS_VAL_0x02_gc = (0x02), /* 4 */
    ADC_ADPS_VAL_0x03_gc = (0x03), /* 8 */
    ADC_ADPS_VAL_0x04_gc = (0x04), /* 16 */
    ADC_ADPS_VAL_0x05_gc = (0x05), /* 32 */
    ADC_ADPS_VAL_0x06_gc = (0x06), /* 64 */
    ADC_ADPS_VAL_0x07_gc = (0x07), /* 128 */
} ADC_ADPS_t;

/* Bipolar Input Mode */
typedef enum ADC_BIN_enum
{
    ADC_BIN_CLEAR_gc = (0x00), /* Bipolar Input Mode - CLEAR */
    ADC_BIN_SET_gc   = (0x80), /* Bipolar Input Mode - SET */
} ADC_BIN_t;

/* Gain Select */
typedef enum ADC_GSEL_enum
{
    ADC_GSEL_CLEAR_gc = (0x00), /* Gain Select - CLEAR */
    ADC_GSEL_SET_gc   = (0x40), /* Gain Select - SET */
} ADC_GSEL_t;

/* Input Polarity Mode */
typedef enum ADC_IPR_enum
{
    ADC_IPR_CLEAR_gc = (0x00), /* Input Polarity Mode - CLEAR */
    ADC_IPR_SET_gc   = (0x20), /* Input Polarity Mode - SET */
} ADC_IPR_t;

/* ADC Control and Status Register B-REFS2 */
typedef enum ADC_REFS2_enum
{
    ADC_REFS2_CLEAR_gc = (0x00), /* ADC Control and Status Register B-REFS2 - CLEAR */
    ADC_REFS2_SET_gc   = (0x10), /* ADC Control and Status Register B-REFS2 - SET */
} ADC_REFS2_t;

/* ADC Control and Status Register B-MUX5 */
typedef enum ADC_MUX5_enum
{
    ADC_MUX5_CLEAR_gc = (0x00), /* ADC Control and Status Register B-MUX5 - CLEAR */
    ADC_MUX5_SET_gc   = (0x08), /* ADC Control and Status Register B-MUX5 - SET */
} ADC_MUX5_t;

/* ADC Auto Trigger Sources */
typedef enum ADC_ADTS_enum
{
    ADC_ADTS_VAL_0x00_gc = (0x00), /* Free Running mode */
    ADC_ADTS_VAL_0x01_gc = (0x01), /* Analog Comparator */
    ADC_ADTS_VAL_0x02_gc = (0x02), /* External Interrupt Request 0 */
    ADC_ADTS_VAL_0x03_gc = (0x03), /* Timer/Counter0 Compare Match A */
    ADC_ADTS_VAL_0x04_gc = (0x04), /* Timer/Counter0 Overflow */
    ADC_ADTS_VAL_0x05_gc = (0x05), /* Timer/Counter1 Compare Match B */
    ADC_ADTS_VAL_0x06_gc = (0x06), /* Timer/Counter1 Overflow */
    ADC_ADTS_VAL_0x07_gc = (0x07), /* Watchdog Interrupt Request */
} ADC_ADTS_t;

/* ADC10 Digital input Disable */
typedef enum ADC_ADC10D_enum
{
    ADC_ADC10D_CLEAR_gc = (0x00), /* ADC10 Digital input Disable - CLEAR */
    ADC_ADC10D_SET_gc   = (0x80), /* ADC10 Digital input Disable - SET */
} ADC_ADC10D_t;

/* ADC9 Digital input Disable */
typedef enum ADC_ADC9D_enum
{
    ADC_ADC9D_CLEAR_gc = (0x00), /* ADC9 Digital input Disable - CLEAR */
    ADC_ADC9D_SET_gc   = (0x40), /* ADC9 Digital input Disable - SET */
} ADC_ADC9D_t;

/* ADC8 Digital input Disable */
typedef enum ADC_ADC8D_enum
{
    ADC_ADC8D_CLEAR_gc = (0x00), /* ADC8 Digital input Disable - CLEAR */
    ADC_ADC8D_SET_gc   = (0x20), /* ADC8 Digital input Disable - SET */
} ADC_ADC8D_t;

/* ADC7 Digital input Disable */
typedef enum ADC_ADC7D_enum
{
    ADC_ADC7D_CLEAR_gc = (0x00), /* ADC7 Digital input Disable - CLEAR */
    ADC_ADC7D_SET_gc   = (0x10), /* ADC7 Digital input Disable - SET */
} ADC_ADC7D_t;

/* ADC6 Digital input Disable */
typedef enum ADC_ADC6D_enum
{
    ADC_ADC6D_CLEAR_gc = (0x00), /* ADC6 Digital input Disable - CLEAR */
    ADC_ADC6D_SET_gc   = (0x80), /* ADC6 Digital input Disable - SET */
} ADC_ADC6D_t;

/* ADC5 Digital input Disable */
typedef enum ADC_ADC5D_enum
{
    ADC_ADC5D_CLEAR_gc = (0x00), /* ADC5 Digital input Disable - CLEAR */
    ADC_ADC5D_SET_gc   = (0x40), /* ADC5 Digital input Disable - SET */
} ADC_ADC5D_t;

/* ADC4 Digital input Disable */
typedef enum ADC_ADC4D_enum
{
    ADC_ADC4D_CLEAR_gc = (0x00), /* ADC4 Digital input Disable - CLEAR */
    ADC_ADC4D_SET_gc   = (0x20), /* ADC4 Digital input Disable - SET */
} ADC_ADC4D_t;

/* ADC3 Digital input Disable */
typedef enum ADC_ADC3D_enum
{
    ADC_ADC3D_CLEAR_gc = (0x00), /* ADC3 Digital input Disable - CLEAR */
    ADC_ADC3D_SET_gc   = (0x10), /* ADC3 Digital input Disable - SET */
} ADC_ADC3D_t;

/* AREF Digital Input Disable */
typedef enum ADC_AREFD_enum
{
    ADC_AREFD_CLEAR_gc = (0x00), /* AREF Digital Input Disable - CLEAR */
    ADC_AREFD_SET_gc   = (0x08), /* AREF Digital Input Disable - SET */
} ADC_AREFD_t;

/* ADC2 Digital input Disable */
typedef enum ADC_ADC2D_enum
{
    ADC_ADC2D_CLEAR_gc = (0x00), /* ADC2 Digital input Disable - CLEAR */
    ADC_ADC2D_SET_gc   = (0x04), /* ADC2 Digital input Disable - SET */
} ADC_ADC2D_t;

/* ADC1 Digital input Disable */
typedef enum ADC_ADC1D_enum
{
    ADC_ADC1D_CLEAR_gc = (0x00), /* ADC1 Digital input Disable - CLEAR */
    ADC_ADC1D_SET_gc   = (0x02), /* ADC1 Digital input Disable - SET */
} ADC_ADC1D_t;

/* ADC0 Digital input Disable */
typedef enum ADC_ADC0D_enum
{
    ADC_ADC0D_CLEAR_gc = (0x00), /* ADC0 Digital input Disable - CLEAR */
    ADC_ADC0D_SET_gc   = (0x01), /* ADC0 Digital input Disable - SET */
} ADC_ADC0D_t;

/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/

typedef struct AC_struct
{
    register8_t rsv_0x00[40]; /* RESERVED REGISTER BLOCK */
    register8_t ACSRA;        /* Analog Comparator Control And Status Register A */
    register8_t ACSRB;        /* Analog Comparator Control And Status Register B */
} AC_t;


/* Hysteresis Select */
typedef enum AC_HSEL_enum
{
    AC_HSEL_CLEAR_gc = (0x00), /* Hysteresis Select - CLEAR */
    AC_HSEL_SET_gc   = (0x80), /* Hysteresis Select - SET */
} AC_HSEL_t;

/* Hysteresis Level */
typedef enum AC_HLEV_enum
{
    AC_HLEV_CLEAR_gc = (0x00), /* Hysteresis Level - CLEAR */
    AC_HLEV_SET_gc   = (0x40), /* Hysteresis Level - SET */
} AC_HLEV_t;

/* Analog Comparator Multiplexer */
#define AC_ACSRB_ACM_gc(x) (x & 0x07)

/* Analog Comparator Disable */
typedef enum AC_ACD_enum
{
    AC_ACD_CLEAR_gc = (0x00), /* Analog Comparator Disable - CLEAR */
    AC_ACD_SET_gc   = (0x80), /* Analog Comparator Disable - SET */
} AC_ACD_t;

/* Analog Comparator Bandgap Select */
typedef enum AC_ACBG_enum
{
    AC_ACBG_CLEAR_gc = (0x00), /* Analog Comparator Bandgap Select - CLEAR */
    AC_ACBG_SET_gc   = (0x40), /* Analog Comparator Bandgap Select - SET */
} AC_ACBG_t;

/* Analog Compare Output */
typedef enum AC_ACO_enum
{
    AC_ACO_CLEAR_gc = (0x00), /* Analog Compare Output - CLEAR */
    AC_ACO_SET_gc   = (0x20), /* Analog Compare Output - SET */
} AC_ACO_t;

/* Analog Comparator Interrupt Flag */
typedef enum AC_ACI_enum
{
    AC_ACI_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Flag - CLEAR */
    AC_ACI_SET_gc   = (0x10), /* Analog Comparator Interrupt Flag - SET */
} AC_ACI_t;

/* Analog Comparator Interrupt Enable */
typedef enum AC_ACIE_enum
{
    AC_ACIE_CLEAR_gc = (0x00), /* Analog Comparator Interrupt Enable - CLEAR */
    AC_ACIE_SET_gc   = (0x08), /* Analog Comparator Interrupt Enable - SET */
} AC_ACIE_t;

/* Analog Comparator Multiplexer Enable */
typedef enum AC_ACME_enum
{
    AC_ACME_CLEAR_gc = (0x00), /* Analog Comparator Multiplexer Enable - CLEAR */
    AC_ACME_SET_gc   = (0x04), /* Analog Comparator Multiplexer Enable - SET */
} AC_ACME_t;

/* Analog Comparator Interrupt Mode Select bits */
typedef enum AC_ACIS_enum
{
    AC_ACIS_VAL_0x00_gc = (0x00), /* Interrupt on Toggle */
    AC_ACIS_VAL_0x01_gc = (0x01), /* Reserved */
    AC_ACIS_VAL_0x02_gc = (0x02), /* Interrupt on Falling Edge */
    AC_ACIS_VAL_0x03_gc = (0x03), /* Interrupt on Rising Edge */
} AC_ACIS_t;

/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/

typedef struct USI_struct
{
    register8_t rsv_0x00[45]; /* RESERVED REGISTER BLOCK */
    register8_t USICR;        /* USI Control Register */
    register8_t USISR;        /* USI Status Register */
    register8_t USIDR;        /* USI Data Register */
    register8_t USIBR;        /* USI Buffer Register */
    register8_t USIPP;        /* USI Pin Position */
} USI_t;


/* Start Condition Interrupt Flag */
typedef enum USI_USISIF_enum
{
    USI_USISIF_CLEAR_gc = (0x00), /* Start Condition Interrupt Flag - CLEAR */
    USI_USISIF_SET_gc   = (0x80), /* Start Condition Interrupt Flag - SET */
} USI_USISIF_t;

/* Counter Overflow Interrupt Flag */
typedef enum USI_USIOIF_enum
{
    USI_USIOIF_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Flag - CLEAR */
    USI_USIOIF_SET_gc   = (0x40), /* Counter Overflow Interrupt Flag - SET */
} USI_USIOIF_t;

/* Stop Condition Flag */
typedef enum USI_USIPF_enum
{
    USI_USIPF_CLEAR_gc = (0x00), /* Stop Condition Flag - CLEAR */
    USI_USIPF_SET_gc   = (0x20), /* Stop Condition Flag - SET */
} USI_USIPF_t;

/* Data Output Collision */
typedef enum USI_USIDC_enum
{
    USI_USIDC_CLEAR_gc = (0x00), /* Data Output Collision - CLEAR */
    USI_USIDC_SET_gc   = (0x10), /* Data Output Collision - SET */
} USI_USIDC_t;

/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
typedef enum USI_USISIE_enum
{
    USI_USISIE_CLEAR_gc = (0x00), /* Start Condition Interrupt Enable - CLEAR */
    USI_USISIE_SET_gc   = (0x80), /* Start Condition Interrupt Enable - SET */
} USI_USISIE_t;

/* Counter Overflow Interrupt Enable */
typedef enum USI_USIOIE_enum
{
    USI_USIOIE_CLEAR_gc = (0x00), /* Counter Overflow Interrupt Enable - CLEAR */
    USI_USIOIE_SET_gc   = (0x40), /* Counter Overflow Interrupt Enable - SET */
} USI_USIOIE_t;

/* USI Wire Mode Bits */
typedef enum USI_USIWM_enum
{
    USI_USIWM_VAL_0x00_gc = (0x00<<4), /* Normal Operation */
    USI_USIWM_VAL_0x01_gc = (0x01<<4), /* Three-Wire Mode */
    USI_USIWM_VAL_0x02_gc = (0x02<<4), /* Two-Wire Mode */
    USI_USIWM_VAL_0x03_gc = (0x03<<4), /* Two-Wire Mode Held Low */
} USI_USIWM_t;

/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
typedef enum USI_USICLK_enum
{
    USI_USICLK_CLEAR_gc = (0x00), /* Clock Strobe - CLEAR */
    USI_USICLK_SET_gc   = (0x02), /* Clock Strobe - SET */
} USI_USICLK_t;

/* Toggle Clock Port Pin */
typedef enum USI_USITC_enum
{
    USI_USITC_CLEAR_gc = (0x00), /* Toggle Clock Port Pin - CLEAR */
    USI_USITC_SET_gc   = (0x01), /* Toggle Clock Port Pin - SET */
} USI_USITC_t;

/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/

typedef struct EEPROM_struct
{
    register8_t rsv_0x00[60]; /* RESERVED REGISTER BLOCK */
    register8_t EECR;         /* EEPROM Control Register */
    register8_t EEDR;         /* EEPROM Data Register */
    _REGISTER16 (EEAR);       /* EEPROM Address Register  Bytes */
} EEPROM_t;


/* EEPROM Programming Mode Bits */
typedef enum EEPROM_EEPM_enum
{
    EEPROM_EEPM_VAL_0x00_gc = (0x00<<4), /* Erase and Write in one operation */
    EEPROM_EEPM_VAL_0x01_gc = (0x01<<4), /* Erase Only */
    EEPROM_EEPM_VAL_0x02_gc = (0x02<<4), /* Write Only */
} EEPROM_EEPM_t;

/* EEPROM Ready Interrupt Enable */
typedef enum EEPROM_EERIE_enum
{
    EEPROM_EERIE_CLEAR_gc = (0x00), /* EEPROM Ready Interrupt Enable - CLEAR */
    EEPROM_EERIE_SET_gc   = (0x08), /* EEPROM Ready Interrupt Enable - SET */
} EEPROM_EERIE_t;

/* EEPROM Master Write Enable */
typedef enum EEPROM_EEMPE_enum
{
    EEPROM_EEMPE_CLEAR_gc = (0x00), /* EEPROM Master Write Enable - CLEAR */
    EEPROM_EEMPE_SET_gc   = (0x04), /* EEPROM Master Write Enable - SET */
} EEPROM_EEMPE_t;

/* EEPROM Write Enable */
typedef enum EEPROM_EEPE_enum
{
    EEPROM_EEPE_CLEAR_gc = (0x00), /* EEPROM Write Enable - CLEAR */
    EEPROM_EEPE_SET_gc   = (0x02), /* EEPROM Write Enable - SET */
} EEPROM_EEPE_t;

/* EEPROM Read Enable */
typedef enum EEPROM_EERE_enum
{
    EEPROM_EERE_CLEAR_gc = (0x00), /* EEPROM Read Enable - CLEAR */
    EEPROM_EERE_SET_gc   = (0x01), /* EEPROM Read Enable - SET */
} EEPROM_EERE_t;

/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/

typedef struct WDT_struct
{
    register8_t rsv_0x00[65]; /* RESERVED REGISTER BLOCK */
    register8_t WDTCR;        /* Watchdog Timer Control Register */
} WDT_t;


/* Watchdog Timeout Interrupt Flag */
typedef enum WDT_WDIF_enum
{
    WDT_WDIF_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Flag - CLEAR */
    WDT_WDIF_SET_gc   = (0x80), /* Watchdog Timeout Interrupt Flag - SET */
} WDT_WDIF_t;

/* Watchdog Timeout Interrupt Enable */
typedef enum WDT_WDIE_enum
{
    WDT_WDIE_CLEAR_gc = (0x00), /* Watchdog Timeout Interrupt Enable - CLEAR */
    WDT_WDIE_SET_gc   = (0x40), /* Watchdog Timeout Interrupt Enable - SET */
} WDT_WDIE_t;

/* Watchdog Timer Prescaler Bits */
typedef enum WDT_WDP_enum
{
    WDT_WDP_VAL_0x00_gc = (0x00), /* Oscillator Cycles 2K */
    WDT_WDP_VAL_0x01_gc = (0x01), /* Oscillator Cycles 4K */
    WDT_WDP_VAL_0x02_gc = (0x02), /* Oscillator Cycles 8K */
    WDT_WDP_VAL_0x03_gc = (0x03), /* Oscillator Cycles 16K */
    WDT_WDP_VAL_0x04_gc = (0x04), /* Oscillator Cycles 32K */
    WDT_WDP_VAL_0x05_gc = (0x05), /* Oscillator Cycles 64K */
    WDT_WDP_VAL_0x06_gc = (0x06), /* Oscillator Cycles 128K */
    WDT_WDP_VAL_0x07_gc = (0x07), /* Oscillator Cycles 256K */
    WDT_WDP_VAL_0x08_gc = (0x08), /* Oscillator Cycles 512K */
    WDT_WDP_VAL_0x09_gc = (0x09), /* Oscillator Cycles 1024K */
} WDT_WDP_t;

/* Watchdog Change Enable */
typedef enum WDT_WDCE_enum
{
    WDT_WDCE_CLEAR_gc = (0x00), /* Watchdog Change Enable - CLEAR */
    WDT_WDCE_SET_gc   = (0x10), /* Watchdog Change Enable - SET */
} WDT_WDCE_t;

/* Watch Dog Enable */
typedef enum WDT_WDE_enum
{
    WDT_WDE_CLEAR_gc = (0x00), /* Watch Dog Enable - CLEAR */
    WDT_WDE_SET_gc   = (0x08), /* Watch Dog Enable - SET */
} WDT_WDE_t;

/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC0_struct
{
    register8_t rsv_0x00[50]; /* RESERVED REGISTER BLOCK */
    register8_t OCR0B;        /* Timer/Counter0 Output Compare Register */
    register8_t OCR0A;        /* Timer/Counter0 Output Compare Register */
    register8_t TCNT0H;       /* Timer/Counter0 High */
    register8_t TCCR0A;       /* Timer/Counter  Control Register A */
    register8_t rsv_0x36[28]; /* RESERVED REGISTER BLOCK */
    register8_t TCNT0L;       /* Timer/Counter0 Low */
    register8_t TCCR0B;       /* Timer/Counter Control Register B */
    register8_t rsv_0x54[4];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter0 Interrupt Flag register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC0_t;


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/

typedef struct TC1_struct
{
    register8_t rsv_0x00[32]; /* RESERVED REGISTER BLOCK */
    register8_t TCCR1E;       /* Timer/Counter1 Control Register E */
    register8_t rsv_0x21[35]; /* RESERVED REGISTER BLOCK */
    register8_t DT1;          /* Timer/Counter 1 Dead Time Value */
    register8_t TC1H;         /* Timer/Counter 1 Register High */
    register8_t TCCR1D;       /* Timer/Counter Control Register D */
    register8_t TCCR1C;       /* Timer/Counter Control Register C */
    register8_t rsv_0x48[2];  /* RESERVED REGISTER BLOCK */
    register8_t OCR1D;        /* Output compare register */
    register8_t OCR1C;        /* Output compare register */
    register8_t OCR1B;        /* Output Compare Register */
    register8_t OCR1A;        /* Output Compare Register */
    register8_t TCNT1;        /* Timer/Counter Register */
    register8_t TCCR1B;       /* Timer/Counter Control Register B */
    register8_t TCCR1A;       /* Timer/Counter Control Register A */
    register8_t rsv_0x51[7];  /* RESERVED REGISTER BLOCK */
    register8_t TIFR;         /* Timer/Counter Interrupt Flag Register */
    register8_t TIMSK;        /* Timer/Counter Interrupt Mask Register */
} TC1_t;


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
typedef enum TC0_OCIE0A_enum
{
    TC0_OCIE0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
    TC0_OCIE0A_SET_gc   = (0x10), /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */
} TC0_OCIE0A_t;

/* Timer/Counter0 Output Compare Match B Interrupt Enable */
typedef enum TC0_OCIE0B_enum
{
    TC0_OCIE0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
    TC0_OCIE0B_SET_gc   = (0x08), /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */
} TC0_OCIE0B_t;

/* Timer/Counter0 Overflow Interrupt Enable */
typedef enum TC0_TOIE0_enum
{
    TC0_TOIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
    TC0_TOIE0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Interrupt Enable - SET */
} TC0_TOIE0_t;

/* Timer/Counter0 Input Capture Interrupt Enable */
typedef enum TC0_TICIE0_enum
{
    TC0_TICIE0_CLEAR_gc = (0x00), /* Timer/Counter0 Input Capture Interrupt Enable - CLEAR */
    TC0_TICIE0_SET_gc   = (0x01), /* Timer/Counter0 Input Capture Interrupt Enable - SET */
} TC0_TICIE0_t;

/* Timer/Counter0 Output Compare Flag 0A */
typedef enum TC0_OCF0A_enum
{
    TC0_OCF0A_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
    TC0_OCF0A_SET_gc   = (0x10), /* Timer/Counter0 Output Compare Flag 0A - SET */
} TC0_OCF0A_t;

/* Timer/Counter0 Output Compare Flag 0B */
typedef enum TC0_OCF0B_enum
{
    TC0_OCF0B_CLEAR_gc = (0x00), /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
    TC0_OCF0B_SET_gc   = (0x08), /* Timer/Counter0 Output Compare Flag 0B - SET */
} TC0_OCF0B_t;

/* Timer/Counter0 Overflow Flag */
typedef enum TC0_TOV0_enum
{
    TC0_TOV0_CLEAR_gc = (0x00), /* Timer/Counter0 Overflow Flag - CLEAR */
    TC0_TOV0_SET_gc   = (0x02), /* Timer/Counter0 Overflow Flag - SET */
} TC0_TOV0_t;

/* Timer/Counter0 Input Capture Flag */
typedef enum TC0_ICF0_enum
{
    TC0_ICF0_CLEAR_gc = (0x00), /* Timer/Counter0 Input Capture Flag - CLEAR */
    TC0_ICF0_SET_gc   = (0x01), /* Timer/Counter0 Input Capture Flag - SET */
} TC0_ICF0_t;

/* Timer/Counter 0 Width */
typedef enum TC0_TCW0_enum
{
    TC0_TCW0_CLEAR_gc = (0x00), /* Timer/Counter 0 Width - CLEAR */
    TC0_TCW0_SET_gc   = (0x80), /* Timer/Counter 0 Width - SET */
} TC0_TCW0_t;

/* Input Capture Mode Enable */
typedef enum TC0_ICEN0_enum
{
    TC0_ICEN0_CLEAR_gc = (0x00), /* Input Capture Mode Enable - CLEAR */
    TC0_ICEN0_SET_gc   = (0x40), /* Input Capture Mode Enable - SET */
} TC0_ICEN0_t;

/* Input Capture Noice Canceler */
typedef enum TC0_ICNC0_enum
{
    TC0_ICNC0_CLEAR_gc = (0x00), /* Input Capture Noice Canceler - CLEAR */
    TC0_ICNC0_SET_gc   = (0x20), /* Input Capture Noice Canceler - SET */
} TC0_ICNC0_t;

/* Input Capture Edge Select */
typedef enum TC0_ICES0_enum
{
    TC0_ICES0_CLEAR_gc = (0x00), /* Input Capture Edge Select - CLEAR */
    TC0_ICES0_SET_gc   = (0x10), /* Input Capture Edge Select - SET */
} TC0_ICES0_t;

/* Analog Comparator Input Capture Enable */
typedef enum TC0_ACIC0_enum
{
    TC0_ACIC0_CLEAR_gc = (0x00), /* Analog Comparator Input Capture Enable - CLEAR */
    TC0_ACIC0_SET_gc   = (0x08), /* Analog Comparator Input Capture Enable - SET */
} TC0_ACIC0_t;

/* Waveform Generation Mode */
typedef enum TC0_WGM00_enum
{
    TC0_WGM00_CLEAR_gc = (0x00), /* Waveform Generation Mode - CLEAR */
    TC0_WGM00_SET_gc   = (0x01), /* Waveform Generation Mode - SET */
} TC0_WGM00_t;

/* Timer/Counter Synchronization Mode */
typedef enum TC0_TSM_enum
{
    TC0_TSM_CLEAR_gc = (0x00), /* Timer/Counter Synchronization Mode - CLEAR */
    TC0_TSM_SET_gc   = (0x10), /* Timer/Counter Synchronization Mode - SET */
} TC0_TSM_t;

/* Timer/Counter 0 Prescaler Reset */
typedef enum TC0_PSR0_enum
{
    TC0_PSR0_CLEAR_gc = (0x00), /* Timer/Counter 0 Prescaler Reset - CLEAR */
    TC0_PSR0_SET_gc   = (0x08), /* Timer/Counter 0 Prescaler Reset - SET */
} TC0_PSR0_t;

/* Clock Select */
typedef enum TC0_CS0_enum
{
    TC0_CS0_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC0_CS0_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC0_CS0_VAL_0x02_gc = (0x02), /* Running, CLK/8 */
    TC0_CS0_VAL_0x03_gc = (0x03), /* Running, CLK/64 */
    TC0_CS0_VAL_0x04_gc = (0x04), /* Running, CLK/256 */
    TC0_CS0_VAL_0x05_gc = (0x05), /* Running, CLK/1024 */
    TC0_CS0_VAL_0x06_gc = (0x06), /* Running, ExtClk Tx Falling Edge */
    TC0_CS0_VAL_0x07_gc = (0x07), /* Running, ExtClk Tx Rising Edge */
} TC0_CS0_t;

/* Compare Output Mode, Bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Force Output Compare Match 1A */
typedef enum TC1_FOC1A_enum
{
    TC1_FOC1A_CLEAR_gc = (0x00), /* Force Output Compare Match 1A - CLEAR */
    TC1_FOC1A_SET_gc   = (0x08), /* Force Output Compare Match 1A - SET */
} TC1_FOC1A_t;

/* Force Output Compare Match 1B */
typedef enum TC1_FOC1B_enum
{
    TC1_FOC1B_CLEAR_gc = (0x00), /* Force Output Compare Match 1B - CLEAR */
    TC1_FOC1B_SET_gc   = (0x04), /* Force Output Compare Match 1B - SET */
} TC1_FOC1B_t;

/* Pulse Width Modulator Enable */
typedef enum TC1_PWM1A_enum
{
    TC1_PWM1A_CLEAR_gc = (0x00), /* Pulse Width Modulator Enable - CLEAR */
    TC1_PWM1A_SET_gc   = (0x02), /* Pulse Width Modulator Enable - SET */
} TC1_PWM1A_t;

/* Pulse Width Modulator Enable */
typedef enum TC1_PWM1B_enum
{
    TC1_PWM1B_CLEAR_gc = (0x00), /* Pulse Width Modulator Enable - CLEAR */
    TC1_PWM1B_SET_gc   = (0x01), /* Pulse Width Modulator Enable - SET */
} TC1_PWM1B_t;

/* PWM Inversion Mode */
typedef enum TC1_PWM1X_enum
{
    TC1_PWM1X_CLEAR_gc = (0x00), /* PWM Inversion Mode - CLEAR */
    TC1_PWM1X_SET_gc   = (0x80), /* PWM Inversion Mode - SET */
} TC1_PWM1X_t;

/* Timer/Counter 1 Prescaler reset */
typedef enum TC1_PSR1_enum
{
    TC1_PSR1_CLEAR_gc = (0x00), /* Timer/Counter 1 Prescaler reset - CLEAR */
    TC1_PSR1_SET_gc   = (0x40), /* Timer/Counter 1 Prescaler reset - SET */
} TC1_PSR1_t;

/* Dead Time Prescaler */
typedef enum TC1_DTPS1_enum
{
    TC1_DTPS1_VAL_0x00_gc = (0x00<<4), /* 1x */
    TC1_DTPS1_VAL_0x01_gc = (0x01<<4), /* 2x */
    TC1_DTPS1_VAL_0x02_gc = (0x02<<4), /* 4x */
    TC1_DTPS1_VAL_0x03_gc = (0x03<<4), /* 8x */
} TC1_DTPS1_t;

/* Clock Select Bits */
typedef enum TC1_CS1_enum
{
    TC1_CS1_VAL_0x00_gc = (0x00), /* No Clock Source (Stopped) */
    TC1_CS1_VAL_0x01_gc = (0x01), /* Running, No Prescaling */
    TC1_CS1_VAL_0x02_gc = (0x02), /* Running, CLK/2 */
    TC1_CS1_VAL_0x03_gc = (0x03), /* Running, CLK/4 */
    TC1_CS1_VAL_0x04_gc = (0x04), /* Running, CLK/8 */
    TC1_CS1_VAL_0x05_gc = (0x05), /* Running, CLK/16 */
    TC1_CS1_VAL_0x06_gc = (0x06), /* Running, CLK/32 */
    TC1_CS1_VAL_0x07_gc = (0x07), /* Running, CLK/64 */
    TC1_CS1_VAL_0x08_gc = (0x08), /* Running, CLK/128 */
    TC1_CS1_VAL_0x09_gc = (0x09), /* Running, CLK/256 */
    TC1_CS1_VAL_0x0A_gc = (0x0A), /* Running, CLK/512 */
    TC1_CS1_VAL_0x0B_gc = (0x0B), /* Running, CLK/1024 */
    TC1_CS1_VAL_0x0C_gc = (0x0C), /* Running, CLK/2048 */
    TC1_CS1_VAL_0x0D_gc = (0x0D), /* Running, CLK/4096 */
    TC1_CS1_VAL_0x0E_gc = (0x0E), /* Running, CLK/8192 */
    TC1_CS1_VAL_0x0F_gc = (0x0F), /* Running, CLK/16384 */
} TC1_CS1_t;

/* COM1A1 Shadow Bit */
typedef enum TC1_COM1A1S_enum
{
    TC1_COM1A1S_CLEAR_gc = (0x00), /* COM1A1 Shadow Bit - CLEAR */
    TC1_COM1A1S_SET_gc   = (0x80), /* COM1A1 Shadow Bit - SET */
} TC1_COM1A1S_t;

/* COM1A0 Shadow Bit */
typedef enum TC1_COM1A0S_enum
{
    TC1_COM1A0S_CLEAR_gc = (0x00), /* COM1A0 Shadow Bit - CLEAR */
    TC1_COM1A0S_SET_gc   = (0x40), /* COM1A0 Shadow Bit - SET */
} TC1_COM1A0S_t;

/* COM1B1 Shadow Bit */
typedef enum TC1_COM1B1S_enum
{
    TC1_COM1B1S_CLEAR_gc = (0x00), /* COM1B1 Shadow Bit - CLEAR */
    TC1_COM1B1S_SET_gc   = (0x20), /* COM1B1 Shadow Bit - SET */
} TC1_COM1B1S_t;

/* COM1B0 Shadow Bit */
typedef enum TC1_COM1B0S_enum
{
    TC1_COM1B0S_CLEAR_gc = (0x00), /* COM1B0 Shadow Bit - CLEAR */
    TC1_COM1B0S_SET_gc   = (0x10), /* COM1B0 Shadow Bit - SET */
} TC1_COM1B0S_t;

/* Comparator D output mode */
#define TC1_TCCR1C_COM1D_gc(x) ((x<<2) & 0x0C)

/* Force Output Compare Match 1D */
typedef enum TC1_FOC1D_enum
{
    TC1_FOC1D_CLEAR_gc = (0x00), /* Force Output Compare Match 1D - CLEAR */
    TC1_FOC1D_SET_gc   = (0x02), /* Force Output Compare Match 1D - SET */
} TC1_FOC1D_t;

/* Pulse Width Modulator D Enable */
typedef enum TC1_PWM1D_enum
{
    TC1_PWM1D_CLEAR_gc = (0x00), /* Pulse Width Modulator D Enable - CLEAR */
    TC1_PWM1D_SET_gc   = (0x01), /* Pulse Width Modulator D Enable - SET */
} TC1_PWM1D_t;

/* Fault Protection Interrupt Enable */
typedef enum TC1_FPIE1_enum
{
    TC1_FPIE1_CLEAR_gc = (0x00), /* Fault Protection Interrupt Enable - CLEAR */
    TC1_FPIE1_SET_gc   = (0x80), /* Fault Protection Interrupt Enable - SET */
} TC1_FPIE1_t;

/* Fault Protection Mode Enable */
typedef enum TC1_FPEN1_enum
{
    TC1_FPEN1_CLEAR_gc = (0x00), /* Fault Protection Mode Enable - CLEAR */
    TC1_FPEN1_SET_gc   = (0x40), /* Fault Protection Mode Enable - SET */
} TC1_FPEN1_t;

/* Fault Protection Noise Canceler */
typedef enum TC1_FPNC1_enum
{
    TC1_FPNC1_CLEAR_gc = (0x00), /* Fault Protection Noise Canceler - CLEAR */
    TC1_FPNC1_SET_gc   = (0x20), /* Fault Protection Noise Canceler - SET */
} TC1_FPNC1_t;

/* Fault Protection Edge Select */
typedef enum TC1_FPES1_enum
{
    TC1_FPES1_CLEAR_gc = (0x00), /* Fault Protection Edge Select - CLEAR */
    TC1_FPES1_SET_gc   = (0x10), /* Fault Protection Edge Select - SET */
} TC1_FPES1_t;

/* Fault Protection Analog Comparator Enable */
typedef enum TC1_FPAC1_enum
{
    TC1_FPAC1_CLEAR_gc = (0x00), /* Fault Protection Analog Comparator Enable - CLEAR */
    TC1_FPAC1_SET_gc   = (0x08), /* Fault Protection Analog Comparator Enable - SET */
} TC1_FPAC1_t;

/* Fault Protection Interrupt Flag */
typedef enum TC1_FPF1_enum
{
    TC1_FPF1_CLEAR_gc = (0x00), /* Fault Protection Interrupt Flag - CLEAR */
    TC1_FPF1_SET_gc   = (0x04), /* Fault Protection Interrupt Flag - SET */
} TC1_FPF1_t;

/* Waveform Generation Mode Bit */
typedef enum TC1_WGM1_enum
{
    TC1_WGM1_VAL_0x00_gc = (0x00), /* Fast PWM (NB! PWMx must be set!) */
    TC1_WGM1_VAL_0x01_gc = (0x01), /* Phase and Frequency Correct PWM */
    TC1_WGM1_VAL_0x02_gc = (0x02), /* PWM6/Single-slope */
    TC1_WGM1_VAL_0x03_gc = (0x03), /* PWM6/Dual-slope */
} TC1_WGM1_t;

/* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable */
typedef enum TC1_OCIE1D_enum
{
    TC1_OCIE1D_CLEAR_gc = (0x00), /* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
    TC1_OCIE1D_SET_gc   = (0x80), /* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable - SET */
} TC1_OCIE1D_t;

/* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable */
typedef enum TC1_OCIE1A_enum
{
    TC1_OCIE1A_CLEAR_gc = (0x00), /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
    TC1_OCIE1A_SET_gc   = (0x40), /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - SET */
} TC1_OCIE1A_t;

/* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable */
typedef enum TC1_OCIE1B_enum
{
    TC1_OCIE1B_CLEAR_gc = (0x00), /* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
    TC1_OCIE1B_SET_gc   = (0x20), /* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable - SET */
} TC1_OCIE1B_t;

/* Timer/Counter1 Overflow Interrupt Enable */
typedef enum TC1_TOIE1_enum
{
    TC1_TOIE1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
    TC1_TOIE1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Interrupt Enable - SET */
} TC1_TOIE1_t;

/* Timer/Counter1 Output Compare Flag 1D */
typedef enum TC1_OCF1D_enum
{
    TC1_OCF1D_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag 1D - CLEAR */
    TC1_OCF1D_SET_gc   = (0x80), /* Timer/Counter1 Output Compare Flag 1D - SET */
} TC1_OCF1D_t;

/* Timer/Counter1 Output Compare Flag 1A */
typedef enum TC1_OCF1A_enum
{
    TC1_OCF1A_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag 1A - CLEAR */
    TC1_OCF1A_SET_gc   = (0x40), /* Timer/Counter1 Output Compare Flag 1A - SET */
} TC1_OCF1A_t;

/* Timer/Counter1 Output Compare Flag 1B */
typedef enum TC1_OCF1B_enum
{
    TC1_OCF1B_CLEAR_gc = (0x00), /* Timer/Counter1 Output Compare Flag 1B - CLEAR */
    TC1_OCF1B_SET_gc   = (0x20), /* Timer/Counter1 Output Compare Flag 1B - SET */
} TC1_OCF1B_t;

/* Timer/Counter1 Overflow Flag */
typedef enum TC1_TOV1_enum
{
    TC1_TOV1_CLEAR_gc = (0x00), /* Timer/Counter1 Overflow Flag - CLEAR */
    TC1_TOV1_SET_gc   = (0x04), /* Timer/Counter1 Overflow Flag - SET */
} TC1_TOV1_t;

/* Timer/Counter 1 Dead Time Value-DT1H */
#define TC1_DT1_DT1H_gc(x) ((x<<4) & 0xF0)

/* Timer/Counter 1 Dead Time Value-DT1L */
#define TC1_DT1_DT1L_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/

typedef struct BOOT_LOAD_struct
{
    register8_t rsv_0x00[87]; /* RESERVED REGISTER BLOCK */
    register8_t SPMCSR;       /* Store Program Memory Control Register */
} BOOT_LOAD_t;


/* Clear temporary page buffer */
typedef enum BOOT_LOAD_CTPB_enum
{
    BOOT_LOAD_CTPB_CLEAR_gc = (0x00), /* Clear temporary page buffer - CLEAR */
    BOOT_LOAD_CTPB_SET_gc   = (0x10), /* Clear temporary page buffer - SET */
} BOOT_LOAD_CTPB_t;

/* Read fuse and lock bits */
typedef enum BOOT_LOAD_RFLB_enum
{
    BOOT_LOAD_RFLB_CLEAR_gc = (0x00), /* Read fuse and lock bits - CLEAR */
    BOOT_LOAD_RFLB_SET_gc   = (0x08), /* Read fuse and lock bits - SET */
} BOOT_LOAD_RFLB_t;

/* Page Write */
typedef enum BOOT_LOAD_PGWRT_enum
{
    BOOT_LOAD_PGWRT_CLEAR_gc = (0x00), /* Page Write - CLEAR */
    BOOT_LOAD_PGWRT_SET_gc   = (0x04), /* Page Write - SET */
} BOOT_LOAD_PGWRT_t;

/* Page Erase */
typedef enum BOOT_LOAD_PGERS_enum
{
    BOOT_LOAD_PGERS_CLEAR_gc = (0x00), /* Page Erase - CLEAR */
    BOOT_LOAD_PGERS_SET_gc   = (0x02), /* Page Erase - SET */
} BOOT_LOAD_PGERS_t;

/* Store Program Memory Enable */
typedef enum BOOT_LOAD_SPMEN_enum
{
    BOOT_LOAD_SPMEN_CLEAR_gc = (0x00), /* Store Program Memory Enable - CLEAR */
    BOOT_LOAD_SPMEN_SET_gc   = (0x01), /* Store Program Memory Enable - SET */
} BOOT_LOAD_SPMEN_t;

/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/

typedef struct EXINT_struct
{
    register8_t rsv_0x00[66]; /* RESERVED REGISTER BLOCK */
    register8_t PCMSK1;       /* Pin Change Enable Mask 1 */
    register8_t PCMSK0;       /* Pin Change Enable Mask 0 */
    register8_t rsv_0x44[17]; /* RESERVED REGISTER BLOCK */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t rsv_0x56[4];  /* RESERVED REGISTER BLOCK */
    register8_t GIFR;         /* General Interrupt Flag register */
    register8_t GIMSK;        /* General Interrupt Mask Register */
} EXINT_t;


/* Interrupt Sense Control 0 Bit 1 */
typedef enum EXINT_ISC01_enum
{
    EXINT_ISC01_CLEAR_gc = (0x00), /* Interrupt Sense Control 0 Bit 1 - CLEAR */
    EXINT_ISC01_SET_gc   = (0x02), /* Interrupt Sense Control 0 Bit 1 - SET */
} EXINT_ISC01_t;

/* Interrupt Sense Control 0 Bit 0 */
typedef enum EXINT_ISC00_enum
{
    EXINT_ISC00_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    EXINT_ISC00_VAL_0x01_gc = (0x01), /* Any Logical Change of INTX */
    EXINT_ISC00_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    EXINT_ISC00_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} EXINT_ISC00_t;

/* External Interrupt Request 1 Enable */
#define EXINT_GIMSK_INT_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flags */
#define EXINT_GIFR_INTF_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Flag */
typedef enum EXINT_PCIF_enum
{
    EXINT_PCIF_CLEAR_gc = (0x00), /* Pin Change Interrupt Flag - CLEAR */
    EXINT_PCIF_SET_gc   = (0x20), /* Pin Change Interrupt Flag - SET */
} EXINT_PCIF_t;

/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/

typedef struct CPU_struct
{
    register8_t rsv_0x00[42]; /* RESERVED REGISTER BLOCK */
    register8_t GPIOR0;       /* General purpose register 0 */
    register8_t GPIOR1;       /* General Purpose register 1 */
    register8_t GPIOR2;       /* General Purpose IO register 2 */
    register8_t rsv_0x2D[19]; /* RESERVED REGISTER BLOCK */
    register8_t DWDR;         /* debugWire data register */
    register8_t rsv_0x41[7];  /* RESERVED REGISTER BLOCK */
    register8_t CLKPR;        /* Clock Prescale Register */
    register8_t PLLCSR;       /* PLL Control and status register */
    register8_t rsv_0x4A[7];  /* RESERVED REGISTER BLOCK */
    register8_t OSCCAL;       /* Oscillator Calibration Register */
    register8_t rsv_0x52[2];  /* RESERVED REGISTER BLOCK */
    register8_t MCUSR;        /* MCU Status register */
    register8_t MCUCR;        /* MCU Control Register */
    register8_t PRR;          /* Power Reduction Register */
    register8_t rsv_0x57[6];  /* RESERVED REGISTER BLOCK */
    register8_t SPL;          /* Stack Pointer Low Byte */
    register8_t rsv_0x5E;     /* RESERVED REGISTER */
    register8_t SREG;         /* Status Register */
} CPU_t;


/* Global Interrupt Enable */
typedef enum CPU_I_enum
{
    CPU_I_CLEAR_gc = (0x00), /* Global Interrupt Enable - CLEAR */
    CPU_I_SET_gc   = (0x80), /* Global Interrupt Enable - SET */
} CPU_I_t;

/* Bit Copy Storage */
typedef enum CPU_T_enum
{
    CPU_T_CLEAR_gc = (0x00), /* Bit Copy Storage - CLEAR */
    CPU_T_SET_gc   = (0x40), /* Bit Copy Storage - SET */
} CPU_T_t;

/* Half Carry Flag */
typedef enum CPU_H_enum
{
    CPU_H_CLEAR_gc = (0x00), /* Half Carry Flag - CLEAR */
    CPU_H_SET_gc   = (0x20), /* Half Carry Flag - SET */
} CPU_H_t;

/* Sign Bit */
typedef enum CPU_S_enum
{
    CPU_S_CLEAR_gc = (0x00), /* Sign Bit - CLEAR */
    CPU_S_SET_gc   = (0x10), /* Sign Bit - SET */
} CPU_S_t;

/* Two's Complement Overflow Flag */
typedef enum CPU_V_enum
{
    CPU_V_CLEAR_gc = (0x00), /* Two's Complement Overflow Flag - CLEAR */
    CPU_V_SET_gc   = (0x08), /* Two's Complement Overflow Flag - SET */
} CPU_V_t;

/* Negative Flag */
typedef enum CPU_N_enum
{
    CPU_N_CLEAR_gc = (0x00), /* Negative Flag - CLEAR */
    CPU_N_SET_gc   = (0x04), /* Negative Flag - SET */
} CPU_N_t;

/* Zero Flag */
typedef enum CPU_Z_enum
{
    CPU_Z_CLEAR_gc = (0x00), /* Zero Flag - CLEAR */
    CPU_Z_SET_gc   = (0x02), /* Zero Flag - SET */
} CPU_Z_t;

/* Carry Flag */
typedef enum CPU_C_enum
{
    CPU_C_CLEAR_gc = (0x00), /* Carry Flag - CLEAR */
    CPU_C_SET_gc   = (0x01), /* Carry Flag - SET */
} CPU_C_t;

/* Power Reduction Timer/Counter1 */
typedef enum CPU_PRTIM1_enum
{
    CPU_PRTIM1_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter1 - CLEAR */
    CPU_PRTIM1_SET_gc   = (0x08), /* Power Reduction Timer/Counter1 - SET */
} CPU_PRTIM1_t;

/* Power Reduction Timer/Counter0 */
typedef enum CPU_PRTIM0_enum
{
    CPU_PRTIM0_CLEAR_gc = (0x00), /* Power Reduction Timer/Counter0 - CLEAR */
    CPU_PRTIM0_SET_gc   = (0x04), /* Power Reduction Timer/Counter0 - SET */
} CPU_PRTIM0_t;

/* Power Reduction USI */
typedef enum CPU_PRUSI_enum
{
    CPU_PRUSI_CLEAR_gc = (0x00), /* Power Reduction USI - CLEAR */
    CPU_PRUSI_SET_gc   = (0x02), /* Power Reduction USI - SET */
} CPU_PRUSI_t;

/* Power Reduction ADC */
typedef enum CPU_PRADC_enum
{
    CPU_PRADC_CLEAR_gc = (0x00), /* Power Reduction ADC - CLEAR */
    CPU_PRADC_SET_gc   = (0x01), /* Power Reduction ADC - SET */
} CPU_PRADC_t;

/* BOD Sleep */
typedef enum CPU_BODS_enum
{
    CPU_BODS_CLEAR_gc = (0x00), /* BOD Sleep - CLEAR */
    CPU_BODS_SET_gc   = (0x80), /* BOD Sleep - SET */
} CPU_BODS_t;

/* Pull-up Disable */
typedef enum CPU_PUD_enum
{
    CPU_PUD_CLEAR_gc = (0x00), /* Pull-up Disable - CLEAR */
    CPU_PUD_SET_gc   = (0x40), /* Pull-up Disable - SET */
} CPU_PUD_t;

/* Sleep Enable */
typedef enum CPU_SE_enum
{
    CPU_SE_CLEAR_gc = (0x00), /* Sleep Enable - CLEAR */
    CPU_SE_SET_gc   = (0x20), /* Sleep Enable - SET */
} CPU_SE_t;

/* Sleep Mode Select Bits */
typedef enum CPU_SM_enum
{
    CPU_SM_IDLE_gc  = (0x00<<3), /* Idle */
    CPU_SM_ADC_gc   = (0x01<<3), /* ADC Noise Reduction (If Available) */
    CPU_SM_PDOWN_gc = (0x02<<3), /* Power Down */
    CPU_SM_STDBY_gc = (0x03<<3), /* Standby */
} CPU_SM_t;

/* BOD Sleep Enable */
typedef enum CPU_BODSE_enum
{
    CPU_BODSE_CLEAR_gc = (0x00), /* BOD Sleep Enable - CLEAR */
    CPU_BODSE_SET_gc   = (0x04), /* BOD Sleep Enable - SET */
} CPU_BODSE_t;

/* Interrupt Sense Control 0 bits */
typedef enum CPU_ISC0_enum
{
    CPU_ISC0_VAL_0x00_gc = (0x00), /* Low Level of INTX */
    CPU_ISC0_VAL_0x01_gc = (0x01), /* Any Logical Change in INTX */
    CPU_ISC0_VAL_0x02_gc = (0x02), /* Falling Edge of INTX */
    CPU_ISC0_VAL_0x03_gc = (0x03), /* Rising Edge of INTX */
} CPU_ISC0_t;

/* Watchdog Reset Flag */
typedef enum CPU_WDRF_enum
{
    CPU_WDRF_CLEAR_gc = (0x00), /* Watchdog Reset Flag - CLEAR */
    CPU_WDRF_SET_gc   = (0x08), /* Watchdog Reset Flag - SET */
} CPU_WDRF_t;

/* Brown-out Reset Flag */
typedef enum CPU_BORF_enum
{
    CPU_BORF_CLEAR_gc = (0x00), /* Brown-out Reset Flag - CLEAR */
    CPU_BORF_SET_gc   = (0x04), /* Brown-out Reset Flag - SET */
} CPU_BORF_t;

/* External Reset Flag */
typedef enum CPU_EXTRF_enum
{
    CPU_EXTRF_CLEAR_gc = (0x00), /* External Reset Flag - CLEAR */
    CPU_EXTRF_SET_gc   = (0x02), /* External Reset Flag - SET */
} CPU_EXTRF_t;

/* Power-On Reset Flag */
typedef enum CPU_PORF_enum
{
    CPU_PORF_CLEAR_gc = (0x00), /* Power-On Reset Flag - CLEAR */
    CPU_PORF_SET_gc   = (0x01), /* Power-On Reset Flag - SET */
} CPU_PORF_t;

/* Clock Prescaler Change Enable */
typedef enum CPU_CLKPCE_enum
{
    CPU_CLKPCE_CLEAR_gc = (0x00), /* Clock Prescaler Change Enable - CLEAR */
    CPU_CLKPCE_SET_gc   = (0x80), /* Clock Prescaler Change Enable - SET */
} CPU_CLKPCE_t;

/* Clock Prescaler Select Bits */
typedef enum CPU_CLKPS_enum
{
    CPU_CLKPS_VAL_0x00_gc = (0x00), /* 1 */
    CPU_CLKPS_VAL_0x01_gc = (0x01), /* 2 */
    CPU_CLKPS_VAL_0x02_gc = (0x02), /* 4 */
    CPU_CLKPS_VAL_0x03_gc = (0x03), /* 8 */
    CPU_CLKPS_VAL_0x04_gc = (0x04), /* 16 */
    CPU_CLKPS_VAL_0x05_gc = (0x05), /* 32 */
    CPU_CLKPS_VAL_0x06_gc = (0x06), /* 64 */
    CPU_CLKPS_VAL_0x07_gc = (0x07), /* 128 */
    CPU_CLKPS_VAL_0x08_gc = (0x08), /* 256 */
} CPU_CLKPS_t;

/* Low speed mode */
typedef enum CPU_LSM_enum
{
    CPU_LSM_CLEAR_gc = (0x00), /* Low speed mode - CLEAR */
    CPU_LSM_SET_gc   = (0x80), /* Low speed mode - SET */
} CPU_LSM_t;

/* PCK Enable */
typedef enum CPU_PCKE_enum
{
    CPU_PCKE_CLEAR_gc = (0x00), /* PCK Enable - CLEAR */
    CPU_PCKE_SET_gc   = (0x04), /* PCK Enable - SET */
} CPU_PCKE_t;

/* PLL Enable */
typedef enum CPU_PLLE_enum
{
    CPU_PLLE_CLEAR_gc = (0x00), /* PLL Enable - CLEAR */
    CPU_PLLE_SET_gc   = (0x02), /* PLL Enable - SET */
} CPU_PLLE_t;

/* PLL Lock detector */
typedef enum CPU_PLOCK_enum
{
    CPU_PLOCK_CLEAR_gc = (0x00), /* PLL Lock detector - CLEAR */
    CPU_PLOCK_SET_gc   = (0x01), /* PLL Lock detector - SET */
} CPU_PLOCK_t;
/*
================================================================================
IO Module Instances. Mapped to memory.
================================================================================
*/

#define PORTA     (*(PORTA_t *) 0x0000)     /* I/O Port */
#define PORTB     (*(PORTB_t *) 0x0000)     /* I/O Port */
#define ADC       (*(ADC_t *) 0x0000)       /* Analog-to-Digital Converter */
#define AC        (*(AC_t *) 0x0000)        /* Analog Comparator */
#define USI       (*(USI_t *) 0x0000)       /* Universal Serial Interface */
#define EEPROM    (*(EEPROM_t *) 0x0000)    /* EEPROM */
#define WDT       (*(WDT_t *) 0x0000)       /* Watchdog Timer */
#define TC0       (*(TC0_t *) 0x0000)       /* Timer/Counter, 8-bit */
#define TC1       (*(TC1_t *) 0x0000)       /* Timer/Counter, 8-bit */
#define BOOT_LOAD (*(BOOT_LOAD_t *) 0x0000) /* Bootloader */
#define EXINT     (*(EXINT_t *) 0x0000)     /* External Interrupts */
#define CPU       (*(CPU_t *) 0x0000)       /* CPU Registers */
#define FUSE      (*(FUSE_t *) 0x0000)      /* Fuses */
#define LOCKBIT   (*(LOCKBIT_t *) 0x0000)   /* Lockbits */
#else
/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
ASM LANGUAGE - ONLY
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/


/*
--------------------------------------------------------------------------------
FUSE - Fuses
--------------------------------------------------------------------------------
*/


/* Self Programming enable */
#define FUSE_SELFPRGEN_CLEAR_gc (0x00) /* Self Programming enable - CLEAR */
#define FUSE_SELFPRGEN_SET_gc   (0x01) /* Self Programming enable - SET */


/* Reset Disabled (Enable PB7 as i/o pin) */
#define FUSE_RSTDISBL_CLEAR_gc (0x00) /* Reset Disabled (Enable PB7 as i/o pin) - CLEAR */
#define FUSE_RSTDISBL_SET_gc   (0x80) /* Reset Disabled (Enable PB7 as i/o pin) - SET */


/* Debug Wire enable */
#define FUSE_DWEN_CLEAR_gc (0x00) /* Debug Wire enable - CLEAR */
#define FUSE_DWEN_SET_gc   (0x40) /* Debug Wire enable - SET */


/* Serial program downloading (SPI) enabled */
#define FUSE_SPIEN_CLEAR_gc (0x00) /* Serial program downloading (SPI) enabled - CLEAR */
#define FUSE_SPIEN_SET_gc   (0x20) /* Serial program downloading (SPI) enabled - SET */


/* Watch-dog Timer always on */
#define FUSE_WDTON_CLEAR_gc (0x00) /* Watch-dog Timer always on - CLEAR */
#define FUSE_WDTON_SET_gc   (0x10) /* Watch-dog Timer always on - SET */


/* Preserve EEPROM through the Chip Erase cycle */
#define FUSE_EESAVE_CLEAR_gc (0x00) /* Preserve EEPROM through the Chip Erase cycle - CLEAR */
#define FUSE_EESAVE_SET_gc   (0x08) /* Preserve EEPROM through the Chip Erase cycle - SET */


/* Brown-out Detector trigger level */
#define FUSE_BODLEVEL_4V3_gc      (0x04) /* Brown-out detection at VCC=4.3 V */
#define FUSE_BODLEVEL_2V7_gc      (0x05) /* Brown-out detection at VCC=2.7 V */
#define FUSE_BODLEVEL_1V8_gc      (0x06) /* Brown-out detection at VCC=1.8 V */
#define FUSE_BODLEVEL_2V3_gc      (0x03) /* Brown-out detection at VCC=2.3 V */
#define FUSE_BODLEVEL_2V2_gc      (0x02) /* Brown-out detection at VCC=2.2 V */
#define FUSE_BODLEVEL_1V9_gc      (0x01) /* Brown-out detection at VCC=1.9 V */
#define FUSE_BODLEVEL_2V0_gc      (0x00) /* Brown-out detection at VCC=2.0 V */
#define FUSE_BODLEVEL_DISABLED_gc (0x07) /* Brown-out detection disabled */


/* Divide clock by 8 internally */
#define FUSE_CKDIV8_CLEAR_gc (0x00) /* Divide clock by 8 internally - CLEAR */
#define FUSE_CKDIV8_SET_gc   (0x80) /* Divide clock by 8 internally - SET */


/* Clock output on PORTB5 */
#define FUSE_CKOUT_CLEAR_gc (0x00) /* Clock output on PORTB5 - CLEAR */
#define FUSE_CKOUT_SET_gc   (0x40) /* Clock output on PORTB5 - SET */


/* Select Clock source */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_0MS_gc                 (0x00) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_4MS_gc                 (0x10) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_EXTCLK_6CK_14CK_64MS_gc                (0x20) /* Ext. Clock; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_PLLCLK_1KCK_14CK_8MS_gc                (0x01) /* PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 8 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16KCK_14CK_8MS_gc               (0x11) /* PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 8 ms */
#define FUSE_SUT_CKSEL_PLLCLK_1KCK_14CK_68MS_gc               (0x21) /* PLL Clock; Start-up time PWRDWN/RESET: 1K CK/14 CK + 68 ms */
#define FUSE_SUT_CKSEL_PLLCLK_16KCK_14CK_68MS_gc              (0x31) /* PLL Clock; Start-up time PWRDWN/RESET: 16K CK/14 CK + 68 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_0MS_gc          (0x02) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_4MS_gc          (0x12) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_INTRCOSC_8MHZ_6CK_14CK_64MS_gc         (0x22) /* Int. RC Osc. 8 MHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_0MS_gc           (0x03) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_4MS_gc           (0x13) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 4 ms */
#define FUSE_SUT_CKSEL_WDOSC_128KHZ_6CK_14CK_64MS_gc          (0x23) /* WD. Osc. 128 kHz; Start-up time PWRDWN/RESET: 6 CK/14 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1CK_4MS_gc                  (0x04) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK 4 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_1CK_64MS_gc                 (0x14) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 1 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTLOFXTAL_32CK_64MS_gc                (0x24) /* Ext. Low-Freq. Crystal; Start-up time PWRDWN/RESET: 32 CK + 64 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_4MS1_gc (0x08) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_258CK_14CK_65MS_gc (0x18) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_0MS_gc   (0x28) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_4MS1_gc  (0x38) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ4_0MHZ9_1KCK_14CK_65MS_gc  (0x09) /* Ext. Ceramic Res. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_0MS_gc  (0x19) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_4MS1_gc (0x29) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ4_0MHZ9_16KCK_14CK_65MS_gc (0x39) /* Ext. Crystal Osc. 0.4-0.9 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_4MS1_gc  (0x0A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_258CK_14CK_65MS_gc  (0x1A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_0MS_gc    (0x2A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_4MS1_gc   (0x3A) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_0MHZ9_3MHZ_1KCK_14CK_65MS_gc   (0x0B) /* Ext. Ceramic Res. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_0MS_gc   (0x1B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_4MS1_gc  (0x2B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_0MHZ9_3MHZ_16KCK_14CK_65MS_gc  (0x3B) /* Ext. Crystal Osc. 0.9-3.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_4MS1_gc   (0x0C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_258CK_14CK_65MS_gc   (0x1C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_0MS_gc     (0x2C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_4MS1_gc    (0x3C) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_3MHZ_8MHZ_1KCK_14CK_65MS_gc    (0x0D) /* Ext. Ceramic Res. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_0MS_gc    (0x1D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_4MS1_gc   (0x2D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_3MHZ_8MHZ_16KCK_14CK_65MS_gc   (0x3D) /* Ext. Crystal Osc. 3.0-8.0 MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_14CK_4MS1_gc     (0x0E) /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_258CK_14CK_65MS_gc     (0x1E) /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 258 CK/14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_0MS_gc       (0x2E) /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_4MS1_gc      (0x3E) /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTCRES_8MHZ_XX_1KCK_14CK_65MS_gc      (0x0F) /* Ext. Ceramic Res. 8.0-    MHz; Start-up time PWRDWN/RESET: 1K CK /14 CK + 65 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_0MS_gc      (0x1F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 0 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_4MS1_gc     (0x2F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 4.1 ms */
#define FUSE_SUT_CKSEL_EXTXOSC_8MHZ_XX_16KCK_14CK_65MS_gc     (0x3F) /* Ext. Crystal Osc. 8.0-    MHz; Start-up time PWRDWN/RESET: 16K CK/14 CK + 65 ms */


/*
--------------------------------------------------------------------------------
LOCKBIT - Lockbits
--------------------------------------------------------------------------------
*/


/* Memory Lock */
#define LOCKBIT_LB_PROG_VER_DISABLED_gc (0x00) /* Further programming and verification disabled */
#define LOCKBIT_LB_PROG_DISABLED_gc     (0x02) /* Further programming disabled */
#define LOCKBIT_LB_NO_LOCK_gc           (0x03) /* No memory lock features enabled */


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
PORT - I/O Port
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
ADC - Analog-to-Digital Converter
--------------------------------------------------------------------------------
*/


/* Reference Selection Bits */
#define ADC_ADMUX_REFS_gc(x) ((x<<6) & 0xC0)

/* Left Adjust Result */
#define ADC_ADLAR_CLEAR_gc (0x00) /* Left Adjust Result - CLEAR */
#define ADC_ADLAR_SET_gc   (0x20) /* Left Adjust Result - SET */


/* Analog Channel and Gain Selection Bits */
#define ADC_ADMUX_MUX_gc(x) (x & 0x1F)

/* ADC Enable */
#define ADC_ADEN_CLEAR_gc (0x00) /* ADC Enable - CLEAR */
#define ADC_ADEN_SET_gc   (0x80) /* ADC Enable - SET */


/* ADC Start Conversion */
#define ADC_ADSC_CLEAR_gc (0x00) /* ADC Start Conversion - CLEAR */
#define ADC_ADSC_SET_gc   (0x40) /* ADC Start Conversion - SET */


/* ADC Auto Trigger Enable */
#define ADC_ADATE_CLEAR_gc (0x00) /* ADC Auto Trigger Enable - CLEAR */
#define ADC_ADATE_SET_gc   (0x20) /* ADC Auto Trigger Enable - SET */


/* ADC Interrupt Flag */
#define ADC_ADIF_CLEAR_gc (0x00) /* ADC Interrupt Flag - CLEAR */
#define ADC_ADIF_SET_gc   (0x10) /* ADC Interrupt Flag - SET */


/* ADC Interrupt Enable */
#define ADC_ADIE_CLEAR_gc (0x00) /* ADC Interrupt Enable - CLEAR */
#define ADC_ADIE_SET_gc   (0x08) /* ADC Interrupt Enable - SET */


/* ADC Prescaler Select Bits */
#define ADC_ADPS_VAL_0x00_gc (0x00) /* 2 */
#define ADC_ADPS_VAL_0x01_gc (0x01) /* 2 */
#define ADC_ADPS_VAL_0x02_gc (0x02) /* 4 */
#define ADC_ADPS_VAL_0x03_gc (0x03) /* 8 */
#define ADC_ADPS_VAL_0x04_gc (0x04) /* 16 */
#define ADC_ADPS_VAL_0x05_gc (0x05) /* 32 */
#define ADC_ADPS_VAL_0x06_gc (0x06) /* 64 */
#define ADC_ADPS_VAL_0x07_gc (0x07) /* 128 */


/* Bipolar Input Mode */
#define ADC_BIN_CLEAR_gc (0x00) /* Bipolar Input Mode - CLEAR */
#define ADC_BIN_SET_gc   (0x80) /* Bipolar Input Mode - SET */


/* Gain Select */
#define ADC_GSEL_CLEAR_gc (0x00) /* Gain Select - CLEAR */
#define ADC_GSEL_SET_gc   (0x40) /* Gain Select - SET */


/* Input Polarity Mode */
#define ADC_IPR_CLEAR_gc (0x00) /* Input Polarity Mode - CLEAR */
#define ADC_IPR_SET_gc   (0x20) /* Input Polarity Mode - SET */


/* ADC Control and Status Register B-REFS2 */
#define ADC_REFS2_CLEAR_gc (0x00) /* ADC Control and Status Register B-REFS2 - CLEAR */
#define ADC_REFS2_SET_gc   (0x10) /* ADC Control and Status Register B-REFS2 - SET */


/* ADC Control and Status Register B-MUX5 */
#define ADC_MUX5_CLEAR_gc (0x00) /* ADC Control and Status Register B-MUX5 - CLEAR */
#define ADC_MUX5_SET_gc   (0x08) /* ADC Control and Status Register B-MUX5 - SET */


/* ADC Auto Trigger Sources */
#define ADC_ADTS_VAL_0x00_gc (0x00) /* Free Running mode */
#define ADC_ADTS_VAL_0x01_gc (0x01) /* Analog Comparator */
#define ADC_ADTS_VAL_0x02_gc (0x02) /* External Interrupt Request 0 */
#define ADC_ADTS_VAL_0x03_gc (0x03) /* Timer/Counter0 Compare Match A */
#define ADC_ADTS_VAL_0x04_gc (0x04) /* Timer/Counter0 Overflow */
#define ADC_ADTS_VAL_0x05_gc (0x05) /* Timer/Counter1 Compare Match B */
#define ADC_ADTS_VAL_0x06_gc (0x06) /* Timer/Counter1 Overflow */
#define ADC_ADTS_VAL_0x07_gc (0x07) /* Watchdog Interrupt Request */


/* ADC10 Digital input Disable */
#define ADC_ADC10D_CLEAR_gc (0x00) /* ADC10 Digital input Disable - CLEAR */
#define ADC_ADC10D_SET_gc   (0x80) /* ADC10 Digital input Disable - SET */


/* ADC9 Digital input Disable */
#define ADC_ADC9D_CLEAR_gc (0x00) /* ADC9 Digital input Disable - CLEAR */
#define ADC_ADC9D_SET_gc   (0x40) /* ADC9 Digital input Disable - SET */


/* ADC8 Digital input Disable */
#define ADC_ADC8D_CLEAR_gc (0x00) /* ADC8 Digital input Disable - CLEAR */
#define ADC_ADC8D_SET_gc   (0x20) /* ADC8 Digital input Disable - SET */


/* ADC7 Digital input Disable */
#define ADC_ADC7D_CLEAR_gc (0x00) /* ADC7 Digital input Disable - CLEAR */
#define ADC_ADC7D_SET_gc   (0x10) /* ADC7 Digital input Disable - SET */


/* ADC6 Digital input Disable */
#define ADC_ADC6D_CLEAR_gc (0x00) /* ADC6 Digital input Disable - CLEAR */
#define ADC_ADC6D_SET_gc   (0x80) /* ADC6 Digital input Disable - SET */


/* ADC5 Digital input Disable */
#define ADC_ADC5D_CLEAR_gc (0x00) /* ADC5 Digital input Disable - CLEAR */
#define ADC_ADC5D_SET_gc   (0x40) /* ADC5 Digital input Disable - SET */


/* ADC4 Digital input Disable */
#define ADC_ADC4D_CLEAR_gc (0x00) /* ADC4 Digital input Disable - CLEAR */
#define ADC_ADC4D_SET_gc   (0x20) /* ADC4 Digital input Disable - SET */


/* ADC3 Digital input Disable */
#define ADC_ADC3D_CLEAR_gc (0x00) /* ADC3 Digital input Disable - CLEAR */
#define ADC_ADC3D_SET_gc   (0x10) /* ADC3 Digital input Disable - SET */


/* AREF Digital Input Disable */
#define ADC_AREFD_CLEAR_gc (0x00) /* AREF Digital Input Disable - CLEAR */
#define ADC_AREFD_SET_gc   (0x08) /* AREF Digital Input Disable - SET */


/* ADC2 Digital input Disable */
#define ADC_ADC2D_CLEAR_gc (0x00) /* ADC2 Digital input Disable - CLEAR */
#define ADC_ADC2D_SET_gc   (0x04) /* ADC2 Digital input Disable - SET */


/* ADC1 Digital input Disable */
#define ADC_ADC1D_CLEAR_gc (0x00) /* ADC1 Digital input Disable - CLEAR */
#define ADC_ADC1D_SET_gc   (0x02) /* ADC1 Digital input Disable - SET */


/* ADC0 Digital input Disable */
#define ADC_ADC0D_CLEAR_gc (0x00) /* ADC0 Digital input Disable - CLEAR */
#define ADC_ADC0D_SET_gc   (0x01) /* ADC0 Digital input Disable - SET */


/*
--------------------------------------------------------------------------------
AC - Analog Comparator
--------------------------------------------------------------------------------
*/


/* Hysteresis Select */
#define AC_HSEL_CLEAR_gc (0x00) /* Hysteresis Select - CLEAR */
#define AC_HSEL_SET_gc   (0x80) /* Hysteresis Select - SET */


/* Hysteresis Level */
#define AC_HLEV_CLEAR_gc (0x00) /* Hysteresis Level - CLEAR */
#define AC_HLEV_SET_gc   (0x40) /* Hysteresis Level - SET */


/* Analog Comparator Multiplexer */
#define AC_ACSRB_ACM_gc(x) (x & 0x07)

/* Analog Comparator Disable */
#define AC_ACD_CLEAR_gc (0x00) /* Analog Comparator Disable - CLEAR */
#define AC_ACD_SET_gc   (0x80) /* Analog Comparator Disable - SET */


/* Analog Comparator Bandgap Select */
#define AC_ACBG_CLEAR_gc (0x00) /* Analog Comparator Bandgap Select - CLEAR */
#define AC_ACBG_SET_gc   (0x40) /* Analog Comparator Bandgap Select - SET */


/* Analog Compare Output */
#define AC_ACO_CLEAR_gc (0x00) /* Analog Compare Output - CLEAR */
#define AC_ACO_SET_gc   (0x20) /* Analog Compare Output - SET */


/* Analog Comparator Interrupt Flag */
#define AC_ACI_CLEAR_gc (0x00) /* Analog Comparator Interrupt Flag - CLEAR */
#define AC_ACI_SET_gc   (0x10) /* Analog Comparator Interrupt Flag - SET */


/* Analog Comparator Interrupt Enable */
#define AC_ACIE_CLEAR_gc (0x00) /* Analog Comparator Interrupt Enable - CLEAR */
#define AC_ACIE_SET_gc   (0x08) /* Analog Comparator Interrupt Enable - SET */


/* Analog Comparator Multiplexer Enable */
#define AC_ACME_CLEAR_gc (0x00) /* Analog Comparator Multiplexer Enable - CLEAR */
#define AC_ACME_SET_gc   (0x04) /* Analog Comparator Multiplexer Enable - SET */


/* Analog Comparator Interrupt Mode Select bits */
#define AC_ACIS_VAL_0x00_gc (0x00) /* Interrupt on Toggle */
#define AC_ACIS_VAL_0x01_gc (0x01) /* Reserved */
#define AC_ACIS_VAL_0x02_gc (0x02) /* Interrupt on Falling Edge */
#define AC_ACIS_VAL_0x03_gc (0x03) /* Interrupt on Rising Edge */


/*
--------------------------------------------------------------------------------
USI - Universal Serial Interface
--------------------------------------------------------------------------------
*/


/* Start Condition Interrupt Flag */
#define USI_USISIF_CLEAR_gc (0x00) /* Start Condition Interrupt Flag - CLEAR */
#define USI_USISIF_SET_gc   (0x80) /* Start Condition Interrupt Flag - SET */


/* Counter Overflow Interrupt Flag */
#define USI_USIOIF_CLEAR_gc (0x00) /* Counter Overflow Interrupt Flag - CLEAR */
#define USI_USIOIF_SET_gc   (0x40) /* Counter Overflow Interrupt Flag - SET */


/* Stop Condition Flag */
#define USI_USIPF_CLEAR_gc (0x00) /* Stop Condition Flag - CLEAR */
#define USI_USIPF_SET_gc   (0x20) /* Stop Condition Flag - SET */


/* Data Output Collision */
#define USI_USIDC_CLEAR_gc (0x00) /* Data Output Collision - CLEAR */
#define USI_USIDC_SET_gc   (0x10) /* Data Output Collision - SET */


/* USI Counter Value Bits */
#define USI_USISR_USICNT_gc(x) (x & 0x0F)

/* Start Condition Interrupt Enable */
#define USI_USISIE_CLEAR_gc (0x00) /* Start Condition Interrupt Enable - CLEAR */
#define USI_USISIE_SET_gc   (0x80) /* Start Condition Interrupt Enable - SET */


/* Counter Overflow Interrupt Enable */
#define USI_USIOIE_CLEAR_gc (0x00) /* Counter Overflow Interrupt Enable - CLEAR */
#define USI_USIOIE_SET_gc   (0x40) /* Counter Overflow Interrupt Enable - SET */


/* USI Wire Mode Bits */
#define USI_USIWM_VAL_0x00_gc (0x00<<4) /* Normal Operation */
#define USI_USIWM_VAL_0x01_gc (0x01<<4) /* Three-Wire Mode */
#define USI_USIWM_VAL_0x02_gc (0x02<<4) /* Two-Wire Mode */
#define USI_USIWM_VAL_0x03_gc (0x03<<4) /* Two-Wire Mode Held Low */


/* USI Clock Source Select Bits */
#define USI_USICR_USICS_gc(x) ((x<<2) & 0x0C)

/* Clock Strobe */
#define USI_USICLK_CLEAR_gc (0x00) /* Clock Strobe - CLEAR */
#define USI_USICLK_SET_gc   (0x02) /* Clock Strobe - SET */


/* Toggle Clock Port Pin */
#define USI_USITC_CLEAR_gc (0x00) /* Toggle Clock Port Pin - CLEAR */
#define USI_USITC_SET_gc   (0x01) /* Toggle Clock Port Pin - SET */


/*
--------------------------------------------------------------------------------
EEPROM - EEPROM
--------------------------------------------------------------------------------
*/


/* EEPROM Programming Mode Bits */
#define EEPROM_EEPM_VAL_0x00_gc (0x00<<4) /* Erase and Write in one operation */
#define EEPROM_EEPM_VAL_0x01_gc (0x01<<4) /* Erase Only */
#define EEPROM_EEPM_VAL_0x02_gc (0x02<<4) /* Write Only */


/* EEPROM Ready Interrupt Enable */
#define EEPROM_EERIE_CLEAR_gc (0x00) /* EEPROM Ready Interrupt Enable - CLEAR */
#define EEPROM_EERIE_SET_gc   (0x08) /* EEPROM Ready Interrupt Enable - SET */


/* EEPROM Master Write Enable */
#define EEPROM_EEMPE_CLEAR_gc (0x00) /* EEPROM Master Write Enable - CLEAR */
#define EEPROM_EEMPE_SET_gc   (0x04) /* EEPROM Master Write Enable - SET */


/* EEPROM Write Enable */
#define EEPROM_EEPE_CLEAR_gc (0x00) /* EEPROM Write Enable - CLEAR */
#define EEPROM_EEPE_SET_gc   (0x02) /* EEPROM Write Enable - SET */


/* EEPROM Read Enable */
#define EEPROM_EERE_CLEAR_gc (0x00) /* EEPROM Read Enable - CLEAR */
#define EEPROM_EERE_SET_gc   (0x01) /* EEPROM Read Enable - SET */


/*
--------------------------------------------------------------------------------
WDT - Watchdog Timer
--------------------------------------------------------------------------------
*/


/* Watchdog Timeout Interrupt Flag */
#define WDT_WDIF_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Flag - CLEAR */
#define WDT_WDIF_SET_gc   (0x80) /* Watchdog Timeout Interrupt Flag - SET */


/* Watchdog Timeout Interrupt Enable */
#define WDT_WDIE_CLEAR_gc (0x00) /* Watchdog Timeout Interrupt Enable - CLEAR */
#define WDT_WDIE_SET_gc   (0x40) /* Watchdog Timeout Interrupt Enable - SET */


/* Watchdog Timer Prescaler Bits */
#define WDT_WDP_VAL_0x00_gc (0x00) /* Oscillator Cycles 2K */
#define WDT_WDP_VAL_0x01_gc (0x01) /* Oscillator Cycles 4K */
#define WDT_WDP_VAL_0x02_gc (0x02) /* Oscillator Cycles 8K */
#define WDT_WDP_VAL_0x03_gc (0x03) /* Oscillator Cycles 16K */
#define WDT_WDP_VAL_0x04_gc (0x04) /* Oscillator Cycles 32K */
#define WDT_WDP_VAL_0x05_gc (0x05) /* Oscillator Cycles 64K */
#define WDT_WDP_VAL_0x06_gc (0x06) /* Oscillator Cycles 128K */
#define WDT_WDP_VAL_0x07_gc (0x07) /* Oscillator Cycles 256K */
#define WDT_WDP_VAL_0x08_gc (0x08) /* Oscillator Cycles 512K */
#define WDT_WDP_VAL_0x09_gc (0x09) /* Oscillator Cycles 1024K */


/* Watchdog Change Enable */
#define WDT_WDCE_CLEAR_gc (0x00) /* Watchdog Change Enable - CLEAR */
#define WDT_WDCE_SET_gc   (0x10) /* Watchdog Change Enable - SET */


/* Watch Dog Enable */
#define WDT_WDE_CLEAR_gc (0x00) /* Watch Dog Enable - CLEAR */
#define WDT_WDE_SET_gc   (0x08) /* Watch Dog Enable - SET */


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/*
--------------------------------------------------------------------------------
TC8 - Timer/Counter, 8-bit
--------------------------------------------------------------------------------
*/


/* Timer/Counter0 Output Compare Match A Interrupt Enable */
#define TC0_OCIE0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match A Interrupt Enable - CLEAR */
#define TC0_OCIE0A_SET_gc   (0x10) /* Timer/Counter0 Output Compare Match A Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Match B Interrupt Enable */
#define TC0_OCIE0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Match B Interrupt Enable - CLEAR */
#define TC0_OCIE0B_SET_gc   (0x08) /* Timer/Counter0 Output Compare Match B Interrupt Enable - SET */


/* Timer/Counter0 Overflow Interrupt Enable */
#define TC0_TOIE0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Interrupt Enable - CLEAR */
#define TC0_TOIE0_SET_gc   (0x02) /* Timer/Counter0 Overflow Interrupt Enable - SET */


/* Timer/Counter0 Input Capture Interrupt Enable */
#define TC0_TICIE0_CLEAR_gc (0x00) /* Timer/Counter0 Input Capture Interrupt Enable - CLEAR */
#define TC0_TICIE0_SET_gc   (0x01) /* Timer/Counter0 Input Capture Interrupt Enable - SET */


/* Timer/Counter0 Output Compare Flag 0A */
#define TC0_OCF0A_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0A - CLEAR */
#define TC0_OCF0A_SET_gc   (0x10) /* Timer/Counter0 Output Compare Flag 0A - SET */


/* Timer/Counter0 Output Compare Flag 0B */
#define TC0_OCF0B_CLEAR_gc (0x00) /* Timer/Counter0 Output Compare Flag 0B - CLEAR */
#define TC0_OCF0B_SET_gc   (0x08) /* Timer/Counter0 Output Compare Flag 0B - SET */


/* Timer/Counter0 Overflow Flag */
#define TC0_TOV0_CLEAR_gc (0x00) /* Timer/Counter0 Overflow Flag - CLEAR */
#define TC0_TOV0_SET_gc   (0x02) /* Timer/Counter0 Overflow Flag - SET */


/* Timer/Counter0 Input Capture Flag */
#define TC0_ICF0_CLEAR_gc (0x00) /* Timer/Counter0 Input Capture Flag - CLEAR */
#define TC0_ICF0_SET_gc   (0x01) /* Timer/Counter0 Input Capture Flag - SET */


/* Timer/Counter 0 Width */
#define TC0_TCW0_CLEAR_gc (0x00) /* Timer/Counter 0 Width - CLEAR */
#define TC0_TCW0_SET_gc   (0x80) /* Timer/Counter 0 Width - SET */


/* Input Capture Mode Enable */
#define TC0_ICEN0_CLEAR_gc (0x00) /* Input Capture Mode Enable - CLEAR */
#define TC0_ICEN0_SET_gc   (0x40) /* Input Capture Mode Enable - SET */


/* Input Capture Noice Canceler */
#define TC0_ICNC0_CLEAR_gc (0x00) /* Input Capture Noice Canceler - CLEAR */
#define TC0_ICNC0_SET_gc   (0x20) /* Input Capture Noice Canceler - SET */


/* Input Capture Edge Select */
#define TC0_ICES0_CLEAR_gc (0x00) /* Input Capture Edge Select - CLEAR */
#define TC0_ICES0_SET_gc   (0x10) /* Input Capture Edge Select - SET */


/* Analog Comparator Input Capture Enable */
#define TC0_ACIC0_CLEAR_gc (0x00) /* Analog Comparator Input Capture Enable - CLEAR */
#define TC0_ACIC0_SET_gc   (0x08) /* Analog Comparator Input Capture Enable - SET */


/* Waveform Generation Mode */
#define TC0_WGM00_CLEAR_gc (0x00) /* Waveform Generation Mode - CLEAR */
#define TC0_WGM00_SET_gc   (0x01) /* Waveform Generation Mode - SET */


/* Timer/Counter Synchronization Mode */
#define TC0_TSM_CLEAR_gc (0x00) /* Timer/Counter Synchronization Mode - CLEAR */
#define TC0_TSM_SET_gc   (0x10) /* Timer/Counter Synchronization Mode - SET */


/* Timer/Counter 0 Prescaler Reset */
#define TC0_PSR0_CLEAR_gc (0x00) /* Timer/Counter 0 Prescaler Reset - CLEAR */
#define TC0_PSR0_SET_gc   (0x08) /* Timer/Counter 0 Prescaler Reset - SET */


/* Clock Select */
#define TC0_CS0_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC0_CS0_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC0_CS0_VAL_0x02_gc (0x02) /* Running, CLK/8 */
#define TC0_CS0_VAL_0x03_gc (0x03) /* Running, CLK/64 */
#define TC0_CS0_VAL_0x04_gc (0x04) /* Running, CLK/256 */
#define TC0_CS0_VAL_0x05_gc (0x05) /* Running, CLK/1024 */
#define TC0_CS0_VAL_0x06_gc (0x06) /* Running, ExtClk Tx Falling Edge */
#define TC0_CS0_VAL_0x07_gc (0x07) /* Running, ExtClk Tx Rising Edge */


/* Compare Output Mode, Bits */
#define TC1_TCCR1A_COM1A_gc(x) ((x<<6) & 0xC0)

/* Compare Output Mode, Bits */
#define TC1_TCCR1A_COM1B_gc(x) ((x<<4) & 0x30)

/* Force Output Compare Match 1A */
#define TC1_FOC1A_CLEAR_gc (0x00) /* Force Output Compare Match 1A - CLEAR */
#define TC1_FOC1A_SET_gc   (0x08) /* Force Output Compare Match 1A - SET */


/* Force Output Compare Match 1B */
#define TC1_FOC1B_CLEAR_gc (0x00) /* Force Output Compare Match 1B - CLEAR */
#define TC1_FOC1B_SET_gc   (0x04) /* Force Output Compare Match 1B - SET */


/* Pulse Width Modulator Enable */
#define TC1_PWM1A_CLEAR_gc (0x00) /* Pulse Width Modulator Enable - CLEAR */
#define TC1_PWM1A_SET_gc   (0x02) /* Pulse Width Modulator Enable - SET */


/* Pulse Width Modulator Enable */
#define TC1_PWM1B_CLEAR_gc (0x00) /* Pulse Width Modulator Enable - CLEAR */
#define TC1_PWM1B_SET_gc   (0x01) /* Pulse Width Modulator Enable - SET */


/* PWM Inversion Mode */
#define TC1_PWM1X_CLEAR_gc (0x00) /* PWM Inversion Mode - CLEAR */
#define TC1_PWM1X_SET_gc   (0x80) /* PWM Inversion Mode - SET */


/* Timer/Counter 1 Prescaler reset */
#define TC1_PSR1_CLEAR_gc (0x00) /* Timer/Counter 1 Prescaler reset - CLEAR */
#define TC1_PSR1_SET_gc   (0x40) /* Timer/Counter 1 Prescaler reset - SET */


/* Dead Time Prescaler */
#define TC1_DTPS1_VAL_0x00_gc (0x00<<4) /* 1x */
#define TC1_DTPS1_VAL_0x01_gc (0x01<<4) /* 2x */
#define TC1_DTPS1_VAL_0x02_gc (0x02<<4) /* 4x */
#define TC1_DTPS1_VAL_0x03_gc (0x03<<4) /* 8x */


/* Clock Select Bits */
#define TC1_CS1_VAL_0x00_gc (0x00) /* No Clock Source (Stopped) */
#define TC1_CS1_VAL_0x01_gc (0x01) /* Running, No Prescaling */
#define TC1_CS1_VAL_0x02_gc (0x02) /* Running, CLK/2 */
#define TC1_CS1_VAL_0x03_gc (0x03) /* Running, CLK/4 */
#define TC1_CS1_VAL_0x04_gc (0x04) /* Running, CLK/8 */
#define TC1_CS1_VAL_0x05_gc (0x05) /* Running, CLK/16 */
#define TC1_CS1_VAL_0x06_gc (0x06) /* Running, CLK/32 */
#define TC1_CS1_VAL_0x07_gc (0x07) /* Running, CLK/64 */
#define TC1_CS1_VAL_0x08_gc (0x08) /* Running, CLK/128 */
#define TC1_CS1_VAL_0x09_gc (0x09) /* Running, CLK/256 */
#define TC1_CS1_VAL_0x0A_gc (0x0A) /* Running, CLK/512 */
#define TC1_CS1_VAL_0x0B_gc (0x0B) /* Running, CLK/1024 */
#define TC1_CS1_VAL_0x0C_gc (0x0C) /* Running, CLK/2048 */
#define TC1_CS1_VAL_0x0D_gc (0x0D) /* Running, CLK/4096 */
#define TC1_CS1_VAL_0x0E_gc (0x0E) /* Running, CLK/8192 */
#define TC1_CS1_VAL_0x0F_gc (0x0F) /* Running, CLK/16384 */


/* COM1A1 Shadow Bit */
#define TC1_COM1A1S_CLEAR_gc (0x00) /* COM1A1 Shadow Bit - CLEAR */
#define TC1_COM1A1S_SET_gc   (0x80) /* COM1A1 Shadow Bit - SET */


/* COM1A0 Shadow Bit */
#define TC1_COM1A0S_CLEAR_gc (0x00) /* COM1A0 Shadow Bit - CLEAR */
#define TC1_COM1A0S_SET_gc   (0x40) /* COM1A0 Shadow Bit - SET */


/* COM1B1 Shadow Bit */
#define TC1_COM1B1S_CLEAR_gc (0x00) /* COM1B1 Shadow Bit - CLEAR */
#define TC1_COM1B1S_SET_gc   (0x20) /* COM1B1 Shadow Bit - SET */


/* COM1B0 Shadow Bit */
#define TC1_COM1B0S_CLEAR_gc (0x00) /* COM1B0 Shadow Bit - CLEAR */
#define TC1_COM1B0S_SET_gc   (0x10) /* COM1B0 Shadow Bit - SET */


/* Comparator D output mode */
#define TC1_TCCR1C_COM1D_gc(x) ((x<<2) & 0x0C)

/* Force Output Compare Match 1D */
#define TC1_FOC1D_CLEAR_gc (0x00) /* Force Output Compare Match 1D - CLEAR */
#define TC1_FOC1D_SET_gc   (0x02) /* Force Output Compare Match 1D - SET */


/* Pulse Width Modulator D Enable */
#define TC1_PWM1D_CLEAR_gc (0x00) /* Pulse Width Modulator D Enable - CLEAR */
#define TC1_PWM1D_SET_gc   (0x01) /* Pulse Width Modulator D Enable - SET */


/* Fault Protection Interrupt Enable */
#define TC1_FPIE1_CLEAR_gc (0x00) /* Fault Protection Interrupt Enable - CLEAR */
#define TC1_FPIE1_SET_gc   (0x80) /* Fault Protection Interrupt Enable - SET */


/* Fault Protection Mode Enable */
#define TC1_FPEN1_CLEAR_gc (0x00) /* Fault Protection Mode Enable - CLEAR */
#define TC1_FPEN1_SET_gc   (0x40) /* Fault Protection Mode Enable - SET */


/* Fault Protection Noise Canceler */
#define TC1_FPNC1_CLEAR_gc (0x00) /* Fault Protection Noise Canceler - CLEAR */
#define TC1_FPNC1_SET_gc   (0x20) /* Fault Protection Noise Canceler - SET */


/* Fault Protection Edge Select */
#define TC1_FPES1_CLEAR_gc (0x00) /* Fault Protection Edge Select - CLEAR */
#define TC1_FPES1_SET_gc   (0x10) /* Fault Protection Edge Select - SET */


/* Fault Protection Analog Comparator Enable */
#define TC1_FPAC1_CLEAR_gc (0x00) /* Fault Protection Analog Comparator Enable - CLEAR */
#define TC1_FPAC1_SET_gc   (0x08) /* Fault Protection Analog Comparator Enable - SET */


/* Fault Protection Interrupt Flag */
#define TC1_FPF1_CLEAR_gc (0x00) /* Fault Protection Interrupt Flag - CLEAR */
#define TC1_FPF1_SET_gc   (0x04) /* Fault Protection Interrupt Flag - SET */


/* Waveform Generation Mode Bit */
#define TC1_WGM1_VAL_0x00_gc (0x00) /* Fast PWM (NB! PWMx must be set!) */
#define TC1_WGM1_VAL_0x01_gc (0x01) /* Phase and Frequency Correct PWM */
#define TC1_WGM1_VAL_0x02_gc (0x02) /* PWM6/Single-slope */
#define TC1_WGM1_VAL_0x03_gc (0x03) /* PWM6/Dual-slope */


/* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable */
#define TC1_OCIE1D_CLEAR_gc (0x00) /* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
#define TC1_OCIE1D_SET_gc   (0x80) /* OCIE1D: Timer/Counter1 Output Compare Interrupt Enable - SET */


/* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable */
#define TC1_OCIE1A_CLEAR_gc (0x00) /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - CLEAR */
#define TC1_OCIE1A_SET_gc   (0x40) /* OCIE1A: Timer/Counter1 Output Compare Interrupt Enable - SET */


/* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable */
#define TC1_OCIE1B_CLEAR_gc (0x00) /* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable - CLEAR */
#define TC1_OCIE1B_SET_gc   (0x20) /* OCIE1A: Timer/Counter1 Output Compare B Interrupt Enable - SET */


/* Timer/Counter1 Overflow Interrupt Enable */
#define TC1_TOIE1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Interrupt Enable - CLEAR */
#define TC1_TOIE1_SET_gc   (0x04) /* Timer/Counter1 Overflow Interrupt Enable - SET */


/* Timer/Counter1 Output Compare Flag 1D */
#define TC1_OCF1D_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag 1D - CLEAR */
#define TC1_OCF1D_SET_gc   (0x80) /* Timer/Counter1 Output Compare Flag 1D - SET */


/* Timer/Counter1 Output Compare Flag 1A */
#define TC1_OCF1A_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag 1A - CLEAR */
#define TC1_OCF1A_SET_gc   (0x40) /* Timer/Counter1 Output Compare Flag 1A - SET */


/* Timer/Counter1 Output Compare Flag 1B */
#define TC1_OCF1B_CLEAR_gc (0x00) /* Timer/Counter1 Output Compare Flag 1B - CLEAR */
#define TC1_OCF1B_SET_gc   (0x20) /* Timer/Counter1 Output Compare Flag 1B - SET */


/* Timer/Counter1 Overflow Flag */
#define TC1_TOV1_CLEAR_gc (0x00) /* Timer/Counter1 Overflow Flag - CLEAR */
#define TC1_TOV1_SET_gc   (0x04) /* Timer/Counter1 Overflow Flag - SET */


/* Timer/Counter 1 Dead Time Value-DT1H */
#define TC1_DT1_DT1H_gc(x) ((x<<4) & 0xF0)

/* Timer/Counter 1 Dead Time Value-DT1L */
#define TC1_DT1_DT1L_gc(x) (x & 0x0F)

/*
--------------------------------------------------------------------------------
BOOT_LOAD - Bootloader
--------------------------------------------------------------------------------
*/


/* Clear temporary page buffer */
#define BOOT_LOAD_CTPB_CLEAR_gc (0x00) /* Clear temporary page buffer - CLEAR */
#define BOOT_LOAD_CTPB_SET_gc   (0x10) /* Clear temporary page buffer - SET */


/* Read fuse and lock bits */
#define BOOT_LOAD_RFLB_CLEAR_gc (0x00) /* Read fuse and lock bits - CLEAR */
#define BOOT_LOAD_RFLB_SET_gc   (0x08) /* Read fuse and lock bits - SET */


/* Page Write */
#define BOOT_LOAD_PGWRT_CLEAR_gc (0x00) /* Page Write - CLEAR */
#define BOOT_LOAD_PGWRT_SET_gc   (0x04) /* Page Write - SET */


/* Page Erase */
#define BOOT_LOAD_PGERS_CLEAR_gc (0x00) /* Page Erase - CLEAR */
#define BOOT_LOAD_PGERS_SET_gc   (0x02) /* Page Erase - SET */


/* Store Program Memory Enable */
#define BOOT_LOAD_SPMEN_CLEAR_gc (0x00) /* Store Program Memory Enable - CLEAR */
#define BOOT_LOAD_SPMEN_SET_gc   (0x01) /* Store Program Memory Enable - SET */


/*
--------------------------------------------------------------------------------
EXINT - External Interrupts
--------------------------------------------------------------------------------
*/


/* Interrupt Sense Control 0 Bit 1 */
#define EXINT_ISC01_CLEAR_gc (0x00) /* Interrupt Sense Control 0 Bit 1 - CLEAR */
#define EXINT_ISC01_SET_gc   (0x02) /* Interrupt Sense Control 0 Bit 1 - SET */


/* Interrupt Sense Control 0 Bit 0 */
#define EXINT_ISC00_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define EXINT_ISC00_VAL_0x01_gc (0x01) /* Any Logical Change of INTX */
#define EXINT_ISC00_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define EXINT_ISC00_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* External Interrupt Request 1 Enable */
#define EXINT_GIMSK_INT_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Enables */
#define EXINT_GIMSK_PCIE_gc(x) ((x<<4) & 0x30)

/* External Interrupt Flags */
#define EXINT_GIFR_INTF_gc(x) ((x<<6) & 0xC0)

/* Pin Change Interrupt Flag */
#define EXINT_PCIF_CLEAR_gc (0x00) /* Pin Change Interrupt Flag - CLEAR */
#define EXINT_PCIF_SET_gc   (0x20) /* Pin Change Interrupt Flag - SET */


/*
--------------------------------------------------------------------------------
CPU - CPU Registers
--------------------------------------------------------------------------------
*/


/* Global Interrupt Enable */
#define CPU_I_CLEAR_gc (0x00) /* Global Interrupt Enable - CLEAR */
#define CPU_I_SET_gc   (0x80) /* Global Interrupt Enable - SET */


/* Bit Copy Storage */
#define CPU_T_CLEAR_gc (0x00) /* Bit Copy Storage - CLEAR */
#define CPU_T_SET_gc   (0x40) /* Bit Copy Storage - SET */


/* Half Carry Flag */
#define CPU_H_CLEAR_gc (0x00) /* Half Carry Flag - CLEAR */
#define CPU_H_SET_gc   (0x20) /* Half Carry Flag - SET */


/* Sign Bit */
#define CPU_S_CLEAR_gc (0x00) /* Sign Bit - CLEAR */
#define CPU_S_SET_gc   (0x10) /* Sign Bit - SET */


/* Two's Complement Overflow Flag */
#define CPU_V_CLEAR_gc (0x00) /* Two's Complement Overflow Flag - CLEAR */
#define CPU_V_SET_gc   (0x08) /* Two's Complement Overflow Flag - SET */


/* Negative Flag */
#define CPU_N_CLEAR_gc (0x00) /* Negative Flag - CLEAR */
#define CPU_N_SET_gc   (0x04) /* Negative Flag - SET */


/* Zero Flag */
#define CPU_Z_CLEAR_gc (0x00) /* Zero Flag - CLEAR */
#define CPU_Z_SET_gc   (0x02) /* Zero Flag - SET */


/* Carry Flag */
#define CPU_C_CLEAR_gc (0x00) /* Carry Flag - CLEAR */
#define CPU_C_SET_gc   (0x01) /* Carry Flag - SET */


/* Power Reduction Timer/Counter1 */
#define CPU_PRTIM1_CLEAR_gc (0x00) /* Power Reduction Timer/Counter1 - CLEAR */
#define CPU_PRTIM1_SET_gc   (0x08) /* Power Reduction Timer/Counter1 - SET */


/* Power Reduction Timer/Counter0 */
#define CPU_PRTIM0_CLEAR_gc (0x00) /* Power Reduction Timer/Counter0 - CLEAR */
#define CPU_PRTIM0_SET_gc   (0x04) /* Power Reduction Timer/Counter0 - SET */


/* Power Reduction USI */
#define CPU_PRUSI_CLEAR_gc (0x00) /* Power Reduction USI - CLEAR */
#define CPU_PRUSI_SET_gc   (0x02) /* Power Reduction USI - SET */


/* Power Reduction ADC */
#define CPU_PRADC_CLEAR_gc (0x00) /* Power Reduction ADC - CLEAR */
#define CPU_PRADC_SET_gc   (0x01) /* Power Reduction ADC - SET */


/* BOD Sleep */
#define CPU_BODS_CLEAR_gc (0x00) /* BOD Sleep - CLEAR */
#define CPU_BODS_SET_gc   (0x80) /* BOD Sleep - SET */


/* Pull-up Disable */
#define CPU_PUD_CLEAR_gc (0x00) /* Pull-up Disable - CLEAR */
#define CPU_PUD_SET_gc   (0x40) /* Pull-up Disable - SET */


/* Sleep Enable */
#define CPU_SE_CLEAR_gc (0x00) /* Sleep Enable - CLEAR */
#define CPU_SE_SET_gc   (0x20) /* Sleep Enable - SET */


/* Sleep Mode Select Bits */
#define CPU_SM_IDLE_gc  (0x00<<3) /* Idle */
#define CPU_SM_ADC_gc   (0x01<<3) /* ADC Noise Reduction (If Available) */
#define CPU_SM_PDOWN_gc (0x02<<3) /* Power Down */
#define CPU_SM_STDBY_gc (0x03<<3) /* Standby */


/* BOD Sleep Enable */
#define CPU_BODSE_CLEAR_gc (0x00) /* BOD Sleep Enable - CLEAR */
#define CPU_BODSE_SET_gc   (0x04) /* BOD Sleep Enable - SET */


/* Interrupt Sense Control 0 bits */
#define CPU_ISC0_VAL_0x00_gc (0x00) /* Low Level of INTX */
#define CPU_ISC0_VAL_0x01_gc (0x01) /* Any Logical Change in INTX */
#define CPU_ISC0_VAL_0x02_gc (0x02) /* Falling Edge of INTX */
#define CPU_ISC0_VAL_0x03_gc (0x03) /* Rising Edge of INTX */


/* Watchdog Reset Flag */
#define CPU_WDRF_CLEAR_gc (0x00) /* Watchdog Reset Flag - CLEAR */
#define CPU_WDRF_SET_gc   (0x08) /* Watchdog Reset Flag - SET */


/* Brown-out Reset Flag */
#define CPU_BORF_CLEAR_gc (0x00) /* Brown-out Reset Flag - CLEAR */
#define CPU_BORF_SET_gc   (0x04) /* Brown-out Reset Flag - SET */


/* External Reset Flag */
#define CPU_EXTRF_CLEAR_gc (0x00) /* External Reset Flag - CLEAR */
#define CPU_EXTRF_SET_gc   (0x02) /* External Reset Flag - SET */


/* Power-On Reset Flag */
#define CPU_PORF_CLEAR_gc (0x00) /* Power-On Reset Flag - CLEAR */
#define CPU_PORF_SET_gc   (0x01) /* Power-On Reset Flag - SET */


/* Clock Prescaler Change Enable */
#define CPU_CLKPCE_CLEAR_gc (0x00) /* Clock Prescaler Change Enable - CLEAR */
#define CPU_CLKPCE_SET_gc   (0x80) /* Clock Prescaler Change Enable - SET */


/* Clock Prescaler Select Bits */
#define CPU_CLKPS_VAL_0x00_gc (0x00) /* 1 */
#define CPU_CLKPS_VAL_0x01_gc (0x01) /* 2 */
#define CPU_CLKPS_VAL_0x02_gc (0x02) /* 4 */
#define CPU_CLKPS_VAL_0x03_gc (0x03) /* 8 */
#define CPU_CLKPS_VAL_0x04_gc (0x04) /* 16 */
#define CPU_CLKPS_VAL_0x05_gc (0x05) /* 32 */
#define CPU_CLKPS_VAL_0x06_gc (0x06) /* 64 */
#define CPU_CLKPS_VAL_0x07_gc (0x07) /* 128 */
#define CPU_CLKPS_VAL_0x08_gc (0x08) /* 256 */


/* Low speed mode */
#define CPU_LSM_CLEAR_gc (0x00) /* Low speed mode - CLEAR */
#define CPU_LSM_SET_gc   (0x80) /* Low speed mode - SET */


/* PCK Enable */
#define CPU_PCKE_CLEAR_gc (0x00) /* PCK Enable - CLEAR */
#define CPU_PCKE_SET_gc   (0x04) /* PCK Enable - SET */


/* PLL Enable */
#define CPU_PLLE_CLEAR_gc (0x00) /* PLL Enable - CLEAR */
#define CPU_PLLE_SET_gc   (0x02) /* PLL Enable - SET */


/* PLL Lock detector */
#define CPU_PLOCK_CLEAR_gc (0x00) /* PLL Lock detector - CLEAR */
#define CPU_PLOCK_SET_gc   (0x01) /* PLL Lock detector - SET */

#endif

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
C/ASM COMMON DEFINITIONS
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/

/*
================================================================================
Flattened fully qualified IO register names
================================================================================
*/


/* PORTA - I/O Port (0x0000) */
#define PORTAA_BASE      _SFR_MEM8 (0x0000) /* PORTAA Base Address */
#define PORTAA_PINA      _SFR_MEM8 (0x0039) /* Port A Input Pins */
#define PORTAA_DDRA      _SFR_MEM8 (0x003A) /* Port A Data Direction Register */
#define PORTAA_PORTA     _SFR_MEM8 (0x003B) /* Port A Data Register */

/* PORTB - I/O Port (0x0000) */
#define PORTBB_BASE      _SFR_MEM8 (0x0000) /* PORTBB Base Address */
#define PORTBB_PINB      _SFR_MEM8 (0x0036) /* Port B Input Pins */
#define PORTBB_DDRB      _SFR_MEM8 (0x0037) /* Port B Data Direction Register */
#define PORTBB_PORTB     _SFR_MEM8 (0x0038) /* Port B Data Register */

/* ADC - Analog-to-Digital Converter (0x0000) */
#define ADC_BASE         _SFR_MEM8 (0x0000) /* ADC Base Address */
#define ADC_DIDR0        _SFR_MEM8 (0x0021) /* Digital Input Disable Register 0 */
#define ADC_DIDR1        _SFR_MEM8 (0x0022) /* Digital Input Disable Register 1 */
#define ADC_ADCSRB       _SFR_MEM8 (0x0023) /* ADC Control and Status Register B */
#define ADC_ADC          _SFR_MEM16(0x0024) /* ADC Data Register  Bytes */
#define ADC_ADCL         _SFR_MEM8 (0x0024) /* ADC Data Register  Bytes LOW BYTE */
#define ADC_ADCH         _SFR_MEM8 (0x0025) /* ADC Data Register  Bytes HIGH BYTE */
#define ADC_ADCSRA       _SFR_MEM8 (0x0026) /* The ADC Control and Status register */
#define ADC_ADMUX        _SFR_MEM8 (0x0027) /* The ADC multiplexer Selection Register */

/* AC - Analog Comparator (0x0000) */
#define AC_BASE          _SFR_MEM8 (0x0000) /* AC Base Address */
#define AC_ACSRA         _SFR_MEM8 (0x0028) /* Analog Comparator Control And Status Register A */
#define AC_ACSRB         _SFR_MEM8 (0x0029) /* Analog Comparator Control And Status Register B */

/* USI - Universal Serial Interface (0x0000) */
#define USI_BASE         _SFR_MEM8 (0x0000) /* USI Base Address */
#define USI_USICR        _SFR_MEM8 (0x002D) /* USI Control Register */
#define USI_USISR        _SFR_MEM8 (0x002E) /* USI Status Register */
#define USI_USIDR        _SFR_MEM8 (0x002F) /* USI Data Register */
#define USI_USIBR        _SFR_MEM8 (0x0030) /* USI Buffer Register */
#define USI_USIPP        _SFR_MEM8 (0x0031) /* USI Pin Position */

/* EEPROM - EEPROM (0x0000) */
#define EEPROM_BASE      _SFR_MEM8 (0x0000) /* EEPROM Base Address */
#define EEPROM_EECR      _SFR_MEM8 (0x003C) /* EEPROM Control Register */
#define EEPROM_EEDR      _SFR_MEM8 (0x003D) /* EEPROM Data Register */
#define EEPROM_EEAR      _SFR_MEM16(0x003E) /* EEPROM Address Register  Bytes */
#define EEPROM_EEARL     _SFR_MEM8 (0x003E) /* EEPROM Address Register  Bytes LOW BYTE */
#define EEPROM_EEARH     _SFR_MEM8 (0x003F) /* EEPROM Address Register  Bytes HIGH BYTE */

/* WDT - Watchdog Timer (0x0000) */
#define WDT_BASE         _SFR_MEM8 (0x0000) /* WDT Base Address */
#define WDT_WDTCR        _SFR_MEM8 (0x0041) /* Watchdog Timer Control Register */

/* TC0 - Timer/Counter, 8-bit (0x0000) */
#define TC8_BASE         _SFR_MEM8 (0x0000) /* TC8 Base Address */
#define TC8_OCR0B        _SFR_MEM8 (0x0032) /* Timer/Counter0 Output Compare Register */
#define TC8_OCR0A        _SFR_MEM8 (0x0033) /* Timer/Counter0 Output Compare Register */
#define TC8_TCNT0H       _SFR_MEM8 (0x0034) /* Timer/Counter0 High */
#define TC8_TCCR0A       _SFR_MEM8 (0x0035) /* Timer/Counter  Control Register A */
#define TC8_TCNT0L       _SFR_MEM8 (0x0052) /* Timer/Counter0 Low */
#define TC8_TCCR0B       _SFR_MEM8 (0x0053) /* Timer/Counter Control Register B */
#define TC8_TIFR         _SFR_MEM8 (0x0058) /* Timer/Counter0 Interrupt Flag register */
#define TC8_TIMSK        _SFR_MEM8 (0x0059) /* Timer/Counter Interrupt Mask Register */

/* TC1 - Timer/Counter, 8-bit (0x0000) */
/* TC8_BASE ALREADY DEFINED */
#define TC8_TCCR1E       _SFR_MEM8 (0x0020) /* Timer/Counter1 Control Register E */
#define TC8_DT1          _SFR_MEM8 (0x0044) /* Timer/Counter 1 Dead Time Value */
#define TC8_TC1H         _SFR_MEM8 (0x0045) /* Timer/Counter 1 Register High */
#define TC8_TCCR1D       _SFR_MEM8 (0x0046) /* Timer/Counter Control Register D */
#define TC8_TCCR1C       _SFR_MEM8 (0x0047) /* Timer/Counter Control Register C */
#define TC8_OCR1D        _SFR_MEM8 (0x004A) /* Output compare register */
#define TC8_OCR1C        _SFR_MEM8 (0x004B) /* Output compare register */
#define TC8_OCR1B        _SFR_MEM8 (0x004C) /* Output Compare Register */
#define TC8_OCR1A        _SFR_MEM8 (0x004D) /* Output Compare Register */
#define TC8_TCNT1        _SFR_MEM8 (0x004E) /* Timer/Counter Register */
#define TC8_TCCR1B       _SFR_MEM8 (0x004F) /* Timer/Counter Control Register B */
#define TC8_TCCR1A       _SFR_MEM8 (0x0050) /* Timer/Counter Control Register A */
/* TC8_TIFR ALREADY DEFINED */
/* TC8_TIMSK ALREADY DEFINED */

/* BOOT_LOAD - Bootloader (0x0000) */
#define BOOT_LOAD_BASE   _SFR_MEM8 (0x0000) /* BOOT_LOAD Base Address */
#define BOOT_LOAD_SPMCSR _SFR_MEM8 (0x0057) /* Store Program Memory Control Register */

/* EXINT - External Interrupts (0x0000) */
#define EXINT_BASE       _SFR_MEM8 (0x0000) /* EXINT Base Address */
#define EXINT_PCMSK1     _SFR_MEM8 (0x0042) /* Pin Change Enable Mask 1 */
#define EXINT_PCMSK0     _SFR_MEM8 (0x0043) /* Pin Change Enable Mask 0 */
#define EXINT_MCUCR      _SFR_MEM8 (0x0055) /* MCU Control Register */
#define EXINT_GIFR       _SFR_MEM8 (0x005A) /* General Interrupt Flag register */
#define EXINT_GIMSK      _SFR_MEM8 (0x005B) /* General Interrupt Mask Register */

/* CPU - CPU Registers (0x0000) */
#define CPU_BASE         _SFR_MEM8 (0x0000) /* CPU Base Address */
#define CPU_GPIOR0       _SFR_MEM8 (0x002A) /* General purpose register 0 */
#define CPU_GPIOR1       _SFR_MEM8 (0x002B) /* General Purpose register 1 */
#define CPU_GPIOR2       _SFR_MEM8 (0x002C) /* General Purpose IO register 2 */
#define CPU_DWDR         _SFR_MEM8 (0x0040) /* debugWire data register */
#define CPU_CLKPR        _SFR_MEM8 (0x0048) /* Clock Prescale Register */
#define CPU_PLLCSR       _SFR_MEM8 (0x0049) /* PLL Control and status register */
#define CPU_OSCCAL       _SFR_MEM8 (0x0051) /* Oscillator Calibration Register */
#define CPU_MCUSR        _SFR_MEM8 (0x0054) /* MCU Status register */
#define CPU_MCUCR        _SFR_MEM8 (0x0055) /* MCU Control Register */
#define CPU_PRR          _SFR_MEM8 (0x0056) /* Power Reduction Register */
#define CPU_SPL          _SFR_MEM8 (0x005D) /* Stack Pointer Low Byte */
#define CPU_SREG         _SFR_MEM8 (0x005F) /* Status Register */

/* FUSE - Fuses (0x0000) */
#define FUSE_BASE        _SFR_MEM8 (0x0000) /* FUSE Base Address */
#define FUSE_LOW         _SFR_MEM8 (0x0000) 
#define FUSE_HIGH        _SFR_MEM8 (0x0001) 
#define FUSE_EXTENDED    _SFR_MEM8 (0x0002) 

/* LOCKBIT - Lockbits (0x0000) */
#define LOCKBIT_BASE     _SFR_MEM8 (0x0000) /* LOCKBIT Base Address */
#define LOCKBIT_LOCKBIT  _SFR_MEM8 (0x0000) 
/* avr-libc typedef for avr/fuse.h */
typedef FUSE_t NVM_FUSES_t;

/*
================================================================================
Interrupt Vector Definitions
================================================================================
*/

/* Vector 0 is the reset vector */
#define None_RESET_vect_num            (0)                 
#define None_RESET_vect                _VECTOR(0)          /* External Reset, Power-on Reset and Watchdog Reset */
#define None_INT0_vect_num             (1)                 
#define None_INT0_vect                 _VECTOR(1)          /* External Interrupt 0 */
#define None_PCINT_vect_num            (2)                 
#define None_PCINT_vect                _VECTOR(2)          /* Pin Change Interrupt */
#define None_TIMER1_COMPA_vect_num     (3)                 
#define None_TIMER1_COMPA_vect         _VECTOR(3)          /* Timer/Counter1 Compare Match 1A */
#define None_TIMER1_COMPB_vect_num     (4)                 
#define None_TIMER1_COMPB_vect         _VECTOR(4)          /* Timer/Counter1 Compare Match 1B */
#define None_TIMER1_OVF_vect_num       (5)                 
#define None_TIMER1_OVF_vect           _VECTOR(5)          /* Timer/Counter1 Overflow */
#define None_TIMER0_OVF_vect_num       (6)                 
#define None_TIMER0_OVF_vect           _VECTOR(6)          /* Timer/Counter0 Overflow */
#define None_USI_START_vect_num        (7)                 
#define None_USI_START_vect            _VECTOR(7)          /* USI Start */
#define None_USI_OVF_vect_num          (8)                 
#define None_USI_OVF_vect              _VECTOR(8)          /* USI Overflow */
#define None_EE_RDY_vect_num           (9)                 
#define None_EE_RDY_vect               _VECTOR(9)          /* EEPROM Ready */
#define None_ANA_COMP_vect_num         (10)                
#define None_ANA_COMP_vect             _VECTOR(10)         /* Analog Comparator */
#define None_ADC_vect_num              (11)                
#define None_ADC_vect                  _VECTOR(11)         /* ADC Conversion Complete */
#define None_WDT_vect_num              (12)                
#define None_WDT_vect                  _VECTOR(12)         /* Watchdog Time-Out */
#define None_INT1_vect_num             (13)                
#define None_INT1_vect                 _VECTOR(13)         /* External Interrupt 1 */
#define None_TIMER0_COMPA_vect_num     (14)                
#define None_TIMER0_COMPA_vect         _VECTOR(14)         /* Timer/Counter0 Compare Match A */
#define None_TIMER0_COMPB_vect_num     (15)                
#define None_TIMER0_COMPB_vect         _VECTOR(15)         /* Timer/Counter0 Compare Match B */
#define None_TIMER0_CAPT_vect_num      (16)                
#define None_TIMER0_CAPT_vect          _VECTOR(16)         /* ADC Conversion Complete */
#define None_TIMER1_COMPD_vect_num     (17)                
#define None_TIMER1_COMPD_vect         _VECTOR(17)         /* Timer/Counter1 Compare Match D */
#define None_FAULT_PROTECTION_vect_num (18)                
#define None_FAULT_PROTECTION_vect     _VECTOR(18)         /* Timer/Counter1 Fault Protection */

/* Vector Table Size */
#define _VECTOR_SIZE                   (2)                 /* Size of individual vector. */
#define _VECTORS_SIZE                  (19 * _VECTOR_SIZE) /* Size of all vectors */
/*
================================================================================
Constants
================================================================================
*/

#define PROGMEM_START   (0x0000)                           
#define PROGMEM_SIZE    (0x0800)                           
#define PROGMEM_END     (PROGMEM_START + PROGMEM_SIZE - 1) 

#define FLASH_START     (0x0000)                           
#define FLASH_SIZE      (0x0800)                           
#define FLASH_PAGE_SIZE (0x0020)                           
#define FLASH_END       (FLASH_START + FLASH_SIZE - 1)     

#define SIGNATURESMEM_START  (0x0000)                                       
#define SIGNATURESMEM_SIZE   (0x0003)                                       
#define SIGNATURESMEM_END    (SIGNATURESMEM_START + SIGNATURESMEM_SIZE - 1) 

#define SIGNATURES_START     (0x0000)                                       
#define SIGNATURES_SIZE      (0x0003)                                       
#define SIGNATURES_PAGE_SIZE (0x0001)                                       
#define SIGNATURES_END       (SIGNATURES_START + SIGNATURES_SIZE - 1)       

#define FUSESMEM_START  (0x0000)                             
#define FUSESMEM_SIZE   (0x0003)                             
#define FUSESMEM_END    (FUSESMEM_START + FUSESMEM_SIZE - 1) 

#define FUSES_START     (0x0000)                             
#define FUSES_SIZE      (0x0003)                             
#define FUSES_PAGE_SIZE (0x0001)                             
#define FUSES_END       (FUSES_START + FUSES_SIZE - 1)       

#define LOCKBITSMEM_START  (0x0000)                                   
#define LOCKBITSMEM_SIZE   (0x0001)                                   
#define LOCKBITSMEM_END    (LOCKBITSMEM_START + LOCKBITSMEM_SIZE - 1) 

#define LOCKBITS_START     (0x0000)                                   
#define LOCKBITS_SIZE      (0x0001)                                   
#define LOCKBITS_PAGE_SIZE (0x0001)                                   
#define LOCKBITS_END       (LOCKBITS_START + LOCKBITS_SIZE - 1)       

#define DATAMEM_START       (0x0000)                               
#define DATAMEM_SIZE        (0x00E0)                               
#define DATAMEM_END         (DATAMEM_START + DATAMEM_SIZE - 1)     

#define REGISTERS_START     (0x0000)                               
#define REGISTERS_SIZE      (0x0020)                               
#define REGISTERS_PAGE_SIZE (0x0001)                               
#define REGISTERS_END       (REGISTERS_START + REGISTERS_SIZE - 1) 

#define MAPPED_IO_START     (0x0020)                               
#define MAPPED_IO_SIZE      (0x0040)                               
#define MAPPED_IO_PAGE_SIZE (0x0001)                               
#define MAPPED_IO_END       (MAPPED_IO_START + MAPPED_IO_SIZE - 1) 

#define IRAM_START          (0x0060)                               
#define IRAM_SIZE           (0x0080)                               
#define IRAM_PAGE_SIZE      (0x0001)                               
#define IRAM_END            (IRAM_START + IRAM_SIZE - 1)           

#define EEPROMMEM_START         (0x0000)                               
#define EEPROMMEM_SIZE          (0x0080)                               
#define EEPROMMEM_END           (EEPROMMEM_START + EEPROMMEM_SIZE - 1) 

#define EEPROM_START            (0x0000)                               
#define EEPROM_SIZE             (0x0080)                               
#define EEPROM_PAGE_SIZE        (0x0004)                               
#define EEPROM_END              (EEPROM_START + EEPROM_SIZE - 1)       

/* Added MAPPED_EEPROM segment names for avr-libc */
#define MAPPED_EEPROM_START     (EEPROM_START)                         
#define MAPPED_EEPROM_SIZE      (EEPROM_SIZE)                          
#define MAPPED_EEPROM_PAGE_SIZE (EEPROM_PAGE_SIZE)                     
#define MAPPED_EEPROM_END       (EEPROM_END)                           

#define IOMEM_START (0x0000)                       
#define IOMEM_SIZE  (0x0040)                       
#define IOMEM_END   (IOMEM_START + IOMEM_SIZE - 1) 

#define OSCCALMEM_START  (0x0000)                               
#define OSCCALMEM_SIZE   (0x0001)                               
#define OSCCALMEM_END    (OSCCALMEM_START + OSCCALMEM_SIZE - 1) 

#define OSCCAL_START     (0x0000)                               
#define OSCCAL_SIZE      (0x0001)                               
#define OSCCAL_PAGE_SIZE (0x0001)                               
#define OSCCAL_END       (OSCCAL_START + OSCCAL_SIZE - 1)       

/* ============ Port Bits ============ */

#define PORTA0 (0) 
#define PORTA1 (1) 
#define PORTA2 (2) 
#define PORTA3 (3) 
#define PORTA4 (4) 
#define PORTA5 (5) 
#define PORTA6 (6) 
#define PORTA7 (7) 
#define PORTB0 (0) 
#define PORTB1 (1) 
#define PORTB2 (2) 
#define PORTB3 (3) 
#define PORTB4 (4) 
#define PORTB5 (5) 
#define PORTB6 (6) 
#define PORTB7 (7) 

/*
================================================================================
Fuses/LockBits/Signatures
================================================================================
*/

/* ============ Fuses ============ */

#define FUSE_MEMORY_SIZE 2 

/* Fuse offset 0x00 */
#define SUT_CKSEL0 (unsigned char)~_BV(0) /* Select Clock source bit 0 */
#define SUT_CKSEL1 (unsigned char)~_BV(1) /* Select Clock source bit 1 */
#define SUT_CKSEL2 (unsigned char)~_BV(2) /* Select Clock source bit 2 */
#define SUT_CKSEL3 (unsigned char)~_BV(3) /* Select Clock source bit 3 */
#define SUT_CKSEL4 (unsigned char)~_BV(4) /* Select Clock source bit 4 */
#define SUT_CKSEL5 (unsigned char)~_BV(5) /* Select Clock source bit 5 */
#define CKOUT      (unsigned char)~_BV(6) /* Clock output on PORTB5 */
#define CKDIV8     (unsigned char)~_BV(7) /* Divide clock by 8 internally */

/* Fuse offset 0x01 */
#define BODLEVEL0 (unsigned char)~_BV(0) /* Brown-out Detector trigger level bit 0 */
#define BODLEVEL1 (unsigned char)~_BV(1) /* Brown-out Detector trigger level bit 1 */
#define BODLEVEL2 (unsigned char)~_BV(2) /* Brown-out Detector trigger level bit 2 */
#define EESAVE    (unsigned char)~_BV(3) /* Preserve EEPROM through the Chip Erase cycle */
#define WDTON     (unsigned char)~_BV(4) /* Watch-dog Timer always on */
#define SPIEN     (unsigned char)~_BV(5) /* Serial program downloading (SPI) enabled */
#define DWEN      (unsigned char)~_BV(6) /* Debug Wire enable */
#define RSTDISBL  (unsigned char)~_BV(7) /* Reset Disabled (Enable PB7 as i/o pin) */

/* Fuse offset 0x02 */
#define SELFPRGEN (unsigned char)~_BV(0) /* Self Programming enable */


/* ========== Lock Bits ========== */
#define __LOCK_BITS_EXIST  


/* ========== Signature ========== */
#define SIGNATURE_0 (0x1E) 
#define SIGNATURE_1 (0x91) 
#define SIGNATURE_2 (0x0C) 

#endif /* #ifdef _AVR_ATtiny261A_H_INCLUDED */
