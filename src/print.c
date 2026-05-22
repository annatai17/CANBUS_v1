/*
 *  print.c
 *
 *  Created on: May 21, 2026
 *      Author: annatai
 * 
 *  silly serial print helper function for PlatformIO
 *  bc I can't figure out how to redirect 
 *  printf output to UART the same way 
 *  it is done in EECS 373 labs in CubeIDE </3
 * 
 *  requires UART to be configured 
 *  in IOC for serial output!
 */

#include "stm32l4xx_hal.h"

UART_HandleTypeDef hlpuart1; // adjust for UART channel being used

void Serial_print(char* str) {
    HAL_UART_Transmit(&hlpuart1, (uint8_t *) str, strlen(str), 0xFFFF);
}