#pragma once

#include "OrderBook.h"
#include "CSVReader.h"

class ManageOrderBook {
    public:
        ManageOrderBook(std::string csv_filename);
        std::vector<std::string> GetKnownProducts();
        std::vector<OrderBook> GetOrders(
            OrderBookEnum order_book_enum,
            std::string product,
            std::string timestamp
        );
    
    private:
        std::vector<OrderBook> orders;
};
