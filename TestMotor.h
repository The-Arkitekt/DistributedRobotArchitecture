#ifndef TESTMOTOR_H
#define TESTMOTOR_H

#include "Arduino.h"
#include "Actuator.h"

class TestMotor : public Actuator{
	public:
		TestMotor(int forwardPin, int reversePin);

		void applyValue();
		
	private:
		int _forwardPin;
		int _reversePin;
};


#endif //TESTMOTOR_H