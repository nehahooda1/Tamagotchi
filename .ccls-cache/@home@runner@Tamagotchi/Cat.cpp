#include "Cat.h"
#include <iostream> 
#include <string>
#include <fstream>
using namespace std;

Cat::Cat(string petName, int happiness, int hunger, int energy, int bored)
    : Pet(petName, happiness, hunger, energy, bored) {
}

Cat::~Cat() {
}

void Cat::clipNails(){
  happyLevel = happyLevel - 10;
  cout << name << "'s nails are clipped, but she didn't like it!" << endl;
  
}

void Cat::brushFur(){
  happyLevel = happyLevel + 10;
  energyLevel = energyLevel - 10; 
  cout << name << " loves getting her fur brushed!" << endl;
}

