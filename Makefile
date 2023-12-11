
compile: application.o linear.o squared.o exp.o main.o link

test: compile main_test.o test_squared.o test_linear.o test_exp.o link_test 

application.o: application.cpp
	g++ -std=c++17 -c application.cpp

linear.o: linear.cpp
	g++ -c linear.cpp

squared.o: squared.cpp
	g++ -c squared.cpp

exp.o: exp.cpp
	g++ -c exp.cpp

test_squared.o: test_squared.cpp
	g++ -c test_squared.cpp

test_linear.o: test_linear.cpp
	g++ -c test_linear.cpp

test_main.o: main_test.cpp
	g++ -c main_test.cpp

main.o: main.cpp
	g++ -c main.cpp

link:
	g++ -o main application.o linear.o squared.o exp.o main.o -lsfml-graphics -lsfml-window -lsfml-system

link_test:
	g++ -o test main_test.o test_linear.o test_squared.o test_exp.o  linear.o squared.o exp.o -lgtest -lgtest_main -lpthread

clean:
	rm -f main
	rm -f *.o
	rm -f test
