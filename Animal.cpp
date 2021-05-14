//
// Created by Josef Drozd on 07.05.2021.
//
#include "Animal.h"

int Animal::animalCount = 0;

Animal::Animal(string species) {
    this->_species = species;
    Animal::animalCount += 1;
}

Animal::~Animal() {
    Animal::animalCount -= 1;
}

string Animal::GetSpecies() {
    return this->_species;
}

int Animal::GetAnimalCount() {
    return Animal::animalCount;
}

