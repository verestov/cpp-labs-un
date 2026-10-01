#include <iostream>

#include "Address.h"
#include "Person.h"

using namespace std;
using namespace std::chrono;

int main() {
    Address robertovo ("Brynsk", "Robertovo", 123, 28);
    Address sverdlovo ("Krasnodar", "Sverdlovo", 18, 113);

    Person* mickle = new Person(
        "Mickle",
        "male",
        robertovo,
        year_month_day{year{2002}, month{4}, day{26}}
    );
    Person* alina = new Person(
        "Alina",
        "female",
        sverdlovo,
        year_month_day{year{2004}, month{12}, day{26}}
    );

    alina->toString();
    mickle->toString();

    cout << "До дня рождения: Mickle "
          << mickle->countNextBirthday()
          << " дней" << endl;

    cout << "До дня рождения: Alina "
          << alina->countNextBirthday()
          << " дней" << endl;

    cout << "Кол-во объектов: " << Person::getCount() << endl;

    delete mickle;
    delete alina;

    cout << "Кол-во объектов после удаления: " << Person::getCount() << endl;
    return 0;
}
