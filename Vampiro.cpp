//
// Created by Miguel on 9/11/2023.
//

#include "Vampiro.h"
#include <iostream>
using namespace std;

    string Vampiro::getName() const {
        return name;
    }

    int Vampiro::getAge() const {
        return age;
    }

    int Vampiro::getSize() const {
        return size;
    }

    int Vampiro::getBloodType() const {
        return bloodType;
    }

    void Vampiro::setName (string name3) {
        name = name3;
    }

    void Vampiro::setAge (int age3) {
        age = age3;
    }

    void Vampiro::setSize(int size3) {
        size = size3;
    }

    void Vampiro::setBloodType(int bloodType3) {
        bloodType = bloodType3;
    }

    void Vampiro::bite(){
        cout << "Grrrrr... I'm maaaaad and want to biteee something..." << endl;
    }

    void Vampiro::drinkBlood(){
        cout << "I'm thirsty , let me drink your blood..." << endl;
    }




