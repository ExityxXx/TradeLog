#include "product_logging.h"

void ProductLogging::log_product(const Product &product)
{
    log << product;
    log << std::endl;
}
