#ifndef linked_list_h
#define linked_list_h

#include "node.h"

class linkedList
{

private:
    node* head;
    int count;
    
public:
    linkedList();
    void addNodeToFront(int value);
    void addNodeToBack(int value);
    void deleteNode(int value);
    void printNodes();
};

#endif /* linked_list_h */
