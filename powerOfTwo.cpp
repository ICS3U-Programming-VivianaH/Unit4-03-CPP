// Copyright 2025 Viviana Hurtado
// Created by: Viviana Hurtado
// Date: April, 2025
// This program that accepts a whole number.
// It then uses a for loop to calculate and
// display the “square”(power of 2) starting
// from 0 until this number
#include <iostream>
#include <string>

int main() {
    std::string user_num_str;
    int user_num;

    // Ask the user to enter a whole number
    std::cout << "Enter a whole number: ";
    std::cin >> user_num_str;

    try {
        // TryCatch from string to int
        user_num = std::stoi(user_num_str);

        // Check if the number is negative
        if (user_num < 0) {
            std::cout << user_num << " is not positive" << std::endl;
        } else {
            int counter = 0;

            // Loop from 0 to the user's number
            while (counter <= user_num) {
                // Square of the current number
                std::cout << counter << "^2 = ";
                std::cout << counter * counter << std::endl;
                counter++;
            }

            // Final message
            std::cout << "Thanks for playing" << std::endl;
        }
    } catch (...) {
        // If the input was not a n int
        std::cout << user_num_str << " is not an integer" << std::endl;
    }
}
