//
// Created by Josef Drozd on 07.05.2021.
//

#ifndef OOP_ZOO_CAGE_H
#define OOP_ZOO_CAGE_H

#pragma once

#include <string>
#include <vector>

#include "Animal.h"
#include "Keeper.h"

using namespace std;

///Klec pro zvirata a prideleny spravce, vyuziti vicenasobne dedicnosti
class Cage : public Animal, public Keeper
{
private:
    string _title;          ///Nazev klece

    vector<Animal*> A;      ///dynamicke pole s ukazately na Animal, lze pridavat a ubirat, polymorfismus

public:
    ///pretizeny konstruktor, moznost pri deklaraci pridat pocet zvirat
    Cage(string species, string title, string name, int salary);
    Cage(string species, string title, string name, int salary, int count);
    ~Cage();

    string GetName();
    string GetTitle();
    bool BornAnimal(int count);
    bool KillAnimal(int count);

    ///zmena chovani prekrytim, misto vypisu celkoveho poctu instanci zvirat se vrati hodnota poctu zvirat v kleci
    int GetAnimalCount();

};

#endif //OOP_ZOO_CAGE_H
