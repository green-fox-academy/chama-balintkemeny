//
// Created by Kemény Bálint on 2019. 09. 26..
//

#ifndef EX14_PIRATES_PIRATE_H
#define EX14_PIRATES_PIRATE_H


class Pirate {
public:
    Pirate();
    void drinkSomeRum();
    void howsItGoingMate();
    void awaken();
    void die();
    void brawl(Pirate* otherPirate);
    void getStatus();

private:
    bool _isDead;
    bool _isUnconscious;
    int _intoxicationLevel;
};


#endif //EX14_PIRATES_PIRATE_H
