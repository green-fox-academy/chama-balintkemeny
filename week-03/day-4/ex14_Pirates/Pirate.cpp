//
// Created by Kemény Bálint on 2019. 09. 26..
//

#include "Pirate.h"
#include <iostream>
#include <stdlib.h>
#include <time.h>

Pirate::Pirate() : _isDead (false), _isUnconscious(false), _intoxicationLevel(0) {}

void Pirate::drinkSomeRum() {
    if (_isDead) {
        std::cout << "Dead pirates don't drink." << std::endl;
    } else if (_isUnconscious) {
        std::cout << "The pirate is passed out." << std::endl;
    } else {
        _intoxicationLevel++;
        std::cout << "The pirate drinks some rum!" << std::endl;
    }
}

void Pirate::howsItGoingMate() {
    if (_isDead) {
        std::cout << "This pirate is dead." << std::endl;
    } else if (_isUnconscious) {
        std::cout << "The pirate is passed out." << std::endl;
    } else if (_intoxicationLevel < 5) {
        std::cout << "Pour me anudder!" << std::endl;
    } else {
        std::cout << "Arghh, I'm a pirate. How d'ya d'ink its goin?" << std::endl;
        _isUnconscious = true;
    }
}

void Pirate::awaken() {
    if (_isUnconscious) {
        std::cout << "The pirate sleeps and awakens with a massive hangover." << std::endl;
    } else {
        std::cout << "The pirate is already awake and ready." << std::endl;
    }
    _isUnconscious = false;
}

void Pirate::die() {
    if (_isDead) {
        std::cout << "This pirate is already dead." << std::endl;
    } else {
        std::cout << "*Yaaarrrgh!* The pirate dies!" << std::endl;
    }
}

void Pirate::brawl(Pirate* otherPirate) {
    if (this->_isDead || otherPirate->_isDead) {
        std::cout << "One of the combatants is already dead!" << std::endl;
    } else if (this->_isUnconscious || otherPirate->_isUnconscious) {
        std::cout << "One of the combatants is unconscious";
    } else {
        srand (time(NULL));
        int random = rand() % 3;
        if (random == 0) {
            otherPirate->_isDead = true;
            std::cout << "Yeah, the pirate killed the other pirate!" << std::endl;
        } else if (random == 1) {
            this->_isDead = true;
            std::cout << "Oh no, the other pirate killed the pirate!" << std::endl;
        } else {
            this->_isUnconscious = true;
            otherPirate->_isUnconscious = true;
            std::cout << "The brawl is a draw, both pirates have passed out!" << std::endl;
        }
    }
}

void Pirate::getStatus() {
    std::cout << "Is Dead: " << _isDead << std::endl;
    std::cout << "Is Unconscious: " << _isUnconscious << std::endl;
    std::cout << "Drunkenness: " << _intoxicationLevel << std::endl;
}
