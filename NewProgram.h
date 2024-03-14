#ifndef NEWPROGRAM_H
#define NEWPROGRAM_H
#include "State.h"


class NewProgram : public State {

public:
   NewProgram();
    virtual ~NewProgram();
    void enter();
    void update();
    void leave();
    void displayWorkout();

};

#endif