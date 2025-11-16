#ifndef PRODUCT_LOG_PARSER_H_
#define PRODUCT_LOG_PARSER_H_
#include <fstream>
#include <string>
#include <vector>
#include "product.h"

class ProductLogParser
{
private:
    std::ifstream file;
    std::string file_name;
public:
    ProductLogParser(const std::string &file_name)
        : file(file_name), file_name(file_name) {};
    Product parse_product();
    Product parse_product(const std::string &product_name);
    std::vector<Product> parse_all_file();
};

#endif
