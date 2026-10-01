#ifndef LABS2GRADE_ADDRESS_H
#define LABS2GRADE_ADDRESS_H

#include <string>
using namespace std;


class Address {
    private:
    string cityName;
    string streetName;
    int buildingNumber{};
    int apartmentNumber{};

    static int count;

    public:
    Address();

    Address(string cityName, string streetName, int buildingNumber, int apartmentNumber);

    ~Address();

    void toString() const;
};

#endif
