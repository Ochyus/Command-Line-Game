# Command Line Game
## Usage
Once downloaded or forked. Run the command make and the project will be compiled and the executable will be created for you to run.
~~~
make
~~~
this runs several commands, one is the "make clean" command which is equivalent to the terminal block below.
~~~
rm CLineGame
~~~
This clears out the current executable files.

The next command it runs is the "make build" command which is equivalent to the terminal block below.
~~~
g++ CLineGame.cpp RPG/entity.cpp RPG/player.cpp RPG/enemy.cpp Main\ Menu/mainmenu.cpp -o CLineGame
~~~
This builds the executable from all of the files it needs.

The last command it runs is the "make run" command which is equivalent to the terminal block below.
~~~
./CLineGame
~~~
This runs the file that was created in the last few steps.

Once you run the make command once, you can double click on the file to run it.

## The Game
This game uses the terminal with a large amount of custom commands.