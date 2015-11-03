#include <iostream>
#include "linked-list.h"
#include "stack.h"

int main(int argc, const char * argv[]) {
    
    /*linkedList* list = new linkedList();
    
    list->addNodeToFront(1);
    list->addNodeToFront(55);
    list->addNodeToFront(23);
    list->addNodeToFront(13);
    list->addNodeToFront(12);
    list->addNodeToFront(67);
    list->addNodeToFront(44);
    
    list->deleteNode(3);
    
    list->addNodeToBack(2);
    list->addNodeToFront(34);
    list->addNodeToFront(21);
    list->addNodeToFront(2);
    
    list->printNodes();*/
    
    stack* s = new stack();
    
    s->push(2);
    s->push(5);
    s->push(66);
    s->pop();
    s->push(45);
    s->push(23);
    
    s->printStack();
    
    return 0;
    
}
