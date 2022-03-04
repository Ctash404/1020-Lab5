#include "Invoice.h"

bool Invoice::setPermitPrice(double p)
{
    bool valid = false;

    if (p < 0.0)
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

double Invoice::getPermitPrice()
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
// Calculates total without discount
double Invoice::calcTotal(double permit, double service)
{
    return service + permit;
}
// Calculates total with the discount
double Invoice::calcDisTotal(double permit, double discount, double service)
{
    return permit + service - (permit * discount);
}
// Prints output of a student and their car
void Invoice::printOutput(Student &stud, Car &vehcile, double total)
{
    cout << "Name: " << stud.getName() << endl;
    cout << "Email: " << stud.getEmail() << endl;
    cout << "Address: " << stud.getAddress() << endl;
    cout << "Year: " << stud.getYear() << endl;
    cout << "Gpa: " << stud.getGpa() << endl;

    cout << "Make: " << vehcile.getMake() << endl;
    cout << "Model: " << vehcile.getModel() << endl;
    cout << "Year: " << vehcile.getYear() << endl;
    cout << "Low emission: " << vehcile.getLowEmission() << endl;
    cout << "Tinted: " << vehcile.getTinted() << endl;

    cout << "Total" << total << endl;
}
