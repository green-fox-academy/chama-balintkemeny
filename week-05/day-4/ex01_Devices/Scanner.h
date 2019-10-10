//
// Created by balintkemeny on 2019. 10. 10..
//

#ifndef EX01_DEVICES_SCANNER_H
#define EX01_DEVICES_SCANNER_H

#include <iostream>

class Scanner {
public:
    explicit Scanner(int speed);
    void scan();
private:
    int _speed;
};


#endif //EX01_DEVICES_SCANNER_H
