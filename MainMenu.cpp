#include "MainMenu.h"

MainMenu::MainMenu(){

}

MainMenu::~MainMenu(){

}

void MainMenu::enter(){
    //Welcome
    //creates new Program object
    cout<<"===================================================================================\n"
        <<"===                      Entering Workout Scheduler                             ===\n"
        <<"===================================================================================\n";


    //List commands upon entering program
    cout<<"Following list of commands: \n"
            <<"1. Create a new program\n"
            <<"2. Load an existing program\n"
            <<"q. Exit the program.\n";


}

void MainMenu::update(){

     char choice;

    cin >> choice;

        while(choice != 'q' && choice != '1' && choice != '2'){
            cerr<<"Error: Please enter either 1, 2, or q." << endl;
            cin >> choice;
        }

        switch(choice){
            case '1':
                current = newProgram;
                return;
            case '2':
               return;
            case 'q':
                cout<<"Exiting program!"<<endl;
                exit(0);
            default:
                cerr << "Error." <<endl;
                break;
        }

}

void MainMenu::leave(){

}