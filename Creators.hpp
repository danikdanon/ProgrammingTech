#pragma once

#include "ConcreteUnits.hpp"

class HeroCreator {    
public:
    Juggernaut* CreateJug(){
        return new Juggernaut;
    }

    Sven* CreateSven(){
        return new Sven;
    }
};

class CreepCreator {
public:
    Centaur* CreateCentaur(){
        return new Centaur;
    }
    
    Golem* CreateGolem(){
        return new Golem;
    }
};


