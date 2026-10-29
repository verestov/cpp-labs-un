#ifndef LABS2GRADE_PRODUCT_H
#define LABS2GRADE_PRODUCT_H

#include <iostream>
#include <string>

class Product {
private:
    std::string name;
    double price;
    int warranty; // срок гарантии в месяцах

public:
    Product();
    Product(const std::string& name, double price, int warranty);
    Product(double price);

    ~Product();

    void input();
    void output() const;

    void reducePrice();

    void setData(const std::string& name, double price, int warranty);
    void setData(double price);

    bool operator<(const Product& other) const;
    bool operator>(const Product& other) const;
    bool operator==(const Product& other) const;

    Product& operator=(const Product& other);

    friend std::istream& operator>>(std::istream& in, Product& product);
    friend std::ostream& operator<<(std::ostream& out, const Product& product);

    Product operator+(double amount) const;
    double operator-(const Product& other) const;
};


#endif //LABS2GRADE_PRODUCT_H
