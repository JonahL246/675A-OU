#include "main.h"


const double MAX_VEL =  2.0;
const double MAX_ACCEL = 3.0;
const double MAX_JERK = 6.0;
const double ROBOT_WIDTH = 0.4;
auto cons = squiggles::Constraints(MAX_VEL, MAX_ACCEL, MAX_JERK);
auto generator = squiggles::SplineGenerator(cons, 
std::make_shared<squiggles::TankModel>(ROBOT_WIDTH, cons));