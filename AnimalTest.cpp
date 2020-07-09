#include <iostream>
#include <string>
#include "Animal.h"

using namespace std;

int main() {
    Animal dog;

    cout << "Initial animal name is: " << dog.getName();

    cout << "\nPlease enter the name of your dog: ";
    string animalName;
    getline(cin, animalName);
    dog.setName(animalName);

    cout << "Name in object dog is: " << dog.getName() << endl;
}