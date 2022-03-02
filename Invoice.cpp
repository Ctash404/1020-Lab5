#include "Invoice.h"

bool Invoice::setPermitPrice(string p)
{
    bool valid = false;

    if (!p.empty())
    {
        valid = true;
    }
    return valid;
}
bool Invoice::setDiscount(double d)
{
    bool valid = false;

    if (d < 0.0)
    {
        valid = true;
    }
    return valid;
}
bool Invoice::setServiceCharge(double s)
{
    bool valid = false;

    if (s < 0.0)
    {
        valid = true;
    }
    return valid;
}

string Invoice::getPermitPrice()
{
    return permitPrice;
}
double Invoice::getDiscount()
{
    return discount;
}
double Invoice::getServiceCharge()
{
    return serviceCharge;
}