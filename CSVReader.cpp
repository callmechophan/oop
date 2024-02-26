#include "CSVReader.h"

CSVReader::CSVReader() {

};

std::vector<OrderBook> CSVReader::ReadCSV(std::string csv_file) {
    std::vector<OrderBook> order_book;

    return order_book;
};

std::vector<std::string> CSVReader::tokenise(std::string csv_line, char separator) {
    std::vector<std::string> tokens;

    return tokens;
};

OrderBook CSVReader::strings_to_order_book(std::vector<std::string> tokens) {
    OrderBook order_book {
        1,
        1,
        "",
        "",
        OrderBookEnum::bid
    };

    return order_book;
};

