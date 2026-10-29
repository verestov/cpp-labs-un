#include "Car.h"

Car::Car() : Transport(), brand(""), owner(""), number("") {}

Car::Car(int year, double mileage, double price,
         const std::string& brand,
         const std::string& owner,
         const std::string& number)
    : Transport(year, mileage, price),
      brand(brand), owner(owner), number(number) {}

void Car::print() const {
    std::cout << "=== Информация об автомобиле ===\n";
    Transport::print();

    std::cout << "Марка: " << brand << '\n'
              << "Владелец: " << owner << '\n'
              << "Номер автомобиля: " << number << '\n';
}

void Car::setBrand(const std::string& brand) {
    this->brand = brand;
}

std::string Car::getBrand() const {
    return brand;
}