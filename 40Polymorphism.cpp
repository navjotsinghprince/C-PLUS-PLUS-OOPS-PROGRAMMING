#include <iostream>
#include<conio.h>
using namespace std;

//Polymorphism means "many forms", and it occurs when we have many classes that are related to each other by inheritance

// Base class
class Animal {
  public:
    void animalSound() {
    cout << "The animal makes a sound \n" ;
  }
};

// Derived class
class Pig : public Animal {
  public:
    void animalSound() {
    cout << "The pig says: wee wee \n" ;
   }
};

// Derived class
class Dog : public Animal {
  public:
    void animalSound() {
    cout << "The dog says: bow wow \n" ;
  }
};

int main() {
  Animal myAnimal;
  Pig myPig;
  Dog myDog;

  myAnimal.animalSound(); //same functions but works with different-different tasks
  myPig.animalSound();
  myDog.animalSound();
  return 0;
}

//Navjot Singh Prince