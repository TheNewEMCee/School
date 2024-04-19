//
// Created by mclar16 on 2024-04-11.
//

#ifndef SCHOOL_PERSON_H
#define SCHOOL_PERSON_H
#include <iostream>
class Person {
private:
    std::string firstName;
    std::string lastName;
    std::string address;
public:
    Person();
    Person(std::string first, std::string last);
    Person(std::string first, std::string last, std::string add);
    std::string getFirstName();
    std::string getLastName();
    std::string getAddress();
    void setFirstName(std::string n);
    void setLastName(std::string n);
    void setAddress(std::string a);
    std::string toString();
};


#endif //SCHOOL_PERSON_H
