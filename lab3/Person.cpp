#include "Person.h"

#include <iostream>

using namespace std;
using namespace std::chrono;

int Person::count = 0;

Person::Person() {
    name = "";
    sex = "";
    count++;
}
Person::Person(
    const string &name,
    const string &sex,
    const Address& address,
    const year_month_day birthday
    ) {
    this->name = name;
    this->sex = sex;
    this->address = address;
    this->birthday = birthday;
    count++;
}
Person::~Person() {
    count--;
};

int Person::countNextBirthday() const {
    const year_month_day today = floor<days>(system_clock::now());
    year_month_day nextBirthday{
        today.year(),
        birthday.month(),
        birthday.day()
    };
    if (nextBirthday < today) {
        nextBirthday = year_month_day{
            today.year() + years{1},
            birthday.month(),
            birthday.day()
        };
    }
    const days diff = sys_days{nextBirthday} - sys_days{today};

    return diff.count();
}

int Person::getCount() {
    return count;
}

void Person::toString() const {
    cout << name << endl;
    cout << sex <<endl;
    address.toString();
    cout << birthday <<endl;
}
