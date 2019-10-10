#include <iostream>
#include <vector>

#include "Copier.h"
#include "Printer3D.h"

int main() {
    std::vector<Printer*> printers;
    printers.push_back(new Printer2D(10, 5));
    printers.push_back(new Printer2D(20, 10));
    printers.push_back(new Printer2D(5, 5));
    printers.push_back(new Printer3D(25, 25, 25));
    printers.push_back(new Printer3D(10, 5, 5));
    printers.push_back(new Copier(10, 10, 100));

    for (Printer* p : printers) {
        p->print();
    }

    std::vector<Scanner*> scanners;
    scanners.push_back(new Scanner(200));
    scanners.push_back(new Scanner(100));
    scanners.push_back(new Copier(10, 20, 125));
    scanners.push_back(new Copier(20, 20, 150));

    for (Scanner* s : scanners) {
        s->scan();
    }

    Copier testCopier(30, 30, 200);
    testCopier.copy();
    
    return 0;
}