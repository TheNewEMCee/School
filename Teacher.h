//
// Created by mclar16 on 2024-04-11.
//

#ifndef SCHOOL_TEACHER_H
#define SCHOOL_TEACHER_H
#include <iostream>
#include "Person.h"
#include "Student.h"

class Teacher : Person {
private:
    std::string teachables;
    std::string employeeId;
public:
    Teacher();
    Teacher(std::string first, std::string last);
    Teacher(std::string f, std::string l, std::string a, std::string t, std::string id);
    Teacher(std::string f, std::string l, std::string t, std::string id);
    std::string getTeachables();
    std::string getEmployeeId();
    void setTeachables(std::string t);
    void setEmployeeId(std::string id);
private:
    bool isValidId(std::string id);
public:
    void markStudentLate(Student s);
    std::string toString();
};


#endif //SCHOOL_TEACHER_H
