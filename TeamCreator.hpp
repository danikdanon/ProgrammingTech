#pragma once
#include "AbstractUnits.hpp"
#include <vector>

using namespace std;

class Team {
public:
    vector<Unit*> v;
    
    int getStrength() {
        int total = 0;
        for(int i=0; i<v.size(); ++i)
            total += v[i]->getStrength();
        return total;
    }
    
    void addUnit(Unit* p) {
        v.push_back(p);
    }
    
    void info(){
        for (auto unit: v){
            unit->info();
        }
    }
};

