#ifndef BABYMONKEY_H
#define BABYMONKEY_H
#include <string>
#include "Pet.h" 

class Babymonkey : public Pet {
public:
Babymonkey(string petName, int happiness = 50, int hunger = 50, int energy = 50, int bored = 40);
    virtual ~Babymonkey();

    void giveBath();
    void giveSnack();


};

#endif 