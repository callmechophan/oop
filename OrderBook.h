#include <iostream>

enum class OrderBookEnum {bid, ask};

class OrderBook {
    public:
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookEnum order_book_enum;

        // constructors
        OrderBook(
            double price,
            double amount,
            std::string timestamp,
            std::string product,
            OrderBookEnum order_book_enum
        );
};