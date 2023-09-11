default: clean build run

clean: CLineGame
	rm CLineGame

build: CLineGame.cpp RPG/entity.cpp RPG/entity.hpp RPG/player.hpp RPG/player.cpp RPG/enemy.hpp RPG/enemy.cpp
	g++ CLineGame.cpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp -o CLineGame

run: CLineGame
	./CLineGame