//
// Created by mclar16 on 2024-04-11.
//

#include "Student.h"
Student::Student(std::string first, std::string last) {
    cout << "Student Created" << endl;
    this->setFirstName(first);
    this->setLastName(last);
}
Student::Student(std::string f, std::string l, std::string a, int g, std::string id) {
    this->setFirstName(f);
    this->setLastName(l);
    this->setAddress(a);
    this->setGrade(g);
    this->setStudentId(id);
}
Student::Student(std::string f, std::string l, int g, std::string id) {
    this->setFirstName(f);
    this->setLastName(l);
    this->setGrade(g);
    this->setStudentId(id);
}
int Student::getGrade() {
    return this->grade;
}
std::string Student::getStudentId() {
    return this->studentId;
}
int Student::getNumLates() {
    return this->numLates;
}
void Student::setGrade(int n) {
    this->grade = n;
}
void Student::setStudentId(std::string id) {
    if (isValidId(id)) {
        this->studentId = id;
    } else {
        std::cout << "Invalid ID." << endl;
    }
}
void Student::addLate() {
    this->numLates++;
}
bool Student::isValidId(std::string id) {
    bool isValid = true;
    if (id[0] != 'C' || id.length() < 10 || id.length() > 10) {
        isValid = false;
    }
    int validNumbers = 0;
    for (int i = 0; i < 9; i++) {
        if (id[i + 1] == '1' || id[i + 1] == '2' || id[i + 1] == '3' || id[i + 1] == '4' || id[i + 1] == '5' || id[i + 1] == '6' || id[i + 1] == '7' || id[i + 1] == '8' || id[i + 1] == '9' || id[i + 1] == '0') {
            validNumbers++;
        }
    }
    if (validNumbers < 9) {
        isValid = false;
    }
    return isValid;
}
std::string Student::toString() {

};