#include "product.h"

const std::string Product::format() const
{
    const std::string result = name 
        + " "
        + std::to_string(price)
        + " "
        + std::to_string(exists_amount)
        + " "
        + std::to_string(bought);
    return result;
}

std::ostream &operator<<(std::ostream &os, const Product &product)
{
    os << product.format(); 
    return os;
}
