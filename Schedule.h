#include <list>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
using namespace std;


struct Workout{
    string name;
    int sets;
    int reps;
    float weight;
};

class Program{


public:


    Program(){};
    
    string getName(){

        return programName;
    }

    void setName(string _name){
        programName = _name;
    }

    bool hasName(){
        return programName.length() == 0;
    }

    void addWorkout(int index, struct Workout temp){

        days[index].emplace_back(temp);
    }

    void displayDay(int index){
        
        for(const auto& workout : days[index]){
            cout<<"Exercise name : " << workout.name <<", Sets: " << workout.sets << ", Reps: " << workout.reps << ", Weight: " << workout.weight << endl;
        }

    }

private:
    std::list<Workout> days[7];
    std::string programName; //name of the program
    std::map<std::string, int> weekdays;

};  