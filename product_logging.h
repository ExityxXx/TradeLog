#ifndef PRODUCT_LOGGING_H_
#define PRODUCT_LOGGING_H_
#include "product.h"
#include <fstream>

/*
Этот класс отвечает за логирование в файл.
В функций 'log_product(const Product &product)' будет совершаться логирование
    и сохранение данных продукта в один файл по структуре:
    Продукт, цена на продажу, кол-во на полках, скупили
    "Milk" 120 25 10
Этот класс не отвечает за парсинг из файла. Он отвечает за сохранение в файл.
*/

class ProductLogging
{
private:
    std::ofstream log;                  // Файл, куда будут сохраняться логи
public:
    explicit ProductLogging(const std::string &file_name)
        : log(file_name.empty() ? "TradeLog_log.txt" : file_name) {};
    ~ProductLogging() { log.close(); };
    void log_product(const Product &product);
};

#endif
