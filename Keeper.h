//
// Created by Josef Drozd on 07.05.2021.
//

#ifndef OOP_ZOO_KEEPER_H
#define OOP_ZOO_KEEPER_H

#pragma once

#include <string>

#include "Person.h"

using namespace std;

///Spravce
class Keeper : public Person
{
private:
    int _salary;    ///plat

public:
    Keeper(string name, int salary);

    string GetName();
    int GetSalary();

};

#endif //OOP_ZOO_KEEPER_H
