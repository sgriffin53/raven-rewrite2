#include <iostream>
#include <libchess/position.hpp>
#include <sstream>

namespace uci {

void uci() {
    std::cout << "id name Raven" << std::endl;
    std::cout << "id author Steve Griffin" << std::endl;
    std::cout << "uciok" << std::endl;
}

void ucinewgame() {
}

void isready() {
}

void position() {
}

void moves() {
}

void go() {
}

void ponderhit() {
}

void listen() {
    uci();

    libchess::Position pos{"startpos"};

    while (true) {
        std::string input;
        std::string word;
        std::getline(std::cin, input);
        std::stringstream stream{input};

        while (stream >> word) {
            if (word == "ucinewgame") {
                ucinewgame();
            } else if (word == "isready") {
                isready();
            } else if (word == "position") {
                position();
            } else if (word == "moves") {
                moves();
            } else if (word == "go") {
                go();
            } else if (word == "ponderhit") {
                ponderhit();
            } else if (word == "print" || word == "display") {
                std::cout << pos << std::endl;
            } else if (word == "quit") {
                return;
            } else {
            }
        }
    }
}

}  // namespace uci
