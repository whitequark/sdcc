//
// Register Declarations for Microchip 16F676 Processor
//
//
// This header file was automatically generated by:
//
//	inc2h.pl V1.6
//
//	Copyright (c) 2002, Kevin L. Pauba, All Rights Reserved
//
//	SDCC is licensed under the GNU Public license (GPL) v2.  Note that
//	this license covers the code to the compiler and other executables,
//	but explicitly does not cover any code or objects generated by sdcc.
//	We have not yet decided on a license for the run time libraries, but
//	it will not put any requirements on code linked against it. See:
// 
//	http://www.gnu.org/copyleft/gpl/html
//
//	See http://sdcc.sourceforge.net/ for the latest information on sdcc.
//
// 
#ifndef P16F676_H
#define P16F676_H

//
// Register addresses.
//
#define INDF_ADDR	0x0000
#define TMR0_ADDR	0x0001
#define PCL_ADDR	0x0002
#define STATUS_ADDR	0x0003
#define FSR_ADDR	0x0004
#define PORTA_ADDR	0x0005
#define PORTC_ADDR	0x0007
#define PCLATH_ADDR	0x000A
#define INTCON_ADDR	0x000B
#define PIR1_ADDR	0x000C
#define TMR1L_ADDR	0x000E
#define TMR1H_ADDR	0x000F
#define T1CON_ADDR	0x0010
#define CMCON_ADDR	0x0019
#define ADRESH_ADDR	0x001E
#define ADCON0_ADDR	0x001F
#define OPTION_REG_ADDR	0x0081
#define TRISA_ADDR	0x0085
#define TRISC_ADDR	0x0087
#define PIE1_ADDR	0x008C
#define PCON_ADDR	0x008E
#define OSCCAL_ADDR	0x0090
#define ANSEL_ADDR	0x0091
#define WPU_ADDR	0x0095
#define WPUA_ADDR	0x0095
#define IOC_ADDR	0x0096
#define IOCA_ADDR	0x0096
#define VRCON_ADDR	0x0099
#define EEDATA_ADDR	0x009A
#define EEDAT_ADDR	0x009A
#define EEADR_ADDR	0x009B
#define EECON1_ADDR	0x009C
#define EECON2_ADDR	0x009D
#define ADRESL_ADDR	0x009E
#define ADCON1_ADDR	0x009F

//
// Memory organization.
//

#pragma memmap INDF_ADDR INDF_ADDR SFR 0x000	// INDF
#pragma memmap TMR0_ADDR TMR0_ADDR SFR 0x000	// TMR0
#pragma memmap PCL_ADDR PCL_ADDR SFR 0x000	// PCL
#pragma memmap STATUS_ADDR STATUS_ADDR SFR 0x000	// STATUS
#pragma memmap FSR_ADDR FSR_ADDR SFR 0x000	// FSR
#pragma memmap PORTA_ADDR PORTA_ADDR SFR 0x000	// PORTA
#pragma memmap PORTC_ADDR PORTC_ADDR SFR 0x000	// PORTC
#pragma memmap PCLATH_ADDR PCLATH_ADDR SFR 0x000	// PCLATH
#pragma memmap INTCON_ADDR INTCON_ADDR SFR 0x000	// INTCON
#pragma memmap PIR1_ADDR PIR1_ADDR SFR 0x000	// PIR1
#pragma memmap TMR1L_ADDR TMR1L_ADDR SFR 0x000	// TMR1L
#pragma memmap TMR1H_ADDR TMR1H_ADDR SFR 0x000	// TMR1H
#pragma memmap T1CON_ADDR T1CON_ADDR SFR 0x000	// T1CON
#pragma memmap CMCON_ADDR CMCON_ADDR SFR 0x000	// CMCON
#pragma memmap ADRESH_ADDR ADRESH_ADDR SFR 0x000	// ADRESH
#pragma memmap ADCON0_ADDR ADCON0_ADDR SFR 0x000	// ADCON0
#pragma memmap OPTION_REG_ADDR OPTION_REG_ADDR SFR 0x000	// OPTION_REG
#pragma memmap TRISA_ADDR TRISA_ADDR SFR 0x000	// TRISA
#pragma memmap TRISC_ADDR TRISC_ADDR SFR 0x000	// TRISC
#pragma memmap PIE1_ADDR PIE1_ADDR SFR 0x000	// PIE1
#pragma memmap PCON_ADDR PCON_ADDR SFR 0x000	// PCON
#pragma memmap OSCCAL_ADDR OSCCAL_ADDR SFR 0x000	// OSCCAL
#pragma memmap ANSEL_ADDR ANSEL_ADDR SFR 0x000	// ANSEL
#pragma memmap WPU_ADDR WPU_ADDR SFR 0x000	// WPU
#pragma memmap WPUA_ADDR WPUA_ADDR SFR 0x000	// WPUA
#pragma memmap IOC_ADDR IOC_ADDR SFR 0x000	// IOC
#pragma memmap IOCA_ADDR IOCA_ADDR SFR 0x000	// IOCA
#pragma memmap VRCON_ADDR VRCON_ADDR SFR 0x000	// VRCON
#pragma memmap EEDATA_ADDR EEDATA_ADDR SFR 0x000	// EEDATA
#pragma memmap EEDAT_ADDR EEDAT_ADDR SFR 0x000	// EEDAT
#pragma memmap EEADR_ADDR EEADR_ADDR SFR 0x000	// EEADR
#pragma memmap EECON1_ADDR EECON1_ADDR SFR 0x000	// EECON1
#pragma memmap EECON2_ADDR EECON2_ADDR SFR 0x000	// EECON2
#pragma memmap ADRESL_ADDR ADRESL_ADDR SFR 0x000	// ADRESL
#pragma memmap ADCON1_ADDR ADCON1_ADDR SFR 0x000	// ADCON1


