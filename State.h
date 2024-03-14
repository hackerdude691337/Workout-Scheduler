#ifndef STATE_H
#define STATE_H
#include <iostream>
#include "Schedule.h"
using namespace std;
class State{

    public:
         State(){};

        virtual ~State(){};

       virtual void enter() = 0;
       virtual void update() = 0;
       virtual void leave() = 0;

       static Program *program;
       static State *current;
       static State *mainMenu, *newProgram, *changeName, *updateSchedule;
     
};



#endif