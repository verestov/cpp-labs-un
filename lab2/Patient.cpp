#include "Patient.h"

Patient::Patient() {
    name = "";
    number = 0;
    address = "";
    age = 0;
}

Patient::Patient(std::string name, int number, std::string address, int age) {
    this->name = name;
    this->number = number;
    this->address = address;
    this->age = age;
}

Patient::Patient(const Patient& other) {
    this->name = other.name;
    this->number = other.number;
    this->address = other.address;
    this->age = other.age;
}

Patient::~Patient() {
}

std::string Patient::getName() {
    return name;
}

void Patient::setName(std::string name) {
    this->name = name;
}

int Patient::getNumber() {
    return number;
}

void Patient::setNumber(int number) {
    this->number = number;
}

std::string Patient::getAddress() {
    return address;
}

void Patient::setAddress(std::string address) {
    this->address = address;
}

int Patient::getAge() {
    return age;
}

void Patient::setAge(int age) {
    this->age = age;
}



void Patient::toString() {
    std::cout << "Patient № " << number << std::endl;
    std::cout << name << std::endl;
    std::cout << number << std::endl;
    std::cout << address << std::endl;
    std::cout << age << std::endl;
    std::cout << std::endl;
}