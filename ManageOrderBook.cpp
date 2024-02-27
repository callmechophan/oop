#include <iostream>
#include "ManageOrderBook.h"

ManageOrderBook::ManageOrderBook(std::string csv_filename) {
    orders = CSVReader::ReadCSV(csv_filename);
};

std::vector<std::string> ManageOrderBook::GetKnownProducts() {
    std::vector<std::string> products;
    std::map<std::string, bool> product_map;

    for (OrderBook& i : orders) {
        product_map[i.product] = true;
    }

    // now flatten the map to a vector of strings
    for (auto const& i : product_map) {
        products.push_back(i.first);
    }

    return products;
};

std::vector<OrderBook> ManageOrderBook::GetOrders(OrderBookEnum order_book_enum, std::string product, std::string timestamp) {
    std::vector<OrderBook> order_book;

    return order_book;
};