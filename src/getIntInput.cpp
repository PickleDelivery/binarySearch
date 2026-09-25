#include <iostream>
#include <limits>

int getIntInput(const std::string& prompt, int min, int max){
    int input_val;
    
    while (true) {
        std::cout << prompt;
        std::cin >> input_val;

        if (std::cin.fail()) {
            std::cout << "Bad input, please enter a valid whole number.\n";
            
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (std::cin.peek() != '\n') {
            std::cout << "Please no extra characters.\n";
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (input_val < min || input_val > max){
            std::cout << "Number must be in range of " << min;
            std::cout << " and " << max <<",";
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        return input_val;
    }
}