default: build run clean


build: CLineGame.cpp RPG/entity.hpp RPG/entity.cpp Main\ Menu/mainmenu.hpp Main\ Menu/mainmenu.cpp
	g++ CLineGame.cpp Main\ Menu/mainmenu.cpp RPG/entity.cpp -o CLineGame

run: CLineGame
	./CLineGame

clean: CLineGame
	rm CLineGame

tests: buildtests runtests cleantests


buildtests: tests/test.cpp tests/test.hpp Main\ Menu/mainmenu.cpp RPG/entity.cpp
	g++ tests/test.cpp Main\ Menu/mainmenu.cpp RPG/entity.cpp -o tests/test

runtests: tests/test
	./tests/test

cleantests: tests/test
	rm tests/test
	