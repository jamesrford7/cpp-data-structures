#include <iostream>
#include "linked-list.h"

int main(int argc, const char * argv[]) {
    
    linkedList* list = new linkedList();
    
    list->addNodeToFront(1);
    list->addNodeToFront(2);
    list->addNodeToFront(3);
    list->addNodeToFront(4);
    list->addNodeToFront(5);
    list->addNodeToFront(6);
    list->addNodeToFront(7);
    
    list->deleteNode(3);
    list->deleteNode(4);
    list->deleteNode(6);
    
    list->printNodes();
    
    return 0;
    
}
