//
// Created by Miguel on 9/11/2023.
//

#include "Dracula.h"
#include <iostream>
using namespace std;

int Dracula::getVictims() const {
    return victims;
}

int Dracula::getPartners() const {
    return partners;
}

void Dracula::setVictims(int victims3) {
    victims = victims3;
}

void Dracula::setPartners(int partners3) {
    partners = partners3;
}

void Dracula::fly() {
    cout << "Look at me man, I'm flying...." << endl;
}

void Dracula::transform() {
    cout << "I'm transforming into a cute bat..." << endl;
}

void Dracula::kill() {
    cout << "I'm killing you, you're dead now..." << endl;
}

void Dracula::sleep() {
    cout << "I'm sleeping, don't disturb me..." << endl;
}

void Dracula::eatFruit() {
    cout << "I'm eating a fruit, I'm a healthy vampire..." << endl;
}

