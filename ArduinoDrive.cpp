#include "ArduinoDrive.h"
#include "Arduino.h"

namespace MovementController {

MovementController::ArduinoDrive::ArduinoDrive(uint8_t forwardPin, uint8_t reversePin) {
    _pins.push_back(forwardPin);
    _pins.push_back(reversePin);
};

// Magnitude is only used to determin if forward or reverse
void MovementController::ArduinoDrive::drive(int magnitude) {
    if (magnitude < 0) {
        digitalWrite(_pins[0], 0);
        digitalWrite(_pins[1], 1);
    }
    else if (magnitude > 0) {
        digitalWrite(_pins[1], 0);
        digitalWrite(_pins[0], 1);
    }
    else {
        // Brake if magnitude = 0
        digitalWrite(_pins[0], 1);
        digitalWrite(_pins[1], 1);
    }
};


void MovementController::ArduinoDrive::turnOff() {
    digitalWrite(_pins[0], 0);
    digitalWrite(_pins[1], 0);
};
}
