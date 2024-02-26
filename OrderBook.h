#pragma once

#include <string>

enum class OrderBookEnum {bid, ask, unknown};

class OrderBook {
    public:
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookEnum order_book_enum;

        static OrderBookEnum StringToOrderBookEnum(std::string string);

        // constructors
        OrderBook(
            double price,
            double amount,
            std::string timestamp,
            std::string product,
            OrderBookEnum order_book_enum
        );
};