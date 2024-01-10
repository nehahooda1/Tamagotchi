#ifndef CAT_H
#define CAT_H

#include "Pet.h" 
#include <string>

class Cat : public Pet {
public:
    Cat(string petName, int happiness = 50, int hunger = 50, int energy = 50, int bored = 40);

    virtual ~Cat();

    void clipNails();
    void brushFur();
    

};

#endif // CAT_H