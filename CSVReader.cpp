#include <iostream>
#include "CSVReader.h"

CSVReader::CSVReader() {

};

std::vector<OrderBook> CSVReader::ReadCSV(std::string csv_file) {
    std::vector<OrderBook> order_book;

    return order_book;
};

std::vector<std::string> CSVReader::Tokenise(std::string csv_line, char separator) {
    std::vector<std::string> tokens;

    return tokens;
};

OrderBook CSVReader::StringsToOrderBook(std::vector<std::string> tokens) {
    double price, amount;

    if (tokens.size() != 5) { // bad tokens
        std::cout << "Bad!" << std::endl;

        throw std::exception{};
    }

    // we have 5 tokens
    try {
        price = std::stod(tokens[3]);
        amount = std::stod(tokens[4]);
    } catch(std::exception& e) {
        std::cout << "Bad! " << tokens[3] << std::endl;
        std::cout << "Bad! " << tokens[4] << std::endl;
        throw;
    }

    OrderBook order_book {
        price,
        amount,
        tokens[0],
        tokens[1],
        OrderBook::StringToOrderBookEnum(tokens[2])
    };

    return order_book;
};
