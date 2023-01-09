#ifndef STEERINGINTERFACE_H
#define STEERINGINTERFACE_H

namespace MovementController {
/*
    Steering Interface definitions
*/

class SteeringInterface {
    public:
        virtual void steer(int position);
};
}
#endif //STEERINGINTERFACE_H