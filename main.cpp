#include <iostream>
#include "product.h"
#include "product_logging.h"
#include "product_log_parser.h"

// g++ -std=c++20 -O4 main.cpp product.cpp product_logging.cpp product_log_parser.cpp -o main && main
int main(void)
{
    using namespace std;
    ProductLogging logger("log.txt");
    ProductLogParser parser("log.txt");
    Product milk("Milk", 120, 25, 10);
    Product bread("Bread", 35, 40, 25);
    logger.log_product(milk);
    logger.log_product(bread);

    Product milk_parsed = parser.parse_product();

    std::vector<Product> parsed_all = parser.parse_all_file();
    for (const Product &product : parsed_all)
        cout << product << endl;
    
    cout << "Milk: " << milk_parsed << endl;

    Product milk_parsed_to_name = parser.parse_product(milk.get_name());
    cout << "Named: " << milk_parsed_to_name.format() << endl;
    return 0;
}
