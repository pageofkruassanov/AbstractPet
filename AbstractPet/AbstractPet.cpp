#include <iostream>
#include "Dog.h"
#include "Cat.h"
#include "parrot.h"
#include "Human.h"

using namespace std;

int main()
{
    Pet* pet = new Dog("Bumer" , "gav", "staff");
    Human hum;
    hum.ShowPets(pet);
    cout << endl << "------------" << endl;
    delete pet;
    pet = new Cat("Lucky", "myau", "none");
    hum.ShowPets(pet);
    cout << endl << "------------" << endl;
    delete pet;
    pet = new parrot("Riki", "means alphabet", "budgerigar");
    hum.ShowPets(pet);

}