#ifndef ARDUINODRIVE_H
#define ARDUINODRIVE_H

#include "DriveInterface.h"
#include <inttypes.h>
#include <vector>

namespace MovementController {

class ArduinoDrive : public MovementController::DriveInterface {
    public:
        ArduinoDrive(uint8_t forwardPin, uint8_t reversePin);//cbasic two pin constructor
        
        void drive(int magnitude); // magnitude = 0 is brake
        void turnOff();
    private:
        std::vector<uint8_t> _pins; // May need to switch this to standard [] array if this is too slow
};
}

#endif //ARDUINODRIVE_H