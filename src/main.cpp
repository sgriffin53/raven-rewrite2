#include <iostream>
#include "protocols/uci.hpp"

int main(int argv, char **argc) {
    std::string input;
    std::getline(std::cin, input);

    if (input == "uci") {
        uci::listen();
    } else if (input == "xboard") {
        std::cerr << "xboard protocol not supported" << std::endl;
    } else {
        std::cerr << "Input not recognised" << std::endl;
    }

    return 0;
}
