#include "ManageOrderBook.h"

ManageOrderBook::ManageOrderBook(std::string csv_filename) {
    orders = CSVReader::ReadCSV(csv_filename);
};

std::vector<std::string> ManageOrderBook::GetKnownProducts() {
    std::vector<std::string> products;

    return products;
};

std::vector<OrderBook> ManageOrderBook::GetOrders(OrderBookEnum order_book_enum, std::string product, std::string timestamp) {
    std::vector<OrderBook> order_book;

    return order_book;
};