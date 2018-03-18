#pragma once
#include "Creators.hpp"
#include <iostream>
#include <vector>
#include <string>

class DireTeam {
public:
    DireTeam() = default;
    ~DireTeam() = default;
    
    void AddHero(std::string name);
    void AddCreep(std::string name);
    void info();
    
private:
    std::vector<Hero*> Heroes;
    std::vector<NeutralCreep*> Creeps;
    CreepCreator Ccreator;
    HeroCreator Hcreator;
};

void DireTeam::AddHero(std::string name){
    if( name == "Juggernaut" ) {
        Heroes.push_back(Hcreator.CreateJug());
    }
    if( name == "Sven" ) {
        Heroes.push_back(Hcreator.CreateSven());
    }
}

void DireTeam::AddCreep(std::string name){
    if( name == "Golem" ) {
        Creeps.push_back(Ccreator.CreateGolem());
    }
    if( name == "Centanaur" ) {
        Creeps.push_back(Ccreator.CreateCentaur());
    }
}

void DireTeam::info(){
    std::cout << "Команда Dire состоит из : " << std::endl;
    for (auto  &hero : Heroes)
        hero->info();
    for (auto  &creep : Creeps)
        creep->info();
}
