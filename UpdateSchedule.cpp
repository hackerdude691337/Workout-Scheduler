#include "UpdateSchedule.h"


UpdateSchedule::UpdateSchedule(){



}

UpdateSchedule::~UpdateSchedule(){



}

void UpdateSchedule::enter(){
    


    cout<<"Choose a day : M, T, W, Th, F, S, Su, or q to go back."<<endl;
    days.emplace("m", 0);
    days.emplace("t", 1);
    days.emplace("w", 2);
    days.emplace("th", 3);
    days.emplace("f", 4);
    days.emplace("s", 5);
    days.emplace("su", 6);
    
}


void UpdateSchedule::addWorkoutToDay(int index){
    string input;
    struct Workout *temp = new Workout();

    while(true){
        string name = "";
        int reps = 0;
        int sets = 0;
        float weight = 0.0;

        cout<<"Exercise name? : "<<endl;
        getline(cin, input);
        temp->name = input;

        cout<<"Sets? : " <<endl;
        cin >> sets;
        temp->sets = sets;

        cout<<"Reps? : " <<endl;
        cin >> reps;
        temp->reps = reps;


        cout<<"Weight? : "<<endl;
        cin >> weight;
        temp->weight = weight; 

        program->addWorkout(index, *temp);
        cout<<"Add another exercise? Y or N" <<endl;
        cin >> input;
        if(input == "y"){
            continue;
        }
        else{
            break;

        }
        
    }


}

void UpdateSchedule::update(){
    string input;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    getline(cin, input);

    if(input == "q"){
       current = newProgram;
       return;
    }

    while(days.count(input) == 0){
          if(input == "q"){
            current = newProgram;
            return;
        }
        cout<<"Please choose one of the days or 'q'.\n";
        getline(cin, input);
    }

    int dayIndex = days.at(input);
    
    addWorkoutToDay(dayIndex);
    



}

void UpdateSchedule::leave(){




}

