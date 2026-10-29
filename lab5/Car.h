//
// Created by the creature  on 29/10/26.
//

#ifndef LABS2GRADE_CAR_H
#define LABS2GRADE_CAR_H


#include "Transport.h"
#include <string>

class Car : public Transport {
private:
    std::string brand;
    std::string owner;
    std::string number;

public:
    Car();
    Car(int year, double mileage, double price,
        const std::string& brand,
        const std::string& owner,
        const std::string& number);

    void print() const override;

    void setBrand(const std::string& brand);
    std::string getBrand() const;
};



#endif //LABS2GRADE_CAR_H
