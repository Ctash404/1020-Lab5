#include "Large.h"
//setters
bool ExtraLarge::setMake(string ma)
{
    bool validity {false};

    if(!ma.empty())
    {
        validity = true;
        make = ma;
    }

    return validity;
}
bool ExtraLarge::setModel(string mo)
{
    bool validity {false};

    if(!mo.empty())
    {
        validity = true;
        model = mo;
    }

    return validity;
}
bool ExtraLarge::setYear(int y)
{
    bool validity {false};

    if(y >= 0)
    {
        validity = true;
        year = y;
    }

    return validity;
}
bool ExtraLarge::setSpecificType(string t)
{
    bool validity {false};

    if(!t.empty())
    {
        validity = true;
        specificType = t;
    }

    return validity;
}
bool ExtraLarge::setPurpose(string p)
{
    bool validity {false};

    if(!p.empty())
    {
        validity = true;
        purpose = p;
    }

    return validity;
}

//getters
const string ExtraLarge::getMake()
    { return make; }
const string ExtraLarge::getModel()
    { return model; }
const int ExtraLarge::getYear()
    { return year; }
const string ExtraLarge::getSpecificType()
    { return specificType; }
const string ExtraLarge::getPurpose()
    { return purpose; }