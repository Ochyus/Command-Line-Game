#include <iostream>
#include <string>
#include <regex>
#include <vector>
#include "RPG/entity.hpp"
#include "RPG/player.hpp"
#include "RPG/enemy.hpp"


// Function to tokenize a string by multiple delimiters
std::vector<std::string> tokenizeString(const std::string &input)
{
    std::vector<std::string> tokens;
    std::regex delimiterRegex("[\\s\t]+"); // Matches one or more whitespace characters

    std::sregex_token_iterator it(input.begin(), input.end(), delimiterRegex, -1);
    std::sregex_token_iterator end;

    while (it != end)
    {
        tokens.push_back(*it);
        it++;
    }

    return tokens;
}

int main()
{
    while (true)
    {
        // Input game logic

        std::string inputString;

        // Prompt the user for input
        std::cout << "Enter text (or 'exit' to quit): ";
        std::getline(std::cin, inputString);

        if (inputString == "exit")
        {
            break; // Exit the loop if the user enters 'exit'
        }

        std::vector<std::string> tokens = tokenizeString(inputString);

        for (size_t i = 0; i < tokens.size(); i++)
        {
            std::cout << tokens[i] << std::endl;
        }
    }

    return 0;
}