/*
 * task.c
 *
 *  Created on: Nov 18, 2023
 *      Author: acer
 */
#include "main.h"
#include "task.h"

void blink_RED ( void ) {
	HAL_GPIO_TogglePin ( RED_GPIO_Port , RED_Pin ) ;
}

void blink_YELLOW ( void ) {
  HAL_GPIO_TogglePin ( YELLOW_GPIO_Port , YELLOW_Pin );
}

void blink_GREEN ( void ){
	HAL_GPIO_TogglePin ( GREEN_GPIO_Port , GREEN_Pin ) ;
}

void blink_BLUE ( void ) {
	HAL_GPIO_TogglePin ( BLUE_GPIO_Port , BLUE_Pin ) ;
}

void blink_PURPLE ( void ) {
	HAL_GPIO_TogglePin ( PURPLE_GPIO_Port , PURPLE_Pin );
}

