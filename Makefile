all:
	g++ -o encoder main.cpp hash.cpp linked_list.cpp
	./encoder < inputs/atoz.txt
