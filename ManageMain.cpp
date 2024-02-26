#include <iostream>
#include "ManageMain.h"

ManageMain::ManageMain() {

};

void ManageMain::init() {
    int user_option;

    while (true) {
        PrintMenu();
        user_option = GetUserOption();
        ProcessUserOption(user_option);

        std::cout << "\n";
    }
};

void ManageMain::PrintMenu() {
    std::cout << "Choose an option:" << std::endl;
    std::cout << "1. Print help" << std::endl;
    std::cout << "2. Print exchange stats" << std::endl;
    std::cout << "3. Make an offer" << std::endl;
    std::cout << "4. Make a bid" << std::endl;
    std::cout << "5. Print wallet" << std::endl;
    std::cout << "6. Continue" << std::endl;
    std::cout << "====================" << std::endl;
};

int ManageMain::GetUserOption() {
    int user_option;
    std::cin >> user_option;
    std::cout << "You chose: " << user_option << std::endl;

    return user_option;
};

// 1
void ManageMain::PrintHelp() {
    std::cout << "Help" << std::endl;
};

// 2
void ManageMain::PrintMarketStats() {

};

// 3
void ManageMain::EnterOffer() {

};

// 4
void ManageMain::EnterBid() {

};

// 5
void ManageMain::PrintWallet() {

};

// 6
void ManageMain::GoToTheNextTimeFrame() {

};

void ManageMain::ProcessUserOption(int user_option) {
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
};
