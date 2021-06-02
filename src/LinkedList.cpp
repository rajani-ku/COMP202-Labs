#include <iostream>
#include "LinkedList.h"

LinkedList::LinkedList()
{
    HEAD = nullptr;
    TAIL = nullptr;
}

bool LinkedList::isEmpty()
{
    return HEAD == nullptr && TAIL == nullptr;
}

void LinkedList::addToHead(int element)
{
    Node *newNode = new Node(element, HEAD);

    HEAD = newNode;
    if (TAIL == nullptr)
    {
        TAIL = HEAD;
    }
}

int LinkedList::removeFromHead()
{
    if (!this->isEmpty())
    {
        Node *nodeToDelete = HEAD;
        int data = nodeToDelete->info;
        this->HEAD = nodeToDelete->next;

        if (HEAD == nullptr)
        {
            TAIL = nullptr;
        }

        delete nodeToDelete;

        return data;
    }  
    else 
    {
        // TBD
    }
}

void LinkedList::traverse(char separator)
{

    if (isEmpty())
    {
        std::cout << "List is empty!!\n";
    }
    else
    {
        Node *temp = HEAD;

        while (temp != nullptr)
        {
            std::cout << temp->info << separator;
            temp = temp->next;
        }
        std::cout << std::endl;
    }
}