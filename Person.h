//
// Created by Josef Drozd on 07.05.2021.
//

#ifndef OOP_ZOO_PERSON_H
#define OOP_ZOO_PERSON_H

#include <string>

using namespace std;

///Ciste abstraktni trida pro vyuziti dedicnych struktur
class Person {
protected:
    string _name;   ///jmeno, vyuziti atributu protected

public:
    Person(string name);

    virtual string GetName() = 0;   ///virtualni metoda
};

#endif //OOP_ZOO_PERSON_H
