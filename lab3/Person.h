#ifndef LABS2GRADE_PERSON_H
#define LABS2GRADE_PERSON_H

#include <chrono>
#include "Address.h"
using namespace std;
using namespace std::chrono;

class Person {
    private:
    string name;
    string sex;
    Address address;
    year_month_day birthday{};

    static int count;

    public:
    Person();
    Person(const string &name, const string &sex, const Address& address, year_month_day birthday);
    ~Person();

    int countNextBirthday() const;
    static int getCount();
    void toString() const;
};


#endif
