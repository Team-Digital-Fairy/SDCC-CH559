// REGISTER MAP
#pragma once

#include <compiler.h>
#include <stdint.h>

// PROCESSOR REG
// SFR(name, addr)
// SBIT(name, addr, bit)
// SFR16(name, addr);


SFR(B,0xF0); // B Register
SFR(ACC,0xE0);
// SFR(A, 0xE0);
SFR(PSW,0xD0);
	SBIT(CY, 0xD0, 7);
	SBIT(AC, 0xD0, 6);
	SBIT(F0, 0xD0, 5);
	SBIT(RS1,0xD0, 4);
	SBIT(RS0,0xD0, 3);
	SBIT(OV, 0xD0, 2);
	SBIT(F1, 0xD0, 1);
	SBIT(P,  0xD0, 0);

SFR(GLOBAL_CFG, 0xB1);
	SBIT(BOOT_LOAD, 0xB1, 5);
	SBIT(SW_RESET, 0xB1, 4);
	SBIT(CODE_WE, 0xB1, 3);
	SBIT(DATA_WE, 0xB1, 2);
	SBIT(XIR_XSFR, 0xB1, 1);
	SBIT(WDOG_EN, 0xB1, 0);

SFR(CHIP_ID, 0xA1); // Read only
SFR(SAFE_MOD, 0xA1); // Write only

SFR(DPH, 0x83);
SFR(DPL, 0x82);
SFR16(DPTR, 0x02);
SFR(SP, 0x81);

// CLOCK, SLEEP and Power Reg

SFR(WDOG_COUNT, 0xFF);
SFR(RESET_KEEP, 0xFE);
SFR(WAKE_CTRL, 0xEB);
	SBIT(WAK_BY_USB, 0xEB, 7);
	SBIT(WAK_RXD1_LO, 0xEB, 6);
	SBIT(WAK_P1_5_LO, 0xEB, 5);
	SBIT(WAK_P1_4_LO, 0xEB, 4);
	SBIT(WAK_P0_3_LO, 0xEB, 3);
	SBIT(WAK_CAP3_LO, 0xEB, 2);
	SBIT(WAK_P3_2E_3L, 0xEB, 1);
	SBIT(WAK_RXD0_LO, 0xEB, 0);

SFR(SLEEP_CTRL, 0xEA);
	SBIT(SLP_OFF_USB,  0xEA, 7);
	SBIT(SLP_OFF_ADC,  0xEA, 6);
	SBIT(SLP_OFF_UART1,0xEA, 5);
	SBIT(SLP_OFF_P1S1, 0xEA, 4);
	SBIT(SLP_OFF_SPI0, 0xEA, 3);
	SBIT(SLP_OFF_TMR3, 0xEA, 2);
	SBIT(SLP_OFF_LED,  0xEA, 1);
	SBIT(SLP_OFF_XRAM, 0xEA, 0);

SFR(CLOCK_CFG, 0xB3);

SFR(PLL_CFG, 0xB2);

SFR(PCON, 0x87);
	SBIT(SMOD, 0x87, 7);	
	//SBIT(SMOD, 0x87, 6);
	SBIT(RST_FLAG1, 0x87, 5);
	SBIT(RST_FLAG0, 0x87, 4);
	SBIT(GF1, 0x87, 3);
	SBIT(GF0, 0x87, 2);
	SBIT(PD, 0x87, 1);
	//SBIT(SMOD, 0x87, 0);
	
// Interrupt Controller Register
SFR(IP_EX, 0xE9);
SFR(IE_EX, 0xE8);
	SBIT(IE_WDOG, 0xE8, 7);
	SBIT(IE_GPIO, 0xE8, 6);
	SBIT(IE_PWM1, 0xE8, 5);
	SBIT(IE_UART1, 0xE8, 4);
	SBIT(IE_ADC, 0xE8, 3);
	SBIT(IE_USB, 0xE8, 2);
	SBIT(IE_TMR3, 0xE8, 1);
	SBIT(IE_SPI0, 0xE8, 0);

SFR(GPIO_IE, 0xCF);	

SFR(IP, 0xB8);
	
SFR(IE, 0xA8);
	SBIT(EA,  0xA8, 7);
	SBIT(E_DIS,0xA8, 6);
	SBIT(ET2, 0xA8, 5);
	SBIT(ES,  0xA8, 4);
	SBIT(ET1, 0xA8, 3);
	SBIT(EX1, 0xA8, 2);
	SBIT(ET0, 0xA8, 1);
	SBIT(EX0, 0xA8, 0);


// Flash-ROM Register
SFR(ROM_DATA_H, 0x8F);
SFR(ROM_DATA_L, 0x8E);
SFR16(ROM_DATA, 0x8E);

SFR(ROM_STATUS, 0x86); // READ
SFR(ROM_CTRL, 0x86); // WRITE

SFR(ROM_ADDR_H, 0x85);
SFR(ROM_ADDR_L, 0x84);
SFR16(ROM_ADDR, 0x84);


// Port Reg
SFR(XBUS_SPEED, 0xFD);
SFR(XBUS_AUX, 0xA2);

SFR(PIN_FUNC, 0xCE);
SFR(P4_CFG, 0xC7);
SFR(P5_IN, 0xC7); // READ
SFR(PORT_CFG, 0xC6);
SFR(P0_PU, 0xC5);
SFR(P0_DIR, 0xC4);

SFR(P4_PU, 0xC3);
SFR(P4_DIR, 0xC2);
SFR(P4_IN, 0xC1);
SFR(P4_OUT, 0xC0);

SFR(P3_PU, 0xBF);
SFR(P3_DIR, 0xBE);

SFR(P2_PU, 0xBD);
SFR(P2_DIR, 0xBC);

SFR(P1_PU, 0xBB);
SFR(P1_DIR, 0xBA);

SFR(P1_IE, 0xB9);
SFR(P3, 0xB0);
SFR(P2, 0xA0);
SFR(P1, 0x90);
SFR(P0, 0x80);


// Timer 0 and 1 Registers
SFR(TH1, 0x8D);
SFR(TH0, 0x8C);
SFR(TL1, 0x8B);
SFR(TL0, 0x8A);
SFR(TMOD, 0x89);
SFR(TCON, 0x88);

// UART0 Reg
SFR(SBUF, 0x99);
SFR(SCON, 0x98);







