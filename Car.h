#ifndef CAR_H_
#define CAR_H_
#include <iostream>
#include <string>
using namespace std;

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