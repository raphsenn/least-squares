

compile: application.o linear.o squared.o  main.o link

application.o: application.cpp
	g++ -std=c++17 -c application.cpp

linear.o: linear.cpp
	g++ -c linear.cpp

squared.o: squared.cpp
	g++ -c squared.cpp

main.o: main.cpp
	g++ -c main.cpp

link:
	g++ -o main application.o linear.o squared.o main.o -lsfml-graphics -lsfml-window -lsfml-system

clean:
	rm -f main
	rm -f *.o
