#include <iostream>
#include "MainMenu.h"
#include "NewProgram.h"
#include "ChangeName.h"
#include "UpdateSchedule.h"
using namespace std;




State * State::mainMenu = new MainMenu();
State * State::newProgram = new NewProgram();
State * State::changeName = new ChangeName();
State * State::updateSchedule = new UpdateSchedule();
Program * State::program = new Program();


State * State::current = State::mainMenu;

int main(int argc, char** argv){
    while(true){
        State::current->enter();
        State::current->update();
    }

   return 0;

}
