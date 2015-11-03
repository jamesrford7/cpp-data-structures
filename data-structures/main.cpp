#include <iostream>
#include "linked-list.h"

int main(int argc, const char * argv[]) {
    
    linkedList* list = new linkedList();
    
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
    
    list->printNodes();
    
    return 0;
    
}
