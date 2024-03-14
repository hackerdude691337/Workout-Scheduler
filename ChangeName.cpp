#include "ChangeName.h"


ChangeName::ChangeName(){



}


ChangeName::~ChangeName(){


    
}

void ChangeName::enter(){
    cout<<"Would you like to change the name of your program? Enter Y or N."<<endl;

}

void ChangeName::update(){

    char choice;
    cin >> choice;
    char(tolower(choice));

    while(choice != 'y' && choice != 'n'){
         cerr << "Please enter either Y or N."<<endl;
         cin >> choice;
         putchar(tolower(choice));
    }

    if(choice == 'n'){
        current = newProgram;
        return;
    }

    cout<<"Please enter the new name of your Program!"<<endl;
    cout<<"Program name : ";

    string input;
    cin.ignore();
    getline(cin, input);


    program->setName(input);
    cout<<"=================================================="<<endl;
    cout<<"Program renamed to " << input << "!"<<endl;
    cout<<"=================================================="<<endl;

    current = newProgram;

}

void ChangeName::leave(){





}