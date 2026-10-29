#include "Transport.h"

Transport::Transport()
    : year(0), mileage(0), price(0) {}

Transport::Transport(int year, double mileage, double price)
    : year(year), mileage(mileage), price(price) {}

Transport::~Transport() = default;

void Transport::print() const {
    std::cout << "Год выпуска: " << year << '\n'
              << "Пробег: " << mileage << " км\n"
              << "Стоимость: " << price << " руб.\n";
}