//
// Created by mclar16 on 2024-04-11.
//
#include <iostream>
#include "Person.h"

Person::Person() {
    std::cout << "Person Created." << endl;
}
Person::Person(std::string first, std::string last) {
    std::cout << "Person Created." << endl;
    this->setFirstName(first);
    this->setLastName(last);
}
Person::Person(std::string first, std::string last, std::string add) {
    std::cout << "Person Created." << endl;
    this->setFirstName(first);
    this->setLastName(last);
    this->setAddress(add);
}
std::string Person::getFirstName() {
    return this->firstName;
}
std::string Person::getLastName() {
    return this->lastName;
}
std::string Person::getAddress() {
    return this->address;
}
void Person::setFirstName(std::string n) {
    this->firstName = n;
}
void Person::setLastName(std::string n) {
    this->lastName = n;
}
void Person::setAddress(std::string a) {
    this->address = a;
}
std::string toString() {
    return "EEEEEEEEEEE";
}