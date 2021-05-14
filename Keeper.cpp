//
// Created by Josef Drozd on 07.05.2021.
//

#include "Keeper.h"

Keeper::Keeper(string name, int salary) : Person(name) {
    this->_name = name;
    this->_salary = salary;
}

string Keeper::GetName() {
    return this->_name;
}

int Keeper::GetSalary() {
    return this->_salary;
}
