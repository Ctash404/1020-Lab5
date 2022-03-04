#ifndef STUDENT_CAR_H_
#define STUDENT_CAR_H_
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

class Car
{
    private:
        string make {"\0"}, model {"\0"}, year {"\0"}, 
        lowEmission {"\0"}, tinted{"\0"};
    public:
        Car() = default;
        Car(string ma, string mo, string y, string l, string t) :
        make{ma}, model{mo}, year{y}, lowEmission{l}, tinted{t} {}
        
        bool setMake(string ma);
        bool setModel(string mo);
        bool setYear(string l);
        bool setLowEmission(string a);
        bool setTinted(string t);
        
        string getModel();
        string getMake();
        string getYear();
        string getLowEmission();
        string getTinted();
};
#endif