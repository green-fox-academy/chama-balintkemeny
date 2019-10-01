//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX04_DEVICES_PRINTER_H
#define EX04_DEVICES_PRINTER_H

#include <string>


class Printer {
public:
    virtual std::string getSize()=0;
    virtual void print();
};


#endif //EX04_DEVICES_PRINTER_H
