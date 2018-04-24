.PHONY: vector clean

display: display/main.cpp
	g++ display/main.cpp -looyw `pkg-config --libs allegro-5`
	./a.out

vector: vector/main.cpp
	g++ vector/main.cpp -looyw `pkg-config --libs allegro-5`
	./a.out

clean:
	-rm a.out
