#include <iostream>

#include "Cage.h"
#include "Visitor.h"
#include "Animal.h"

using namespace std;

int main() {

    Visitor* v_Honza = new Visitor("Honza", 20210509);
    cout << "Vistor: " << v_Honza->GetName() << " came to ZOO at: " << v_Honza->GetVisit();

    Animal* a_Zebra = new Animal("Zebra");
    cout << " and saw animal: " << a_Zebra->GetSpecies() << endl;

    Cage* c_Tyger = new Cage("Tyger", "Cyge of Tyger", "David", 100);
    cout << "New Cage: " << c_Tyger->GetTitle() << " has Keeper: " << c_Tyger->GetName() << " with salary: " << c_Tyger->GetSalary() << endl;

    cout << "Afer 5 animal born" << endl;
    c_Tyger->BornAnimal(5);

    cout << "Now we have total: " << a_Zebra->GetAnimalCount() << " at ZOO but in: " << c_Tyger->GetTitle() << " we have: " << c_Tyger->GetAnimalCount();
    cout << " " << c_Tyger->GetSpecies() << endl;

    return 0;
}