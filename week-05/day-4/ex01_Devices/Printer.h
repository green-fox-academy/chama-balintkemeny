//
// Created by balintkemeny on 2019. 10. 10..
//

#ifndef EX01_DEVICES_PRINTER_H
#define EX01_DEVICES_PRINTER_H

#include <iostream>
#include <string>


class Printer {
public:
    virtual std::string getSize() = 0;
    void print();
};


#endif //EX01_DEVICES_PRINTER_H
