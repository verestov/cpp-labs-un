#include <fstream>
#include <iostream>
#include "Patient.h"

int main() {
    Patient patient1("Mickle", 1, "Rnd", 24);
    Patient patient2("Alina", 2, "Spb", 22);
    Patient patient3(patient1);

    patient1.toString();
    patient2.toString();
    patient3.toString();

    Patient pats[6];

    std::ifstream file("patients.txt");

    if (!file) {
        std::cout << "Ошибка файла" << std::endl;
        return 1;
    }

    std::string name;
    int number;
    std::string address;
    int age;

    for (auto & pat : pats) {
        file >> name >> number >> address >> age;

        pat.setName(name);
        pat.setNumber(number);
        pat.setAddress(address);
        pat.setAge(age);
    }

    for (int i = 0; i < 6 - 1; i++) {
        for (int j = 0; j < 6 - i - 1; j++) {
            if (pats[j].getAddress() > pats[j + 1].getAddress()) {
                Patient temp = pats[j];
                pats[j] = pats[j + 1];
                pats[j + 1] = temp;
            }
        }
    }

    for (auto & pat : pats) {
        pat.toString();
    }

    std::cout << std::endl;
    std::cout << "от 25 до 40" << std::endl;

    for (auto & pat : pats) {
        if (pat.getAge() >= 25 && pat.getAge() <= 40) {
            pat.toString();
        }
    }



    return 0;
}