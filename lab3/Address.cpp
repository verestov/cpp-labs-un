#include "Address.h"

#include <chrono>
#include <iostream>

using namespace std;

Address::Address() {
    cityName = "";
    streetName = "";
    buildingNumber = 0;
    apartmentNumber = 0;
};
Address::Address(
    string cityName,
    string streetName,
    const int buildingNumber,
    const int apartmentNumber
    ) {
    this->cityName = cityName;
    this->streetName = streetName;
    this->buildingNumber = buildingNumber;
    this->apartmentNumber = apartmentNumber;
}

Address::~Address() = default;

void Address::toString() const {
    cout << cityName << " " << streetName << " " << buildingNumber << " " << apartmentNumber << endl;
}
