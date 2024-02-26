#include <iostream>

enum class OrderBook {bid, ask};

class OrderBooks {
    public:
        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBook order_book;

        // constructors
        OrderBooks(
            double price,
            double amount,
            std::string timestamp,
            std::string product,
            OrderBook order_book
        );
};