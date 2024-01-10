#include <iostream>
#include <string>
#include <fstream>
#include "Pet.h"
#include "Parrot.h"
#include "Cat.h"
#include "Babymonkey.h"
using namespace std;

void monkeyInteraction(Babymonkey& monkey, int inter){
  
  int choice;
  bool exitProgram = false; 
  string filename;
  cout << "You can start playing with " << monkey.getName() << "!" << endl;
  cout << "1. feed " << monkey.getName() << "." << endl;
  cout << "2. play with " << monkey.getName() << "." << endl;
  cout << "3. feed " << monkey.getName() << " a snack." << endl;
  cout << "4. give " << monkey.getName() << " a bath." << endl;
  cout << "5. nap time for " << monkey.getName() << "." << endl;
  cout << "6. save game." << endl;
  cout << "7. quit game." << endl;

  while (!exitProgram){
    cin >> choice;
    switch (choice) {
      case 1 :
       monkey.feed();
       cout << endl;
       cout << "----------------------------------------------" << endl;
       cout << "Hunger Level: " << monkey.getHungerLevel() << endl;
       cout << "Boredom Level: " << monkey.getBoredLevel() << endl;
       cout << "Energy Level: " << monkey.getEnergyLevel() << endl;
       cout << "Happy Level: " << monkey.getHappyLevel() << endl; 
       cout << "----------------------------------------------" << endl; 
       cout << endl;
       break;
      
      case 2 :
        monkey.play();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << monkey.getHungerLevel() << endl;
        cout << "Boredom Level: " << monkey.getBoredLevel() << endl;
        cout << "Energy Level: " << monkey.getEnergyLevel() << endl;
        cout << "Happy Level: " << monkey.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 3 : 
        monkey.giveSnack();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << monkey.getHungerLevel() << endl;
        cout << "Boredom Level: " << monkey.getBoredLevel() << endl;
        cout << "Energy Level: " << monkey.getEnergyLevel() << endl;
        cout << "Happy Level: " << monkey.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl; 
        break;
      
      case 4 : 
        monkey.giveBath();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << monkey.getHungerLevel() << endl;
        cout << "Boredom Level: " << monkey.getBoredLevel() << endl;
        cout << "Energy Level: " << monkey.getEnergyLevel() << endl;
        cout << "Happy Level: " << monkey.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;
      
      case 5 :
        monkey.takeNap();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << monkey.getHungerLevel() << endl;
        cout << "Boredom Level: " << monkey.getBoredLevel() << endl;
        cout << "Energy Level: " << monkey.getEnergyLevel() << endl;
        cout << "Happy Level: " << monkey.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 6 :
        cout << "Enter the filename to save the pet's data: ";
        cin >> filename;
        monkey.saveToFile(filename);
        cout << monkey.getName() << " stats have been saved." << endl;
        break; 
      
      case 7 :
        cout << "Goodbye." << endl;
        exitProgram = true;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
    if (monkey.getHungerLevel() <= 30 || monkey.getBoredLevel() >= 90 || monkey.getEnergyLevel() <= 30 || monkey.getHappyLevel() <= 30){
      monkey.warning();
    }
    if (monkey.getHungerLevel() <= 20 || monkey.getBoredLevel() > 100 || monkey.getEnergyLevel() <= 20 || monkey.getHappyLevel() <= 20){
      monkey.dead();
    }
      
  }
  
}

void parrotInteraction(Parrot& parrot, int inter){
  int choice;
  bool exitProgram = false; 
  string filename;
  cout << "You can start playing with " << parrot.getName() << "!" << endl;
  cout << "1. feed " << parrot.getName() << "." << endl;
  cout << "2. play with " << parrot.getName() << "." << endl;
  cout << "3. talk with " << parrot.getName() << endl;
  cout << "4. let " << parrot.getName() << " fly." << endl;
  cout << "5. nap time for " << parrot.getName() << "." << endl;
  cout << "6. save game." << endl;
  cout << "7. quit game." << endl;

  while (!exitProgram){
    cin >> choice;
    switch (choice) {
      case 1 :
       parrot.feed();
       cout << endl;
       cout << "Hunger Level: " << parrot.getHungerLevel() << endl;
       cout << "Boredom Level: " << parrot.getBoredLevel() << endl;
       cout << "Energy Level: " << parrot.getEnergyLevel() << endl;
       cout << "Happy Level: " << parrot.getHappyLevel() << endl; 
       cout << endl;
       break;

      case 2 :
        parrot.play();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << parrot.getHungerLevel() << endl;
        cout << "Boredom Level: " << parrot.getBoredLevel() << endl;
        cout << "Energy Level: " << parrot.getEnergyLevel() << endl;
        cout << "Happy Level: " << parrot.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 3 : 
        parrot.talk();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << parrot.getHungerLevel() << endl;
        cout << "Boredom Level: " << parrot.getBoredLevel() << endl;
        cout << "Energy Level: " << parrot.getEnergyLevel() << endl;
        cout << "Happy Level: " << parrot.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl; 
        break;

      case 4 : 
        parrot.fly();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << parrot.getHungerLevel() << endl;
        cout << "Boredom Level: " << parrot.getBoredLevel() << endl;
        cout << "Energy Level: " << parrot.getEnergyLevel() << endl;
        cout << "Happy Level: " << parrot.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 5 :
        parrot.takeNap();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << parrot.getHungerLevel() << endl;
        cout << "Boredom Level: " << parrot.getBoredLevel() << endl;
        cout << "Energy Level: " << parrot.getEnergyLevel() << endl;
        cout << "Happy Level: " << parrot.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 6 :
        cout << "Enter the filename to save the pet's data: ";
        cin >> filename;
        parrot.saveToFile(filename);
        cout << parrot.getName() << " stats have been saved." << endl;
        break; 

      case 7 :
        cout << "Goodbye." << endl;
        exitProgram = true;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
    if (parrot.getHungerLevel() <= 30 || parrot.getBoredLevel() >= 90 || parrot.getEnergyLevel() <= 30 || parrot.getHappyLevel() <= 30){
      parrot.warning();
    }
    if (parrot.getHungerLevel() <= 20 || parrot.getBoredLevel() > 100 || parrot.getEnergyLevel() <= 20 || parrot.getHappyLevel() <= 20){
      parrot.dead();
    }

  }  
  
}

void catInteraction(Cat& cat, int inter){
  int choice;
  bool exitProgram = false; 
  string filename;
  cout << "You can start playing with " << cat.getName() << "!" << endl;
  cout << "1. feed " << cat.getName() << "." << endl;
  cout << "2. play with " << cat.getName() << "." << endl;
  cout << "3. brush " << cat.getName() << "'s fur." << endl;
  cout << "4. clip " << cat.getName() << "'s nails." << endl;
  cout << "5. nap time for " << cat.getName() << "." << endl;
  cout << "6. save game." << endl;
  cout << "7. quit game." << endl;

  while (!exitProgram){
    cin >> choice;
    switch (choice) {
      case 1 :
       cat.feed();
       cout << endl;
       cout << "----------------------------------------------" << endl;
       cout << "Hunger Level: " << cat.getHungerLevel() << endl;
       cout << "Boredom Level: " << cat.getBoredLevel() << endl;
       cout << "Energy Level: " << cat.getEnergyLevel() << endl;
       cout << "Happy Level: " << cat.getHappyLevel() << endl; 
       cout << "----------------------------------------------" << endl;
       cout << endl;
       break;

      case 2 :
        cat.play();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << cat.getHungerLevel() << endl;
        cout << "Boredom Level: " << cat.getBoredLevel() << endl;
        cout << "Energy Level: " << cat.getEnergyLevel() << endl;
        cout << "Happy Level: " << cat.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 3 : 
        cat.brushFur();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << cat.getHungerLevel() << endl;
        cout << "Boredom Level: " << cat.getBoredLevel() << endl;
        cout << "Energy Level: " << cat.getEnergyLevel() << endl;
        cout << "Happy Level: " << cat.getHappyLevel() << endl;
        cout << "----------------------------------------------" << endl;
        cout << endl; 
        break;

      case 4 : 
        cat.clipNails();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << cat.getHungerLevel() << endl;
        cout << "Boredom Level: " << cat.getBoredLevel() << endl;
        cout << "Energy Level: " << cat.getEnergyLevel() << endl;
        cout << "Happy Level: " << cat.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 5 :
        cat.takeNap();
        cout << endl;
        cout << "----------------------------------------------" << endl;
        cout << "Hunger Level: " << cat.getHungerLevel() << endl;
        cout << "Boredom Level: " << cat.getBoredLevel() << endl;
        cout << "Energy Level: " << cat.getEnergyLevel() << endl;
        cout << "Happy Level: " << cat.getHappyLevel() << endl; 
        cout << "----------------------------------------------" << endl;
        cout << endl;
        break;

      case 6 :
        cout << "Enter the filename to save the pet's data: ";
        cin >> filename;
        cat.saveToFile(filename);
        cout << cat.getName() << " stats have been saved." << endl;
        break; 

      case 7 :
        cout << "Goodbye." << endl;
        exitProgram = true;
        break;
      default:
        cout << "Invalid choice. Please try again." << endl;
        break;
    }
    if (cat.getHungerLevel() <= 30 || cat.getBoredLevel() >= 75 || cat.getEnergyLevel() <= 30 || cat.getHappyLevel() <= 30){
      cat.warning();
    }
    if (cat.getHungerLevel() <= 20 || cat.getBoredLevel() > 100 || cat.getEnergyLevel() <= 20 || cat.getHappyLevel() <= 20){
      cat.dead();
    }

  } 
  
}


int main() {
//start game 
  Pet userPet;
  
  
  char a;
  string filename;
  int inter = 0;
  
    cout << "Welcome to Pretty Pets" << endl;
    cout << "Press Y to start a new game" << endl;
    cout << "Press L to load an existing game" << endl;
    cin >> a;
    cout << endl;

    switch (a) {
        case 'Y':
        case 'y':
            int choice;
            cout << "Choose your pet:" << endl;
            cout << "Press 1 for Baby Monkey" << endl;
            cout << "Press 2 for Parrot" << endl;
            cout << "Press 3 for Cat" << endl;
            cin >> choice;
            cout << endl;
            if(choice == 1){
              cout << "Enter the name for your Baby Monkey: ";
              string monkeyName;
              cin >> monkeyName; 
              Babymonkey myMonkey(monkeyName);
              
              ifstream file("monkey.txt");
              if (file.is_open()) {
                string line;
                while (getline(file, line)) {
                    cout << line << endl;
                }
                 file.close();
              }
              monkeyInteraction(myMonkey, inter);
              }
              
              else if(choice == 2){
                cout << "Enter the name for your Parrot: ";
                string parrotName;
                cin >> parrotName;
                Parrot myParrot(parrotName);

                ifstream file("parrot.txt");
                if (file.is_open()) {
                  string line;
                  while (getline(file, line)) {
                      cout << line << endl;
                  }
                   file.close();
                }
                parrotInteraction(myParrot, inter);
              }
              else if(choice == 3){
                cout << "Enter the name for your Cat: ";
                string catName;
                cin >> catName;
                Cat myCat(catName);

                ifstream file("cat.txt");
                if (file.is_open()) {
                  string line;
                  while (getline(file, line)) {
                      cout << line << endl;
                  }
                   file.close();
                }
                catInteraction(myCat, inter);
              }
              else{
                cout << "Invalid choice. Please try again." << endl;
              }
            break;
      case 'L':
      case 'l': {
        cout << "Enter the filename to load the pet's data: ";
        string filename;
        cin >> filename;
  
        ifstream file(filename);
        if (file.is_open()) {
            string line;
            while (getline(file, line)) {
                cout << line << endl;
            }
            file.close();
        } else {
            cerr << "Unable to open file: " << filename << endl;
        }
      }
      
      }
  

 
  
  

  

  return 0;

}