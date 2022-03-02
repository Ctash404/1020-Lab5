#ifndef INVOICE_H_
#define INVOICE_H_

#include <iostream>
#include <string>
using namespace std;

class Invoice
{
    private:
        string permitPrice {"\0"};
        double discount {0.0}, serviceCharge {0.0};
    public:
        Invoice() = default;
        Invoice(string p, double d, double s) : permitPrice{p}, 
            discount{d}, serviceCharge{s} {}

        bool setPermitPrice(string p);
        bool setDiscount(double d);
        bool setServiceCharge(double s);

        string getPermitPrice();
        double getDiscount();
        double getServiceCharge();

        void printOutput(string, string, string, int, string, double);
};
#endif