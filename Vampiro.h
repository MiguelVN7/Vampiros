//
// Created by Miguel on 9/11/2023.
//

#ifndef PARCIAL2_POO2_VAMPIRO_H
#define PARCIAL2_POO2_VAMPIRO_H
#include <string>
using namespace std;


class Vampiro {
private:
    string name;
    int age;
    int size;
    int bloodType;

public:
    Vampiro(string name2, int age2, int size2, int bloodType2)
            : name(name2), age(age2), size(size2), bloodType(bloodType2) {}

    string getName() const;
    int getAge() const;
    int getSize() const;
    int getBloodType() const;

    void setName(string name3);
    void setAge(int age3);
    void setSize(int size3);
    void setBloodType(int bloodType3);

    void bite();
    void drinkBlood();

};

#endif //PARCIAL2_POO2_VAMPIRO_H
