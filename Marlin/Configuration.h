#pragma once

#include "Configuration_common.h"
/* 
 * Machine types
 * You must uncomment only one machine type.
 */
#define MPCNC
//#define LOWRIDER 

/*
 * Boards 
 * You must uncomment only one board type.
 */
#define SKR_V1_3

#define X_AXIS_DRIVER DRV8825
#define Y_AXIS_DRIVER DRV8825
#define Z_AXIS_DRIVER DRV8825

#define DUAL_ENDSTOP // Uncomment to enable dual endstop and stepper drivers

#define SPINDLE_POWER // Uncomment to enable spindle power control on the board's servo port.
//#define SPINDLE_PWM  // Uncomment to enable spindle pwm.