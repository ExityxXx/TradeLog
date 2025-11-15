#include <iostream>
#include "product.h"
#include "product_logging.h"

int main(void)
{
    using namespace std;
    ProductLogging logger("log.txt");
    Product milk("Milk", 120, 25, 10);
    Product bread("Bread", 35, 40, 12);
    Product sugar("Sugar", 280, 10, 2);

    logger.log_product(milk);
    logger.log_product(bread);
    logger.log_product(sugar);
    return 0;
}
