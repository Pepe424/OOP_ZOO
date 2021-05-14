//
// Created by Josef Drozd on 07.05.2021.
//

#ifndef OOP_ZOO_ANIMAL_H
#define OOP_ZOO_ANIMAL_H

#pragma once

#include <string>

using namespace std;

class Animal
{
private:
    static int animalCount;     ///pocet instanci tridy Animal
    string _species;            ///Druhy zvirete

public:
    static int GetAnimalCount();

    Animal(string species);
    ~Animal();

    string GetSpecies();
};

#endif //OOP_ZOO_ANIMAL_H
