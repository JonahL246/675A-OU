#include "main.h"
using namespace pros;
Motor flywheel_motor(10, E_MOTOR_GEARSET_06, true, E_MOTOR_ENCODER_DEGREES);
Motor intake_motor(1, E_MOTOR_GEARSET_06, false, E_MOTOR_ENCODER_DEGREES);
ADIDigitalOut endgame_pneumatic('A', false);
ADIDigitalOut tongue_pneumatic('H');
controller_digital_e_t flywheel_toggle_button = E_CONTROLLER_DIGITAL_B;
controller_digital_e_t tongue_toggle_button = E_CONTROLLER_DIGITAL_R2;
controller_digital_e_t speed_toggle_button = E_CONTROLLER_DIGITAL_R1;
controller_digital_e_t intake_in_button = E_CONTROLLER_DIGITAL_L1;
controller_digital_e_t intake_out_button = E_CONTROLLER_DIGITAL_L2;
controller_digital_e_t drive_lock_toggle_button = E_CONTROLLER_DIGITAL_RIGHT;
controller_digital_e_t expansion_toggle_button_1 = E_CONTROLLER_DIGITAL_UP;
controller_digital_e_t expansion_toggle_button_2 = E_CONTROLLER_DIGITAL_LEFT;
flywheel_controller flywheel;