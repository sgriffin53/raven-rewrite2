INCLUDE = -I./libs/libchess/src
SOURCES = $(wildcard src/*.cpp) $(wildcard libs/libchess/src/*.cpp) $(wildcard src/protocols/*.cpp)
FLAGS   = -std=c++17
DFLAGS  = -Wpedantic -Wall -Wextra -Wshadow
RFLAGS  = -Ofast -DNDEBUG

debug:
	g++ $(SOURCES) $(INCLUDE) $(FLAGS) $(DFLAGS) -o bin/raven-debug

release:
	g++ $(SOURCES) $(INCLUDE) $(FLAGS) $(RFLAGS) -o bin/raven
