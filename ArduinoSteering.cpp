#include "ArduinoSteering.h"
#include "Arduino.h"

namespace MovementController {

MovementController::ArduinoSteering::ArduinoSteering(uint8_t leftPin, uint8_t rightPin) {
    _pins.push_back(leftPin);
    _pins.push_back(rightPin);
};
 
// magnitude only used to determin left or right steer
void MovementController::ArduinoSteering::steer(int position) {
    if (position < 0) {
        digitalWrite(_pins[1], 0);
        digitalWrite(_pins[0], 1);
    }
    else if (position > 0) {
        digitalWrite(_pins[0], 0);
        digitalWrite(_pins[1], 1);
    }
    else {
        digitalWrite(_pins[0], 0);
        digitalWrite(_pins[1], 0);
    }
};
}

