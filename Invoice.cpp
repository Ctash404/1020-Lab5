#include "Invoice.h"

bool setPermitPrice(string p)
{
    bool valid = false;

    if (!p.empty())
    {
        valid = true;
    }
    return valid;
}
bool setDiscount(double d)
{
    bool valid = false;

    if (d < 0.0)
    {
        valid = true;
    }
    return valid;
}
bool setServiceCharge(double s)
{
    bool valid = false;

    if (s < 0.0)
    {
        valid = true;
    }
    return valid;
}

string getPermitPrice()
{

}
double getDiscount()
{

}
double getServiceCharfe()
{

}