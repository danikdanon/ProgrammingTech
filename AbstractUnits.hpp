#pragma once
#include <string>

// общий класс юнита - основа для героев и крипов
class Unit {
public:
    int healthPoints;
    int damage;
    virtual void info() {};
};

// abstract class hero
class Hero : public Unit {
public:
    std::string skill1;
    std::string skill2;
    int default_money;
    int mana;
    int level;
    double hp_coef;    // на сколько увеличивается хп, мана и дамаг за каждый уровень
    double mana_coef;
    double dmg_coef;
    
    virtual void use_skill1() {};
    virtual void use_skill2() {};
    virtual void info() {};
};

// абстракный класс - нейтральный крип
class NeutralCreep : public Unit{
public:
    int spawn_time;
    int killing_reward;
};

