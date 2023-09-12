default: clean build run

clean: CLineGame
	rm CLineGame

build: CLineGame.cpp RPG/entity.hpp RPG/entity.cpp RPG/player.hpp RPG/player.cpp RPG/enemy.hpp RPG/enemy.cpp Main\ Menu/mainmenu.hpp Main\ Menu/mainmenu.cpp
	g++ CLineGame.cpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp Main\ Menu/mainmenu.cpp -o CLineGame

run: CLineGame
	./CLineGame