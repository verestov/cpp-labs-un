#include <iostream>
#include "Product.h"

using namespace std;

int main() {
    // 1. Создание объектов конструкторами
    Product p1("Ноутбук", 80000, 24);
    Product p2("Телефон", 50000, 12);
    Product p3;

    cout << "=== Исходные товары ===" << endl;
    cout << p1 << endl << endl;
    cout << p2 << endl << endl;

    // 2. Ввод и вывод через перегруженные операторы
    cout << "=== Ввод нового товара ===" << endl;
    cin >> p3;

    cout << "\nВведенный товар:" << endl;
    cout << p3 << endl;

    // 3. Сравнение товаров по цене
    cout << "\n=== Сравнение цен ===" << endl;

    cout << boolalpha;
    cout << "p1 < p2: " << (p1 < p2) << endl;
    cout << "p1 > p2: " << (p1 > p2) << endl;
    cout << "p1 == p2: " << (p1 == p2) << endl;

    // 4. Конструктор преобразования
    Product p4 = 15000.0;

    cout << "\n=== Конструктор преобразования ===" << endl;
    cout << p4 << endl;

    // 5. Перегрузка операций разных типов
    Product p5 = p1 + 5000.0;

    cout << "\n=== p1 + 5000 ===" << endl;
    cout << p5 << endl;

    double difference = p1 - p2;

    cout << "\nРазница цен p1 и p2: "
         << difference << endl;

    // 6. Операция присваивания
    Product p6;
    p6 = p1;

    cout << "\n=== Присваивание p6 = p1 ===" << endl;
    cout << p6 << endl;

    // 7. Снижение цены на 50%
    cout << "\n=== Снижение цены p1 на 50% ===" << endl;
    p1.reducePrice();
    cout << p1 << endl;

    // 8. Перегруженные функции setData()
    cout << "\n=== Перегруженные функции ===" << endl;

    p2.setData("Планшет", 30000, 18);
    cout << p2 << endl << endl;

    p2.setData(25000);
    cout << "После изменения цены:" << endl;
    cout << p2 << endl;

    return 0;
}