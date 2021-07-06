#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>

class Node
{
public:
    int info;
    Node *next;

    Node() : next(nullptr) {}
    Node(int info, Node *next) : info(info), next(next) {}
};

class LinkedList
{
public:
    LinkedList();

    bool isEmpty();
    void addToHead(int data);
    int removeFromHead();

    // TBD - other methods

    void traverse(char separator = ' ');

private:
    Node *HEAD;
    Node *TAIL;
};

#endif