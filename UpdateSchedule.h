#ifndef UPDATESCHEDULE_H
#define UPDATESCHEDULE_H
#include "State.h"
#include <cstring>
#include <map>

class UpdateSchedule : public State {

public:
    UpdateSchedule();
    virtual ~UpdateSchedule();
    void enter();
    void update();
    void leave();
    void addWorkoutToDay(int index);
private:
    map<string, int> days;
};

#endif