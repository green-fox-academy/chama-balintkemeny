#ifndef EX01_GREENFOXINHERITANCE_PERSON_H
#define EX01_GREENFOXINHERITANCE_PERSON_H

#include <string>

class Person {
public:
    Person();
    Person(std::string name, int age, std::string gender);

    virtual void introduce();
    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    std::string _gender;
};


#endif //EX01_GREENFOXINHERITANCE_PERSON_H
