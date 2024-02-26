#pragma once

#include <vector>
#include "OrderBook.h"

class CSVReader {
    public:
        CSVReader();
        static std::vector<OrderBook> ReadCSV(std::string csv_file);
    
    private:
        static std::vector<std::string> Tokenise(std::string csv_line, char separator);
        static OrderBook StringsToOrderBook(std::vector<std::string> tokens);
};
