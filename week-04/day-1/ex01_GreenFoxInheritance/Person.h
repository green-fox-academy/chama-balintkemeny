#ifndef EX01_GREENFOXINHERITANCE_PERSON_H
#define EX01_GREENFOXINHERITANCE_PERSON_H

#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Person {
public:
    Person();
    Person(std::string name, int age, Gender gender);

    virtual void introduce();
    virtual void getGoal();
    std::string getGender();

protected:
    std::string _name;
    int _age;
    Gender _gender;
};


#endif //EX01_GREENFOXINHERITANCE_PERSON_H
