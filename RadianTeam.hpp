#pragma once
#include "Creators.hpp"
#include <iostream>
#include <vector>
#include <string>

class RadiantTeam {
public:
    RadiantTeam() = default;
    ~RadiantTeam() = default;
    
    void AddHero(std::string name);
    void AddCreep(std::string name);
    void info();
    
private:
    std::vector<Hero*> Heroes;
    std::vector<NeutralCreep*> Creeps;
    CreepCreator Ccreator;
    HeroCreator Hcreator;
};

void RadiantTeam::AddHero(std::string name){
    if( name == "Juggernaut" ) {
        Heroes.push_back(Hcreator.CreateJug());
    }
    if( name == "Sven" ) {
        Heroes.push_back(Hcreator.CreateSven());
    }
}

void RadiantTeam::AddCreep(std::string name){
    if( name == "Golem" ) {
        Creeps.push_back(Ccreator.CreateGolem());
    }
    if( name == "Centanaur" ) {
        Creeps.push_back(Ccreator.CreateCentaur());
    }
}

void RadiantTeam::info(){
    std::cout << "Команда Radiant состоит из : " << std::endl;
    for (auto  &hero : Heroes)
        hero->info();
    for (auto  &creep : Creeps)
        creep->info();
}