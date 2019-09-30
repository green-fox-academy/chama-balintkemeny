#include <iostream>
#include "Person.h"
#include "Student.h"

int main() {
    Student defaultStudent ("Brad", 25, "male", "WHO");
    defaultStudent.introduce();
    return 0;
}