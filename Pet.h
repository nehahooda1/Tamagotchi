#ifndef PET_H
#define PET_H

#include <string>
using namespace std;

class Pet {
protected:
    string name;
    int happyLevel;
    int hungerLevel;
    int energyLevel;
    int boredLevel;

public:

    Pet(string petName, int happiness = 50, int hunger = 50, int energy = 50, int bored = 40);

  Pet() {
      name = "DefaultPet";
      happyLevel = 50;
      hungerLevel = 50;
      energyLevel = 50;
      boredLevel = 40;
  }
  ~Pet();

    void setHappyLevel(int happy_level);
    void setHungerLevel(int hunger_level);
    void setEnergyLevel(int energy_level);
    void setBoredLevel(int bored_level);
    void setName(string s_name);

    int getHappyLevel();
    int getHungerLevel();
    int getEnergyLevel();
    int getBoredLevel();
    string getName();

    virtual void feed();
    virtual void play();
    virtual void takeNap();
    virtual void givePets();
    virtual void warning();
    virtual void dead();
    void saveToFile(const string& filename);
    void loadToFile(const string& filename);
};

#endif // PET_H
