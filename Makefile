CXX = g++
CXXFLAGS = -std=c++17 -Iinclude
SRC = main.cpp src/Game.cpp src/Player.cpp src/Weapon.cpp src/Enemy.cpp
OUT = combat-game

all:
	$(CXX) $(CXXFLAGS) $(SRC) -o $(OUT)

clean:
	rm -f $(OUT)
