#ifndef CLASS_H_
#define CLASS_H_
#include <iostream>
#include <string>
using namespace std;
class Student
{
    private:
        string name {"default"}, email {"default"}, 
            address {"default"}, year {"default"};
        double gpa {2.0};
    public:
        Student() = default;
        Student(string n, string e, string a, string y, double g) :
        name{n}, email{e}, address{a}, year{y}, gpa{g} {}
        void setName(string n);
        void setEmail(string e);
        void setAddress(string a);
        void setYear(string y);
        void setGpa(double g);
        string getName();
        string getEmail();
        string getAddress();
        string getYear();
        double getGpa();
};
class Car
{
    private:
        string make {"default"}, model {"default"}, year {"default"}, 
        lowEmission {"default"}, tinted{"default"};
    public:
        Car() = default;
        Car(string ma, string mo, string y, string l, string t) :
        make{ma}, model{mo}, year{y}, lowEmission{l}, tinted{t} {}
        void setMake(string ma);
        void setModel(string mo);
        void setYear(string l);
        void setLowEmission(string a);
        void setTinted(string t);
        string getModel();
        string getMake();
        string getYear();
        string getLowEmission();
        string getTinted();
};
#endif