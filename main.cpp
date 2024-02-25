#include <iostream>

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

void ProcessUserOption(int user_option) {
    if (user_option == 0) { // bad input
        std::cout << "Invalid choice. Re-input!" << std::endl;
    }
}


int main() {
    while (true) {
        PrintMenu();

        int user_option = GetUserOption();

        ProcessUserOption(user_option);
    }

    return 0;
}
