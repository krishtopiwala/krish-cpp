#include <iostream>
using namespace std;

class Pet 
{
    public:
    void print()
    {
        cout << "enter sound of animal";
    }
};

class Dog : public Pet
{
    public:

    void virtual print()
    {
        cout << "Dog barks";
    }
};

class Cat : public Pet
{
    public:

    void virtual print()
    {
        cout << "Cat Meows";
    }
};

int main() 
{
    Pet myPet;
    Dog myDog;
    Cat myCat;

    return 0;
}