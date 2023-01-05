#ifndef CHASSIS_H
#define CHASSIS_H

#include "Actuator.h"
#include <vector>

class Chassis {
	public:
		Chassis();
		
		int addActuator(Actuator* const actuator);
		Actuator* const getActuator(int id);
		void removeActuator(int id);
		
	private:
		int _actuatorCount;
		std::vector<Actuator*> _actuators;
		
};
#endif // CHASSIS_H