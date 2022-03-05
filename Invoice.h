#ifndef INVOICE_H_
#define INVOICE_H_

#include <iostream>
#include <string>
#include "Student.h"
#include "Car.h"
#include "Invoice.h"
#include "Guest.h"
#include "Motorcycle.h"
#include "Large.h"
#include "Employee.h"

using namespace std;

class Invoice
{
    private:
        double permitPrice {0.0};
        double discount {0.0}, serviceCharge {0.0};
    public:
        Invoice() = default;
        Invoice(double p, double d, double s) : permitPrice{p}, 
            discount{d}, serviceCharge{s} {}

        bool setPermitPrice(double p);
        bool setDiscount(double d);
        bool setServiceCharge(double s);

        double getPermitPrice();
        double getDiscount();
        double getServiceCharge();

        void printOutputStudent(Student &stud);
        void printOutputEmployee(Employee &emp);
        void printOutputVisitor(Guest &guest);
        void printOutputCar(Car &vehcile);
        void printOutputMotorcycle(Motorcycle &vehcile);
        void printOutputLarge(ExtraLarge &vehcile);
        void printOutputTotal(double total);

        double calcTotal(double permit, double service);
        double calcDisTotal(double permit, double discount, double service);
};
#endif