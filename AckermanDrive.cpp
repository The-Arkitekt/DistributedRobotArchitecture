#include "AckermanDrive.h"

namespace MovementController {

MovementController::AckermanDrive::AckermanDrive(DriveInterface* drive, SteeringInterface* steering)
    : _drive {drive},
      _steering(steering) 
{};

void MovementController::AckermanDrive::drive(int magnitude) {
    _drive->drive(magnitude);
};
void MovementController::AckermanDrive::steer(int position) {
    _steering->steer(position);
};
void MovementController::AckermanDrive::coast() {
    _drive->turnOff();
};
}


