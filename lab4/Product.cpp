#include "Product.h"

using namespace std;

Product::Product() {
    name = "";
    price = 0;
    warranty = 0;
}

Product::Product(const string& name, double price, int warranty) {
    this->name = name;
    this->price = price;
    this->warranty = warranty;
}

Product::Product(double price) {
    name = "Неизвестный товар";
    this->price = price;
    warranty = 0;
}

Product::~Product() = default;

void Product::input() {
    cout << "Введите наименование товара: ";
    getline(cin >> ws, name);

    cout << "Введите цену товара: ";
    cin >> price;

    cout << "Введите срок гарантии в месяцах: ";
    cin >> warranty;
}

void Product::output() const {
    cout << *this << endl;
}

void Product::reducePrice() {
    price *= 0.5;
}

void Product::setData(const string& name, double price, int warranty) {
    this->name = name;
    this->price = price;
    this->warranty = warranty;
}

void Product::setData(double price) {
    this->price = price;
}

bool Product::operator<(const Product& other) const {
    return price < other.price;
}

bool Product::operator>(const Product& other) const {
    return price > other.price;
}

bool Product::operator==(const Product& other) const {
    return price == other.price;
}

Product& Product::operator=(const Product& other) {
    if (this != &other) {
        name = other.name;
        price = other.price;
        warranty = other.warranty;
    }

    return *this;
}

istream& operator>>(istream& in, Product& product) {
    cout << "Введите наименование товара: ";
    getline(in >> ws, product.name);

    cout << "Введите цену товара: ";
    in >> product.price;

    cout << "Введите срок гарантии в месяцах: ";
    in >> product.warranty;

    return in;
}

ostream& operator<<(ostream& out, const Product& product) {
    out << "Наименование: " << product.name << '\n'
        << "Цена: " << product.price << '\n'
        << "Гарантия: " << product.warranty << " мес.";

    return out;
}

Product Product::operator+(double amount) const {
    Product result(*this);
    result.price += amount;
    return result;
}

double Product::operator-(const Product& other) const {
    return price - other.price;
}