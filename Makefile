all:
	rm encoder
	g++ -o encoder main.cpp hash.cpp
	./encoder < inputs/atoz.txt