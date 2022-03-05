#ifndef LARGE_H_
#define LARGE_H_
#include <iostream>
#include <string>
using namespace std;
class ExtraLarge
{   
        string make {"\0"};
        string model {"\0"};
        int year = 0;
        string specificType {"\0"};
        string purpose {"\0"};
    public:
        ExtraLarge() = default;
        ExtraLarge(string ma, string mo, int y, string s, string p) : make{ma}, model{mo}, year{y}, specificType{s}, purpose{p} {};

        bool setMake(string ma);
        bool setModel(string mo);
        bool setYear(int y);
        bool setSpecificType(string t);
        bool setPurpose(string p);

        const string getMake();
        const string getModel();
        const int getYear();
        const string getSpecificType();
        const string getPurpose();
};
#endif