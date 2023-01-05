#include "TestMotor.h"

TestMotor::TestMotor(int forwardPin, int reversePin) {
	_forwardPin = forwardPin;
	_reversePin = reversePin;
	_value     = 0;
};

void TestMotor::applyValue() {
	if (_value > 0) {
		digitalWrite(_reversePin, 0);
		digitalWrite(_forwardPin, 1);
	}
	else if (_value < 0) {
		digitalWrite(_forwardPin, 0);
		digitalWrite(_reversePin, 1);
	}
	else {
		digitalWrite(_forwardPin, 0);
		digitalWrite(_reversePin, 0);
	}
};


