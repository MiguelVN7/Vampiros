#include <iostream>
#include "Dracula.h"
#include <string>
using namespace std;

int main() {
    string name;
    int age;
    int size;
    int bloodType;
    int victims;
    int partners;

    cout << "Enter your name:  " << endl;
    cin >> name;
    cout << "Enter your age:  " << endl;
    cin >> age;
    cout << "Enter your size:  " << endl;
    cin >> size;
    cout << "Enter your blood type:  " << endl;
    cin >> bloodType;
    cout << "Enter your victims:  " << endl;
    cin >> victims;
    cout << "Enter your partners:  " << endl;
    cin >> partners;

    Dracula* d1 = new Dracula(name, age, size, bloodType, victims, partners);
    d1 -> bite();
    d1 -> drinkBlood();
    d1 -> fly();
    d1 -> transform();
    d1 -> kill();
    d1 -> sleep();
    d1 -> eatFruit();

    cout << "My name is: " << d1 -> getName() << endl;
    cout << "My age is: " << d1 -> getAge() << endl;
    cout << "MY size is: " << d1 -> getSize() << endl;
    cout << "MY blood type is: " << d1 -> getBloodType() << endl;

    d1 -> setName("Andres");
    cout << "My name is: " << d1 -> getName() << endl;
    return 0;
}
