//
// Created by Josef Drozd on 07.05.2021.
//

#include "Cage.h"
#include "Keeper.h"

Cage::Cage(string species, string title, string name, int salary) : Keeper(name, salary), Animal(species){
    this->_title = title;
    this->_name = name;
}

Cage::Cage(string species, string title, string name, int salary, int count) : Keeper(name, salary), Animal(species) {
    this->_title = title;
    this->_name = name;
    BornAnimal(count);
}

Cage::~Cage() {

}

string Cage::GetTitle() {
    return this->_title;
}

string Cage::GetName() {
    return this->_name;
}

bool Cage::BornAnimal(int count) {
    for (int i = 0; i < count; i++) {
        A.push_back(new Animal(GetSpecies()));
    }
}

bool Cage::KillAnimal(int count) {
    for (int i = 0; i < count; i++) {
        if (A.empty())
            return false;
        A.pop_back();
    }
    return true;
}

int Cage::GetAnimalCount() {
    return A.size() + 1;
}





