#include <iostream>
#include <vector>

enum class OrderBook{bid, ask};

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
        ) {
            this -> price = price;
            this -> amount = amount;
            this -> timestamp = timestamp;
            this -> product = product;
            this -> order_book = order_book;
        }
};

void PrintMenu() {
    std::cout << "\nChoose an option:" << std::endl;
    std::cout << "1. Print help" << std::endl;
    std::cout << "2. Print exchange stats" << std::endl;
    std::cout << "3. Make an offer" << std::endl;
    std::cout << "4. Make a bid" << std::endl;
    std::cout << "5. Print wallet" << std::endl;
    std::cout << "6. Continue" << std::endl;
    std::cout << "==========" << std::endl;
}

int GetUserOption() {
    int user_option;
    std::cin >> user_option;
    std::cout << "You chose: " << user_option << std::endl;

    return user_option;
}

// 1
void PrintHelp() {
    std::cout << "Help" << std::endl;
}

// 2
void PrintMarketStats() {

}

// 3
void EnterOffer() {

}

// 4
void EnterBid() {

}

// 5
void PrintWallet() {

}

// 6
void GoToTheNextTimeFrame() {

}

void ProcessUserOption(int user_option) {
    if (user_option == 0) { // bad input
        std::cout << "Invalid choice. Re-input!" << std::endl;
    }

    if (user_option == 1) {
        PrintHelp();
    }

    if (user_option == 2) {
        PrintMarketStats();
    }

    if (user_option == 3) {
        EnterOffer();
    }

    if (user_option == 4) {
        EnterBid();
    }

    if (user_option == 5) {
        PrintWallet();
    }

    if (user_option == 6) {
        GoToTheNextTimeFrame();
    }
}

int main() {
    OrderBooks order {7.44564869, 0.02187308, "2020/03/17 17:01:24.884492", "ETH/BTC", OrderBook::bid};

    std::cout << order.timestamp << std::endl;

    // while (true) {
    //     PrintMenu();
    //     int user_option = GetUserOption();
    //     ProcessUserOption(user_option);
    // }
}
