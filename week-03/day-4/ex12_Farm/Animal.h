//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX12_FARM_ANIMAL_H
#define EX12_FARM_ANIMAL_H

class Animal {
public:
    Animal();
    void eat();
    void drink();
    void play();

    int getHunger() const;
    int getThirst() const;

private:
    int _hunger;
    int _thirst;
};

#endif //EX12_FARM_ANIMAL_H
