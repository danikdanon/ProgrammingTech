#include <iostream>
#include "RadianTeam.hpp"
#include "DireTeam.hpp"


int main() {
    DireTeam p1;
    RadiantTeam p2;
    // Heroes: Sven, Juggernaut  Creeeps: Golem, Centanaur
    std::string radiant_hero;
    std::string dire_hero;
    std::string radiant_creep;
    std::string dire_creep;
    std::cin  >> radiant_hero >> radiant_creep >> dire_hero >> dire_creep;
    
    p1.AddHero(radiant_hero);
    p1.AddCreep(radiant_creep);
    p2.AddHero(dire_hero);
    p2.AddCreep(dire_creep);
    p1.info();
    p2.info();
}
