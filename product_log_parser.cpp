#include "product_log_parser.h"

Product ProductLogParser::parse_product()
{
    std::string t1;
    int t2, t3, t4;
    file >> t1 >> t2 >> t3 >> t4;
    return Product(t1, t2, t3, t4);
}

Product ProductLogParser::parse_product(const std::string &product_name)
{
    std::ifstream local_thread;
    std::string t1;
    int t2, t3, t4;
    local_thread.open(file_name);
    while (local_thread >> t1 >> t2 >> t3 >> t4)
    {
        if (t1 == product_name)
        {
            local_thread.close();
            return Product(t1, t2, t3, t4);
        }   
    }
    local_thread.close();
    return Product("Not found product '" + product_name + "'", 0, 0, 0);
}

std::vector<Product> ProductLogParser::parse_all_file()
{
    std::ifstream local_thread;
    std::vector<Product> result;
    std::string t1;
    int t2, t3, t4;
    local_thread.open(file_name);
    while (local_thread >> t1 >> t2 >> t3 >> t4)
        result.push_back(Product(t1,t2,t3,t4));
    local_thread.close();
    return result;
}
