//
// Created by mclar16 on 2024-04-11.
//

#ifndef SCHOOL_STUDENT_H
#define SCHOOL_STUDENT_H
#include <iostream>
#include "Person.h"
using namespace std;

class Student : public Person {
private:
    int grade;
    string studentId;
    int numLates;
public:
    Student(string first, string last);
    Student(string f, string l, string a, int g, string id);
    Student(string f, string l, int g, string id);
    int getGrade();
    string getStudentId();
    int getNumLates();
    void setGrade(int n);
    void setStudentId(string id);
    void addLate();
private:
    bool isValidId(string id);
public:
    string toString();
};


#endif //SCHOOL_STUDENT_H
