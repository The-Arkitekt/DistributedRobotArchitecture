#ifndef ARDUINOSTEERING_H
#define ARDUINOSTEERING_H

#include "SteeringInterface.h"
#include <inttypes.h>
#include <vector>

namespace MovementController {

class ArduinoSteering : public MovementController::SteeringInterface {
    public:
        ArduinoSteering(uint8_t leftPin, uint8_t rightPin); // basic two pin constructor used for LED testing
        void steer(int position);
    private:
        std::vector<uint8_t> _pins;
};
}

#endif //ARDUINOSTEERING_H