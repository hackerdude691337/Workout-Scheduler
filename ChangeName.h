#ifndef CHANGENAME_H
#define CHANGENAME_H
#include "State.h"

class ChangeName : public State {

public:
    ChangeName();
    virtual ~ChangeName();
    void enter();
    void update();
    void leave();


};



#endif 