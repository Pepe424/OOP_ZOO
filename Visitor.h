//
// Created by Josef Drozd on 07.05.2021.
//

#ifndef OOP_ZOO_VISITOR_H
#define OOP_ZOO_VISITOR_H

#pragma once

#include <string>

#include "Person.h"

using namespace std;

///navstevnik
class Visitor : public Person
{
private:
    int _visit;     ///datum navstevy

public:
    Visitor(string name, int visit);

    string GetName();
    int GetVisit();

};

#endif //OOP_ZOO_VISITOR_H
