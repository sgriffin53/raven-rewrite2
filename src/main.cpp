#include <iostream>
#include <libchess/position.hpp>

int main(int argv, char **argc) {
    libchess::Position pos{"startpos"};
    std::cout << pos << std::endl;
    return 0;
}
