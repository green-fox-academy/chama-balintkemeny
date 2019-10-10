//
// Created by balintkemeny on 2019. 10. 10..
//

#include "Scanner.h"

Scanner::Scanner(int speed) : _speed(speed) {}

void Scanner::scan() {
    std::cout << "I'm scanning a document at " << _speed << " ppm." << std::endl;
}
