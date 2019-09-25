//
// Created by Kemény Bálint on 2019. 09. 25..
//

#ifndef EX05_COUNTER_COUNTER_H
#define EX05_COUNTER_COUNTER_H


class Counter {
public:
    Counter();
    Counter(int value);

    void add();
    void add(int addendum);
    int get();
    void reset();
private:
    int _value;
    int _initValue;
};


#endif //EX05_COUNTER_COUNTER_H
