//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX03_ANIMAL_ANIMAL_H
#define EX03_ANIMAL_ANIMAL_H


class Animal {
public:
    Animal ();
    void eat ();
    void drink ();
    void play ();

    int getHunger() const;
    int getThirst() const;

private:
    int hunger;
    int thirst;
};


#endif //EX03_ANIMAL_ANIMAL_H
