#include <iostream>
#include <string>
#include <cmath>

/*
    Meant to serve as a linked list ONLY for chaining hash tables
    :)
 */

struct Node {
    std::string key;
    Node* next;
};

