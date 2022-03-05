#include "Guest.h"
#include <string>
using namespace std;

bool Guest::setName(string n)
{
    if(!n.empty())
    {
        name = n;
        return true;
    }
    return false;
}
bool Guest::setEmail(string e)
{
    if(!e.empty())
    {
        email = e;
        return true;
    }
    return false;
}
bool Guest::setAddress(string a)
{
    if(!a.empty())
    {
        address = a;
        return true;
    }
    return false;
}
bool Guest::setLocation(string L)
{
    if(!L.empty())
    {
        location = L;
        return true;
    }
    return false;
}
bool Guest::setAge(int a)
{
    if(a > 17)
    {
        age = a;
        return true;
    }
    return false; 
}
string Guest::getName()
{
    return name;
}
string Guest::getEmail()
{
    return email;
}
string Guest::getAddress()
{
    return address;
}
string Guest::getLocation()
{
    return location;
}
int Guest::getAge()
{
    return age;
}