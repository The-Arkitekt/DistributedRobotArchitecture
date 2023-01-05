#include "TestSteering.h"

TestSteering::TestSteering(int leftPin, int rightPin) {
	_leftPin  = leftPin;
	_rightPin = rightPin;
	_value = 0;
};

void TestSteering::applyValue() {
	if (_value < 0) {
		digitalWrite(_rightPin, 0);
		digitalWrite(_leftPin, 1);
	}
	else if (_value > 0) {
		digitalWrite(_leftPin, 0);
		digitalWrite(_rightPin, 1);
	}
	else {
		digitalWrite(_leftPin, 0);
		digitalWrite(_rightPin, 0);
	}
};
	