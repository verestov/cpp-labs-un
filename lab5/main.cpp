#include "Car.h"

int main() {
    Car car1(
        2020, 65000, 2500000,
        "Toyota Camry", "Иванов Иван Иванович", "А123АА"
    );

    Car car2(
        2023, 15000, 4000000,
        "BMW X5", "Петров Пётр Петрович", "В456ВВ"
    );

    // Вывод информации
    car1.print();
    std::cout << '\n';
    car2.print();

    // Работа с функциями класса
    car1.setBrand("Toyota Corolla");
    std::cout << "\nНовая марка: " << car1.getBrand() << "\n\n";

    // Преобразование указателя производного класса в базовый
    Car* carPointer = &car1;
    Transport* transportPointer = carPointer;

    transportPointer->print();

    // Преобразование указателя базового класса в производный
    Car* convertedPointer = dynamic_cast<Car*>(transportPointer);

    if (convertedPointer != nullptr) {
        convertedPointer->print();
    }

    return 0;
}