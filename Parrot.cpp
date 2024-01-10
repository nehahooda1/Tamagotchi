#include "Parrot.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Parrot::Parrot(string petName, int happiness, int hunger, int energy, int bored)
    : Pet(petName, happiness, hunger, energy, bored) {
}

Parrot::~Parrot() {
}

void Parrot::talk(){
  happyLevel = happyLevel + 10;
  cout << name << " says: Hello! I'm a parrot!" << endl;

}

void Parrot::fly(){
  energyLevel = energyLevel - 10; 
  cout << name << " is flap flap flapping!" << endl;
}
