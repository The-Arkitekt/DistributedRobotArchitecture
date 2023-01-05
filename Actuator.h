#ifndef ACTUATOR_H
#define ACTUATOR_H

class Actuator {
  public:
    void setValue(int value) {_value=value;};
	int getValue() {return _value;};
	
	virtual void applyValue() {};
	
  protected:
	int _value;
	
};
#endif //ACTUATOR_H