//         LIST
// P16F676.INC  Standard Header File, Version 1.00    Microchip Technology, Inc.
//         NOLIST

// This header file defines configurations, registers, and other useful bits of
// information for the PIC16F676 microcontroller.  These names are taken to match 
// the data sheets as closely as possible.  

// Note that the processor must be selected before this file is 
// included.  The processor may be selected the following ways:

//       1. Command line switch:
//               C:\ MPASM MYFILE.ASM /PIC16F676
//       2. LIST directive in the source file
//               LIST   P=PIC16F676
//       3. Processor Type entry in the MPASM full-screen interface

//==========================================================================
//
//       Revision History
//
//==========================================================================
//1.00   05/13/02 Original

//==========================================================================
//
//       Verify Processor
//
//==========================================================================

//        IFNDEF __16F676
//            MESSG "Processor-header file mismatch.  Verify selected processor."
//         ENDIF

//==========================================================================
//
//       Register Definitions
//
//==========================================================================

#define W                    0x0000
#define F                    0x0001

//----- Register Files------------------------------------------------------

extern data __at (INDF_ADDR) volatile char      INDF;
extern sfr  __at (TMR0_ADDR)                    TMR0;
extern data __at (PCL_ADDR) volatile char       PCL;
extern sfr  __at (STATUS_ADDR)                  STATUS;
extern sfr  __at (FSR_ADDR)                     FSR;
extern sfr  __at (PORTA_ADDR)                   PORTA;

extern sfr  __at (PORTC_ADDR)                   PORTC;

extern sfr  __at (PCLATH_ADDR)                  PCLATH;
extern sfr  __at (INTCON_ADDR)                  INTCON;
extern sfr  __at (PIR1_ADDR)                    PIR1;

extern sfr  __at (TMR1L_ADDR)                   TMR1L;		
extern sfr  __at (TMR1H_ADDR)                   TMR1H;		
extern sfr  __at (T1CON_ADDR)                   T1CON;		

extern sfr  __at (CMCON_ADDR)                   CMCON;		

extern sfr  __at (ADRESH_ADDR)                  ADRESH;		
extern sfr  __at (ADCON0_ADDR)                  ADCON0;		


extern sfr  __at (OPTION_REG_ADDR)              OPTION_REG;

extern sfr  __at (TRISA_ADDR)                   TRISA;
extern sfr  __at (TRISC_ADDR)                   TRISC;

extern sfr  __at (PIE1_ADDR)                    PIE1;

extern sfr  __at (PCON_ADDR)                    PCON;

extern sfr  __at (OSCCAL_ADDR)                  OSCCAL;
extern sfr  __at (ANSEL_ADDR)                   ANSEL;		

extern sfr  __at (WPU_ADDR)                     WPU;
extern sfr  __at (WPUA_ADDR)                    WPUA;
extern sfr  __at (IOC_ADDR)                     IOC;
extern sfr  __at (IOCA_ADDR)                    IOCA;

