#ifndef ACKERMANDRIVE_H
#define ACKERMANDRIVE_H

#include "DriveInterface.h"
#include "SteeringInterface.h"

namespace MovementController {

class AckermanDrive {
    public:
        AckermanDrive(MovementController::DriveInterface* drive, MovementController::SteeringInterface* steering);
        void drive(int magnitude); // magnitude = 0 is motor brake
        void steer(int position);
        void coast();

    private:
        MovementController::DriveInterface* _drive;
        MovementController::SteeringInterface* _steering;
};
}
#endif //ACKERMANDRIVE_H