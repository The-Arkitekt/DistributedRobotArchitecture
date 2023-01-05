#ifndef TESTACTUATOR_H
#define TESTACTUATOR_H

#include "Arduino.h"
#include "Actuator.h"

class TestSteering : public Actuator {
	public:
		TestSteering(int leftPin, int rightPin);
		
		void applyValue();
		
	private:
		int _leftPin;
		int _rightPin;
};

#endif //TESTACTUATOR_H