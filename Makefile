default: run build clean


build: CLineGame.cpp RPG/entity.hpp RPG/entity.cpp RPG/player.hpp RPG/player.cpp RPG/enemy.hpp RPG/enemy.cpp Main\ Menu/mainmenu.hpp Main\ Menu/mainmenu.cpp
	g++ CLineGame.cpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp Main\ Menu/mainmenu.cpp -o CLineGame

run: CLineGame
	./CLineGame

clean: CLineGame
	rm CLineGame

tests: buildtests runtests cleantests

buildtests: tests/test.cpp tests/test.hpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp Main\ Menu/mainmenu.cpp
	g++ tests/test.cpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp Main\ Menu/mainmenu.cpp -o tests/test

runtests: tests/test
	./tests/test

cleantests: tests/test
	rm tests/test