#include "OrderBooks.h"

OrderBooks::OrderBooks(
    double price,
    double amount,
    std::string timestamp,
    std::string product,
    OrderBook order_book
): price(price), amount(amount), timestamp(timestamp), product(product), order_book(order_book) { // constructor initialisation lists
    this -> price = price;
    this -> amount = amount;
    this -> timestamp = timestamp;
    this -> product = product;
    this -> order_book = order_book;
};