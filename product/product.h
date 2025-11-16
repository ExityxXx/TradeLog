#ifndef LOG_LOGIC_H_
#define LOG_LOGIC_H_
#include <string>
#include <ostream>

class Product
{
private:
    std::string name;                   // Имя продукта
    int price;                          // Цена на продажу
    int exists_amount;                  // Количество на полках
    int bought;                         // Скупили
public:
    explicit Product() : name("None Product"), price(0),
        exists_amount(0), bought(0) {};
    explicit Product(const std::string &new_name, int new_price, int new_exists_amount, int new_bought)
        : name(new_name.empty() ? "Empty Product Name" : new_name),
        price(new_price), exists_amount(new_exists_amount), bought(new_bought) {};

    const std::string &get_name() const { return name; }
    int get_price() const { return price; }
    int get_exists_amount() const { return exists_amount; }
    int get_bought() const { return bought; }
    const std::string format() const;
    friend std::ostream &operator<<(std::ostream &os, const Product &product);
};

#endif