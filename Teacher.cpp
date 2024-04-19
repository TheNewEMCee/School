//
// Created by mclar16 on 2024-04-11.
//
#include <iostream>
#include <sstream>
#include "Teacher.h"

Teacher::Teacher() {
    std::cout << "Teacher Created." << endl;
}
Teacher::Teacher(std::string first, std::string last){
    this->setFirstName(first);
    this->setLastName(last);
}
Teacher::Teacher(std::string f, std::string l, std::string a, std::string t, std::string id) {
    this->setFirstName(f);
    this->setLastName(l);
    this->setAddress(a);
    this->setTeachables(t);
    this->setEmployeeId(id);
}
Teacher::Teacher(std::string f, std::string l, std::string t, std::string id) {
    this->setFirstName(f);
    this->setLastName(l);
    this->setTeachables(t);
    this->setEmployeeId(id);
}
std::string Teacher::getTeachables() {
    return this->teachables;
}
std::string Teacher::getEmployeeId() {
    return this->employeeId;
}
void Teacher::setTeachables(std::string t) {
    this->teachables = t;
}
void Teacher::setEmployeeId(std::string id) {
    if (isValidId(id)) {
        this->employeeId = id;
    } else {
        std::cout << "Invalid ID." << endl;
        this->employeeId = "invalid id";
    }
}
bool Teacher::isValidId(std::string id) {
    bool isValid = true;
    if (id[0] != 'T' || id.length() < 6 || id.length() > 6) {
        isValid = false;
    }
    int validNumbers = 0;
    for (int i = 0; i < 5; i++) {
        if (id[i + 1] == '1' || id[i + 1] == '2' || id[i + 1] == '3' || id[i + 1] == '4' || id[i + 1] == '5' || id[i + 1] == '6' || id[i + 1] == '7' || id[i + 1] == '8' || id[i + 1] == '9' || id[i + 1] == '0') {
            validNumbers++;
        }
    }
    if (validNumbers < 5) {
        isValid = false;
    }
    return isValid;
}
void Teacher::markStudentLate(Student s) {

}
std::string Teacher::toString() {
    stringstream sts;
    sts << this->getFirstName();
}