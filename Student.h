#ifndef STUDENT_H_
#define STUDENT_H_
#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        string name {"\0"}, email {"\0"}, 
            address {"\0"}, year {"\0"};
        double gpa {0.0};
    public:
        Student() = default;
        Student(string n, string e, string a, string y, double g) :
        name{n}, email{e}, address{a}, year{y}, gpa{g} {}
        
        bool setName(string n);
        bool setEmail(string e);
        bool setAddress(string a);
        bool setYear(string y);
        bool setGpa(double g);
        
        string getName();
        string getEmail();
        string getAddress();
        string getYear();
        double getGpa();
};

#endif