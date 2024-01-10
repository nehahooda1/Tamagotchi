#include "Pet.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

Pet::Pet(string petName, int happiness, int hunger, int energy, int bored){
  name = petName;
  happyLevel = happiness;
  hungerLevel = hunger;
  energyLevel = energy;
  boredLevel = bored;
}

Pet::~Pet() {}

void Pet::setHappyLevel(int happy_level) {
    happyLevel = happy_level;
}

void Pet::setHungerLevel(int hunger_level) {
    hungerLevel = hunger_level;
}

void Pet::setEnergyLevel(int energy_level) {
  energyLevel = energy_level;
}

void Pet::setBoredLevel(int bored_level) {
    boredLevel = bored_level;
}

void Pet::setName(string s_name) {
    name = s_name;
    cout << "Enter your Pet's name" << endl;
    cin >> name;
}

int Pet::getHappyLevel() {
    return happyLevel;
}

int Pet::getHungerLevel() {
    return hungerLevel;
}

int Pet::getEnergyLevel() {
    return energyLevel;
}

int Pet::getBoredLevel() {
    return boredLevel;
}

string Pet::getName() {
    return name;
}

void Pet::feed() {
  hungerLevel = hungerLevel + 30;
  energyLevel = energyLevel - 10;
  
  cout << name << " has been fed" << endl;
    
}

void Pet::play() {
    boredLevel = boredLevel - 10;
    hungerLevel = hungerLevel - 20;
    energyLevel = energyLevel - 5;
    happyLevel = happyLevel + 20; 
    cout << name << " is so happy you played with them!" << endl;
}

void Pet::takeNap() {
    energyLevel = energyLevel + 20;
    cout << name << " is taking a snooze :)" << endl;
}

void Pet::givePets() {
  energyLevel = energyLevel - 5;
  happyLevel = happyLevel + 10; 
  cout << name << " loves when you give them some cuddles!" << endl;
  
    
}



void Pet::warning() {
  if(hungerLevel <= 30){
    cout << "Your pet is starving ;( feed them!" << endl;
  }
  if(boredLevel >= 90){
    cout << "Your pet is bored ;( play with them!" << endl;
  }
  if(energyLevel <= 30){
    cout << "Your pet needs a nap! ;( take them to sleep!" << endl;
  }
  if(happyLevel <= 30){
    cout << "Your pet is sad :( play or pet them!" << endl;
  }
}

void Pet::dead() {
    if(hungerLevel <= 20){
      cout << "Your pet died of starvation." << endl;
    }
    if(boredLevel >= 100){
      cout << "Your pet died of boredom." << endl;
    }
    if(energyLevel <= 20){
      cout << "Your pet died of sleep deprivation." << endl;
    }
    if(happyLevel <= 20){
      cout << "Your pet died of depression." << endl;
    }
}

void Pet::saveToFile(const string& filename) {
    ofstream outFile(filename);

    if (outFile.is_open()) {
        outFile << name << std::endl;
        outFile << happyLevel << endl;
        outFile << hungerLevel << endl;
        outFile << energyLevel << endl;
        outFile << boredLevel << endl;

        outFile.close();
          cout << "Pet data saved to file: " << filename << endl;
    } else {
          cerr << "Unable to open file for saving: " << filename << endl;
    }
}

void Pet::loadToFile(const string& filename) {
  
  ifstream file(filename); 
  
  if (file.is_open()) { 
      file >> name >> happyLevel >> hungerLevel >> energyLevel >> boredLevel;

      file.close();

      cout << "Data loaded from file: " << filename << endl;
  } else {

      cerr << "Unable to open file: " << filename << endl;
  }
}
    

