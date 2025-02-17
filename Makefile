all:
	g++ -o encoder main.cpp hash.cpp linked_list.cpp
	./encoder < inputs/common500.txt
