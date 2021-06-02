#include "LinkedList.h"

class Stack
{
public:
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
};

class LinkedListStack : public Stack
{
public:
    virtual bool isEmpty()
    {
        // TBD
    }

    virtual void push(int data)
    {
        list.addToHead(data);
    }

    virtual int pop()
    {
        return list.removeFromHead();
    }

private:
    LinkedList list;
};