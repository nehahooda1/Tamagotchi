#ifndef PARROT_H
#define PARROT_H

#include "Pet.h" 
#include <string>

class Parrot : public Pet {
public:
  Parrot(string petName, int happiness = 50, int hunger = 50, int energy = 50, int bored = 40);
    virtual ~Parrot();

    void talk();
    void fly();


};

#endif 