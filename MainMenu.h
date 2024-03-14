#ifndef MAINMENU_H
#define MAINMENU_H
#include "State.h"

class MainMenu : public State {

public:
    MainMenu();
    virtual ~MainMenu();
    void enter();
    void update();
    void leave();


};



#endif 