extern sfr  __at (VRCON_ADDR)                   VRCON;
extern sfr  __at (EEDATA_ADDR)                  EEDATA;	
extern sfr  __at (EEDAT_ADDR)                   EEDAT;	
extern sfr  __at (EEADR_ADDR)                   EEADR;	
extern sfr  __at (EECON1_ADDR)                  EECON1;
extern sfr  __at (EECON2_ADDR)                  EECON2;
extern sfr  __at (ADRESL_ADDR)                  ADRESL;		
extern sfr  __at (ADCON1_ADDR)                  ADCON1;


//----- STATUS Bits --------------------------------------------------------


//----- INTCON Bits --------------------------------------------------------


//----- PIR1 Bits ----------------------------------------------------------


//----- T1CON Bits ---------------------------------------------------------


//----- CMCON Bits --------------------------------------------------------


//----- ADCON0 Bits --------------------------------------------------------


//----- OPTION Bits --------------------------------------------------------


//----- PIE1 Bits ----------------------------------------------------------


//----- PCON Bits ----------------------------------------------------------


//----- OSCCAL Bits --------------------------------------------------------


//----- ANSEL --------------------------------------------------------------


//----- VRCON Bits ---------------------------------------------------------


//----- EECON1 -------------------------------------------------------------


//----- ADCON1 -------------------------------------------------------------


//==========================================================================
//
//       RAM Definition
//
//==========================================================================

//         __MAXRAM H'FF'
//         __BADRAM H'06', H'08'-H'09', H'0D', H'11'-H'18', H'1A'-H'1D', H'60'-H'7F'
//         __BADRAM H'86', H'88'-H'89', H'8D', H'8F', H'92'-H'94', H'97'-H'98', H'E0'-H'FF'

//==========================================================================
//
//       Configuration Bits
//
//==========================================================================

#define _CPD                 0x3EFF
#define _CPD_OFF             0x3FFF
#define _CP                  0x3F7F
#define _CP_OFF              0x3FFF
#define _BODEN               0x3FFF
#define _BODEN_OFF           0x3FBF
#define _MCLRE_ON            0x3FFF
#define _MCLRE_OFF           0x3FDF
#define _PWRTE_OFF           0x3FFF
#define _PWRTE_ON            0x3FEF
#define _WDT_ON              0x3FFF
#define _WDT_OFF             0x3FF7
#define _LP_OSC              0x3FF8
#define _XT_OSC              0x3FF9
#define _HS_OSC              0x3FFA
#define _EC_OSC              0x3FFB
#define _INTRC_OSC_NOCLKOUT  0x3FFC
#define _INTRC_OSC_CLKOUT    0x3FFD
#define _EXTRC_OSC_NOCLKOUT  0x3FFE
#define _EXTRC_OSC_CLKOUT    0x3FFF

//         LIST

