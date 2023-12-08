

compile: application.o main.o link

application.o: application.cpp
	g++ -c application.cpp

main.o: main.cpp
	g++ -c main.cpp

link:
	g++ -o main application.o main.o -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f main
	rm -f *.o
