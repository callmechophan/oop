#pragma once

#include <vector>
#include "OrderBook.h"

class CSVReader {
    public:
        CSVReader();
        static std::vector<OrderBook> ReadCSV(std::string csv_file);
    
    private:
        static std::vector<std::string> tokenise(std::string csv_line, char separator);
        static OrderBook strings_to_order_book(std::vector<std::string> tokens);
};
