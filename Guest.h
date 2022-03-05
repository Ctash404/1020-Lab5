#ifndef GUEST_H
#define GUEST_H
#include <iostream>
#include <string>
using namespace std;


class Guest{
    private:
        string name{"\0"}, email{"\0"}, address{"\0"}, location {"\0"};
        int age{0};

    public:
        Guest() = default;
        Guest(string n, string e, string a, string L, int ag) : name{n}, email{e}, address{a}, location{L}, age{ag} {}
        
        bool setName(string n);
        bool setEmail(string e);
        bool setAddress(string a);
        bool setLocation(string L);
        bool setAge(int a);
        string getName();
        string getEmail();
        string getAddress(); 
        string getLocation();
        int getAge();


}; 



#endif