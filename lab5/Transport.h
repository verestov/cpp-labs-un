#ifndef LABS2GRADE_TRANSPORT_H
#define LABS2GRADE_TRANSPORT_H


#include <iostream>

class Transport {
protected:
    int year;
    double mileage;
    double price;

public:
    Transport();
    Transport(int year, double mileage, double price);
    virtual ~Transport();

    virtual void print() const;
};


#endif //LABS2GRADE_TRANSPORT_H
