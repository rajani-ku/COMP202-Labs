#include "LinkedList.h"
#include "Stack.h"

int main() 
{
    LinkedList list;
    
    list.addToHead(5);
    list.addToHead(10);
    list.addToHead(15);

    list.traverse(',');

    list.removeFromHead();
    
    list.traverse();

    list.removeFromHead();
    
    list.traverse();

    list.removeFromHead();
    
    list.traverse();

    list.removeFromHead();
    
    list.traverse();

    LinkedListStack s;
    s.push(5);
    s.push(10);

    std::cout << s.pop() << ", " << s.pop() << std::endl; 
}