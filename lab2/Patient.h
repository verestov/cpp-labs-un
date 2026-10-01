#ifndef LABS2GRADE_PATIENT_H
#define LABS2GRADE_PATIENT_H

#include <iostream>

class Patient {
private:
    std::string name;
    int number;
    std::string address;
    int age;

public:
    Patient();
    Patient(std::string name, int number, std::string address, int age);
    Patient(const Patient& other);

    ~Patient();

    std::string getName();
    void setName(std::string name);

    int getNumber();
    void setNumber(int number);

    std::string getAddress();
    void setAddress(std::string address);

    int getAge();
    void setAge(int age);

    void toString();

};


#endif
