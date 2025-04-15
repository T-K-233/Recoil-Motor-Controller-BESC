/*
 * motor.c
 *
 *  Created on: Aug 25, 2022
 *      Author: TK
 */

#include "motor.h"


HAL_StatusTypeDef Motor_init(Motor *motor) {
  motor->pole_pairs = MOTOR_POLE_PAIRS;
  motor->torque_constant = MOTOR_TORQUE_CONSTANT;
  motor->max_calibration_current = MOTOR_CALIBRATION_CURRENT;
  motor->phase_order = MOTOR_PHASE_ORDER;

  return HAL_OK;
}

