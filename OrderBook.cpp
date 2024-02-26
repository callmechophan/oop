#include "OrderBook.h"

OrderBook::OrderBook(
    double price,
    double amount,
    std::string timestamp,
    std::string product,
    OrderBookEnum order_book_enum
): price(price), amount(amount), timestamp(timestamp), product(product), order_book_enum(order_book_enum) { // constructor initialisation lists
    this -> price = price;
    this -> amount = amount;
    this -> timestamp = timestamp;
    this -> product = product;
    this -> order_book_enum = order_book_enum;
};