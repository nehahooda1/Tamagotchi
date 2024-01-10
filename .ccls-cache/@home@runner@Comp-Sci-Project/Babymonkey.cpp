#include "Babymonkey.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Babymonkey::Babymonkey(string petName, int happiness, int hunger, int energy, int bored)
    : Pet(petName, happiness, hunger, energy, bored) {
}

Babymonkey::~Babymonkey() {
}

void Babymonkey::giveBath(){
  happyLevel = happyLevel + 10;
  
  cout << name << " is so clean!" << endl;

}

void Babymonkey::giveSnack(){
  hungerLevel = hungerLevel - 10; 
  cout << name << " loves bananas!" << endl;
}
