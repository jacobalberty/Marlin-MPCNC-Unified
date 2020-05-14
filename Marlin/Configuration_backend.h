#pragma once


// BTT SKR V1.3

#ifdef SKR_V1_3
    #define MOTHERBOARD BOARD_BTT_SKR_V1_3
    #define ARC_SUPPORT
    #define EMERGENCY_PARSER
    #ifdef SPINDLE_POWER
      #define SPINDLE_FEATURE
      #define SPINDLE_LASER_PWM_INVERT      false   // Set to "true" if the speed/power goes up when you want it to go slower
      #ifndef SPINDLE_PWM
        #define SPINDLE_LASER_PWM             false   // Set to "true" if your controller supports setting the speed/power
      #else
        #define SPINDLE_LASER_PWM             true   // Set to "true" if your controller supports setting the speed/power
    //  #define SPINDLE_LASER_PWM_INVERT      false   // Set to "true" if the speed/power goes up when you want it to go slower
#define SPINDLE_LASER_ACTIVE_HIGH     false
      #endif
      #ifndef SPINDLE_LASER_ENA_PIN
        #define SPINDLE_LASER_ENA_PIN P2_00 // SKR 1.3 servo output
      #endif
    #endif
#endif

#define X_DRIVER_TYPE  X_AXIS_DRIVER
#define Y_DRIVER_TYPE  Y_AXIS_DRIVER
#define Z_DRIVER_TYPE  Z_AXIS_DRIVER

#ifdef DUAL_ENDSTOP
  #define X2_DRIVER_TYPE X_AXIS_DRIVER
  #define Y2_DRIVER_TYPE Y_AXIS_DRIVER
  #define Z2_DRIVER_TYPE Z_AXIS_DRIVER
  #define E0_DRIVER_TYPE X_AXIS_DRIVER
  #define E1_DRIVER_TYPE Y_AXIS_DRIVER
  #define E2_DRIVER_TYPE Z_AXIS_DRIVER
  #define X_MIN_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
  #define X_DUAL_STEPPER_DRIVERS
  #define Y_DUAL_STEPPER_DRIVERS
  #define USE_XMAX_PLUG
  #define USE_YMAX_PLUG
  #define USE_ZMAX_PLUG
  #define X_DUAL_ENDSTOPS
  #define Y_DUAL_ENDSTOPS
#else
  #define X_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MIN_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define X_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
  #define Y_MAX_ENDSTOP_INVERTING true // set to true to invert the logic of the endstop.
#endif
#define Z_MIN_ENDSTOP_INVERTING true  // set to true to invert the logic of the endstop.
#define Z_MAX_ENDSTOP_INVERTING false // set to true to invert the logic of the endstop.
#define Z_MIN_PROBE_ENDSTOP_INVERTING true // Set to true to invert the logic of the probe.

#define X_AXIS_SPU 200
#define Y_AXIS_SPU 200
#define Z_AXIS_SPU 800
#define E0_AXIS_SPU 200

#define DEFAULT_AXIS_STEPS_PER_UNIT {X_AXIS_SPU, Y_AXIS_SPU, Z_AXIS_SPU, E0_AXIS_SPU}

// Some basic defaults needed for non printer operation

#define TEMP_SENSOR_0 999
#define DUMMY_THERMISTOR_999_VALUE 170

// MPCNC MK8
#define DEFAULT_Kp 17.98
#define DEFAULT_Ki .98
#define DEFAULT_Kd 83.62

#define DEFAULT_MAX_FEEDRATE          { 120, 120, 30, 25 }

#define DEFAULT_MAX_ACCELERATION      { 400, 400, 100, 2000 }

#define DEFAULT_ACCELERATION          400    // X, Y, Z and E acceleration for printing moves
#define DEFAULT_TRAVEL_ACCELERATION   400    // X, Y, Z acceleration for travel (non printing) moves

#if DISABLED(CLASSIC_JERK)
  #define JUNCTION_DEVIATION_MM 0.1 // (mm) Distance from real junction edge
#endif

#define S_CURVE_ACCELERATION

#define HOMING_FEEDRATE_XY (30*60)
#define HOMING_FEEDRATE_Z  (3*60)

#define SDSUPPORT


// Advanced configuration
#define DEFAULT_STEPPER_DEACTIVE_TIME 1200

#define ADAPTIVE_STEP_SMOOTHING

