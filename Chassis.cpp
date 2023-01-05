#include "Chassis.h"

Chassis::Chassis() {
	_actuatorCount = 0;
};

int Chassis::addActuator(Actuator* const actuator) {
	_actuators.push_back(actuator);
	int actuatorId = _actuatorCount;
	_actuatorCount ++;
	return actuatorId;
};

Actuator* const Chassis::getActuator(int id) {
	if (id < 0 || id > _actuators.size())
		return 0;
	
	return _actuators[id];
};

void Chassis::removeActuator(int id) {
	if (id < 0 || id > _actuators.size())
		return;
	
	Actuator* tmp = _actuators[id];
	_actuators[id] = 0;
	delete(tmp);
};
	
	