// ----- ADCON0 bits --------------------
typedef union {
  struct {
    unsigned char ADON:1;
    unsigned char GO:1;
    unsigned char CHS0:1;
    unsigned char CHS1:1;
    unsigned char CHS2:1;
    unsigned char :1;
    unsigned char VCFG:1;
    unsigned char ADFM:1;
  };
  struct {
    unsigned char :1;
    unsigned char NOT_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
  struct {
    unsigned char :1;
    unsigned char GO_DONE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __ADCON0_bits_t;
extern volatile __ADCON0_bits_t __at(ADCON0_ADDR) ADCON0_bits;

#define ADON                 ADCON0_bits.ADON
#define GO                   ADCON0_bits.GO
#define NOT_DONE             ADCON0_bits.NOT_DONE
#define GO_DONE              ADCON0_bits.GO_DONE
#define CHS0                 ADCON0_bits.CHS0
#define CHS1                 ADCON0_bits.CHS1
#define CHS2                 ADCON0_bits.CHS2
#define VCFG                 ADCON0_bits.VCFG
#define ADFM                 ADCON0_bits.ADFM

// ----- CMCON bits --------------------
typedef union {
  struct {
    unsigned char CM0:1;
    unsigned char CM1:1;
    unsigned char CM2:1;
    unsigned char CIS:1;
    unsigned char CINV:1;
    unsigned char :1;
    unsigned char COUT:1;
    unsigned char :1;
  };
} __CMCON_bits_t;
extern volatile __CMCON_bits_t __at(CMCON_ADDR) CMCON_bits;

#define CM0                  CMCON_bits.CM0
#define CM1                  CMCON_bits.CM1
#define CM2                  CMCON_bits.CM2
#define CIS                  CMCON_bits.CIS
#define CINV                 CMCON_bits.CINV
#define COUT                 CMCON_bits.COUT

// ----- INTCON bits --------------------
typedef union {
  struct {
    unsigned char RAIF:1;
    unsigned char INTF:1;
    unsigned char T0IF:1;
    unsigned char RAIE:1;
    unsigned char INTE:1;
    unsigned char T0IE:1;
    unsigned char PEIE:1;
    unsigned char GIE:1;
  };
} __INTCON_bits_t;
extern volatile __INTCON_bits_t __at(INTCON_ADDR) INTCON_bits;

#define RAIF                 INTCON_bits.RAIF
#define INTF                 INTCON_bits.INTF
#define T0IF                 INTCON_bits.T0IF
#define RAIE                 INTCON_bits.RAIE
#define INTE                 INTCON_bits.INTE
#define T0IE                 INTCON_bits.T0IE
#define PEIE                 INTCON_bits.PEIE
#define GIE                  INTCON_bits.GIE

// ----- OPTION_REG bits --------------------
typedef union {
  struct {
    unsigned char PS0:1;
    unsigned char PS1:1;
    unsigned char PS2:1;
    unsigned char PSA:1;
    unsigned char T0SE:1;
    unsigned char T0CS:1;
    unsigned char INTEDG:1;
    unsigned char NOT_GPPU:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char NOT_RAPU:1;
  };
} __OPTION_REG_bits_t;
extern volatile __OPTION_REG_bits_t __at(OPTION_REG_ADDR) OPTION_REG_bits;

#define PS0                  OPTION_REG_bits.PS0
#define PS1                  OPTION_REG_bits.PS1
#define PS2                  OPTION_REG_bits.PS2
#define PSA                  OPTION_REG_bits.PSA
#define T0SE                 OPTION_REG_bits.T0SE
#define T0CS                 OPTION_REG_bits.T0CS
#define INTEDG               OPTION_REG_bits.INTEDG
#define NOT_GPPU             OPTION_REG_bits.NOT_GPPU
#define NOT_RAPU             OPTION_REG_bits.NOT_RAPU

// ----- OSCCAL bits --------------------
typedef union {
  struct {
    unsigned char ANS0:1;
    unsigned char ANS1:1;
    unsigned char CAL0:1;
    unsigned char CAL1:1;
    unsigned char CAL2:1;
    unsigned char CAL3:1;
    unsigned char CAL4:1;
    unsigned char CAL5:1;
  };
  struct {
    unsigned char :1;
    unsigned char :1;
    unsigned char ANS2:1;
    unsigned char ANS3:1;
    unsigned char ANS4:1;
    unsigned char ANS5:1;
    unsigned char ANS6:1;
    unsigned char ANS7:1;
  };
} __OSCCAL_bits_t;
extern volatile __OSCCAL_bits_t __at(OSCCAL_ADDR) OSCCAL_bits;

#define ANS0                 OSCCAL_bits.ANS0
#define ANS1                 OSCCAL_bits.ANS1
#define CAL0                 OSCCAL_bits.CAL0
#define ANS2                 OSCCAL_bits.ANS2
#define CAL1                 OSCCAL_bits.CAL1
#define ANS3                 OSCCAL_bits.ANS3
#define CAL2                 OSCCAL_bits.CAL2
#define ANS4                 OSCCAL_bits.ANS4
#define CAL3                 OSCCAL_bits.CAL3
#define ANS5                 OSCCAL_bits.ANS5
#define CAL4                 OSCCAL_bits.CAL4
#define ANS6                 OSCCAL_bits.ANS6
#define CAL5                 OSCCAL_bits.CAL5
#define ANS7                 OSCCAL_bits.ANS7

// ----- PCON bits --------------------
typedef union {
  struct {
    unsigned char NOT_BOD:1;
    unsigned char NOT_POR:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PCON_bits_t;
extern volatile __PCON_bits_t __at(PCON_ADDR) PCON_bits;

#define NOT_BOD              PCON_bits.NOT_BOD
#define NOT_POR              PCON_bits.NOT_POR

// ----- PIE1 bits --------------------
typedef union {
  struct {
    unsigned char T1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIE:1;
    unsigned char EEIE:1;
  };
  struct {
    unsigned char TMR1IE:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIE1_bits_t;
extern volatile __PIE1_bits_t __at(PIE1_ADDR) PIE1_bits;

#define T1IE                 PIE1_bits.T1IE
#define TMR1IE               PIE1_bits.TMR1IE
#define CMIE                 PIE1_bits.CMIE
#define ADIE                 PIE1_bits.ADIE
#define EEIE                 PIE1_bits.EEIE

// ----- PIR1 bits --------------------
typedef union {
  struct {
    unsigned char T1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char CMIF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char ADIF:1;
    unsigned char EEIF:1;
  };
  struct {
    unsigned char TMR1IF:1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
    unsigned char :1;
  };
} __PIR1_bits_t;
extern volatile __PIR1_bits_t __at(PIR1_ADDR) PIR1_bits;

#define T1IF                 PIR1_bits.T1IF
#define TMR1IF               PIR1_bits.TMR1IF
#define CMIF                 PIR1_bits.CMIF
#define ADIF                 PIR1_bits.ADIF
#define EEIF                 PIR1_bits.EEIF

// ----- STATUS bits --------------------
typedef union {
  struct {
    unsigned char C:1;
    unsigned char DC:1;
    unsigned char Z:1;
    unsigned char NOT_PD:1;
    unsigned char NOT_TO:1;
    unsigned char RP0:1;
    unsigned char RP1:1;
    unsigned char IRP:1;
  };
} __STATUS_bits_t;
extern volatile __STATUS_bits_t __at(STATUS_ADDR) STATUS_bits;

#define C                    STATUS_bits.C
#define DC                   STATUS_bits.DC
#define Z                    STATUS_bits.Z
#define NOT_PD               STATUS_bits.NOT_PD
#define NOT_TO               STATUS_bits.NOT_TO
#define RP0                  STATUS_bits.RP0
#define RP1                  STATUS_bits.RP1
#define IRP                  STATUS_bits.IRP

// ----- T1CON bits --------------------
typedef union {
  struct {
    unsigned char TMR1ON:1;
    unsigned char TMR1CS:1;
    unsigned char NOT_T1SYNC:1;
    unsigned char T1OSCEN:1;
    unsigned char T1CKPS0:1;
    unsigned char T1CKPS1:1;
    unsigned char TMR1GE:1;
    unsigned char :1;
  };
} __T1CON_bits_t;
extern volatile __T1CON_bits_t __at(T1CON_ADDR) T1CON_bits;

#define TMR1ON               T1CON_bits.TMR1ON
#define TMR1CS               T1CON_bits.TMR1CS
#define NOT_T1SYNC           T1CON_bits.NOT_T1SYNC
#define T1OSCEN              T1CON_bits.T1OSCEN
#define T1CKPS0              T1CON_bits.T1CKPS0
#define T1CKPS1              T1CON_bits.T1CKPS1
#define TMR1GE               T1CON_bits.TMR1GE

// ----- VRCON bits --------------------
typedef union {
  struct {
    unsigned char VR0:1;
    unsigned char VR1:1;
    unsigned char VR2:1;
    unsigned char VR3:1;
    unsigned char ADCS0:1;
    unsigned char VRR:1;
    unsigned char ADCS2:1;
    unsigned char VREN:1;
  };
  struct {
    unsigned char RD:1;
    unsigned char WR:1;
    unsigned char WREN:1;
    unsigned char WRERR:1;
    unsigned char :1;
    unsigned char ADCS1:1;
    unsigned char :1;
    unsigned char :1;
  };
} __VRCON_bits_t;
extern volatile __VRCON_bits_t __at(VRCON_ADDR) VRCON_bits;

#define VR0                  VRCON_bits.VR0
#define RD                   VRCON_bits.RD
#define VR1                  VRCON_bits.VR1
#define WR                   VRCON_bits.WR
#define VR2                  VRCON_bits.VR2
#define WREN                 VRCON_bits.WREN
#define VR3                  VRCON_bits.VR3
#define WRERR                VRCON_bits.WRERR
#define ADCS0                VRCON_bits.ADCS0
#define VRR                  VRCON_bits.VRR
#define ADCS1                VRCON_bits.ADCS1
#define ADCS2                VRCON_bits.ADCS2
#define VREN                 VRCON_bits.VREN

#endif
