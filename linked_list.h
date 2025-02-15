#include <iostream>
#include <string>
#include <cmath>
#pragma once
/*
    Meant to serve as a linked list ONLY for chaining hash tables
    :)
 */

struct Node {
    std::string key;
    Node* next;
};

class LinkedList {
    private:
        Node* head; 
        Node* tail;
    public:
        LinkedList();
        void append(std::string str);
        void print();
};