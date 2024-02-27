#include <iostream>
#include <fstream>
#include "CSVReader.h"

CSVReader::CSVReader() {

};

std::vector<OrderBook> CSVReader::ReadCSV(std::string csv_filename) {
    std::vector<OrderBook> order_books;

    std::ifstream csv_file{csv_filename};
    std::string line;

    if (csv_file.is_open()) {
        while (std::getline(csv_file, line)) {
            try {
                OrderBook order_book = StringsToOrderBook(Tokenise(line, ','));
                order_books.push_back(order_book);
            } catch(const std::exception& e) {
                std::cout << "Bad!!!" << std::endl;
            }
        }
    }

    return order_books;
};

std::vector<std::string> CSVReader::Tokenise(std::string csv_line, char separator) {
    std::vector<std::string> tokens;

    signed int start, end;
    std::string token;

    start = csv_line.find_first_not_of(separator, 0);

    do {
        end = csv_line.find_first_of(separator, start);

        if (start == csv_line.length() || start == end) {
            break;
        }

        if (end >= 0) {
            token = csv_line.substr(start, end - start);
        } else {
            token = csv_line.substr(start, csv_line.length() - start);
        }

        tokens.push_back(token);

        start = end + 1;
    } while(end > 0);

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
