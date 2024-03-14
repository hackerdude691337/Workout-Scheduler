#include "NewProgram.h"


NewProgram::NewProgram(){

}


NewProgram::~NewProgram(){

}


void NewProgram::enter(){

}


void NewProgram::displayWorkout(){
    cout<<"=================================================================================="<<endl;
    cout<<"Monday : " <<endl;
    program->displayDay(0);
    cout<<"=================================================================================="<<endl;

    cout<<"Tuesday : " <<endl;
    program->displayDay(1);
    cout<<"=================================================================================="<<endl;

    
    cout<<"Wednesday : " <<endl;
    program->displayDay(2);
    cout<<"=================================================================================="<<endl;

    cout<<"Thursday :  " <<endl;
    program->displayDay(3);
    cout<<"=================================================================================="<<endl;


    cout<<"Friday : "<<endl;
    program->displayDay(4);
    cout<<"=================================================================================="<<endl;

    cout<<"Saturday : " <<endl;
    program->displayDay(5);
    cout<<"=================================================================================="<<endl;

    cout<<"Sunday : " <<endl;
    program->displayDay(6);
    cout<<"=================================================================================="<<endl;


}

void NewProgram::update(){
    if(program == nullptr){
        cerr<<"error, could not initialize program";
    }

    string input;
    if(program->hasName()){
    cout<<"Begin by giving your workout plan a name!"<<endl;
    cout<<"Program Name : ";
    cin.ignore();
    getline(cin, input);
    program->setName(input);
    cout<<"\n\n";
    cout<<"===================================================\n"
          "Program : " << input << " created!\n"
          "===================================================\n";
    }
     cout<<"Enter the following for commands : " <<endl;
     cout<<"1. Change Program Name" <<endl;
     cout<<"2. Display Weekly Program Schedule" <<endl;
     cout<<"3. Go to a day and edit it" <<endl;
     cout<<"q. Exit to main menu."<<endl;
     cout<<"The following for days are M, T, W, Th, F, S, Su"<<endl;

    char choice;

    cin >> choice;
    
    switch(choice){
        case '1':
            current = changeName;
            return;
        case '2':
            displayWorkout();
            break;
        case '3':
            current = updateSchedule;
            return;
        case 'q':
            current = mainMenu;
            return;
        default:
            break;

     }


}


void NewProgram::leave(){




}
