//
// Created by Miguel on 9/11/2023.
//

#ifndef PARCIAL2_POO2_DRACULA_H
#define PARCIAL2_POO2_DRACULA_H
#include "Vampiro.h"
#include "Bat.h"
#include <string>
using namespace std;

class Dracula: public Vampiro, public Bat {
private:
    int victims;
    int partners;

public:
    //Crear el constructor con el super
    Dracula(string name2, int age2, int size2, int bloodType2, int victims2, int partners2)
            : Vampiro(name2, age2, size2, bloodType2), victims(victims2), partners(partners2) {}

    int getVictims() const;
    int getPartners() const;

    void setVictims(int victims3);
    void setPartners(int partners3);

    void fly();
    void transform();
    void kill();
    void sleep();
    void eatFruit();


};


#endif //PARCIAL2_POO2_DRACULA_H
