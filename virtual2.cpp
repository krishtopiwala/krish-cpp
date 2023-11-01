#include <iostream>
using namespace std;

class Pet
{
    public:
    virtual void print() 
    {
        cout << "sound of animal";
    }
};

class Dog : public Pet
{
    public:
    void print() override
    {
        cout << "Dog Barks\n";
    }
};

class Cat : public Pet
{
    public:
    void print() override
    {
        cout << "Cat Meows\n";
    }
};

class Elephant : public Pet
{
    public:
    void print() override
    {
        cout << "Elephant trumpet\n";
    }
};

class Lion : public Pet 
{
    public:

    void print() override
    {
        cout << "Lion Roar\n";
    }
};

int main() 
{
    Pet* myPet;
    Dog d;
    Cat c;
    Elephant e;

    myPet = &d;
    myPet->print(); 

    myPet = &c;
    myPet->print();

    return 0;
}