//
// Created by Josef Drozd on 07.05.2021.
//

#include "Visitor.h"

Visitor::Visitor(string name, int visit) : Person(name){
    this->_name = name;
    this->_visit = visit;
}

string Visitor::GetName() {
    return this->_name;
}

int Visitor::GetVisit() {
    return this->_visit;
}


