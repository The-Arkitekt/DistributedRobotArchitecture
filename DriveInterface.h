#ifndef DRIVEINTERFACE_H
#define DRIVEINTERFACE_H

namespace MovementController {
/*
    Drive Interface definitions
*/

class DriveInterface {
    public:
        virtual void drive(int magnitude);
        virtual void turnOff();
};
}
#endif //DRIVEINTERFACE_H