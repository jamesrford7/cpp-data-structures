//
//  main.cpp
//  data-structures
//
//  Created by James Ford on 02/11/2015.
//  Copyright © 2015 James Ford. All rights reserved.
//

#include <iostream>
#include "linked-list.h"

int main(int argc, const char * argv[]) {
    
    node* head = NULL;
    
    addNodeToFront(head, 1);
    addNodeToFront(head, 2);
    addNodeToFront(head, 3);
    addNodeToFront(head, 4);
    addNodeToFront(head, 5);
    
    deleteNode(head, 3);
    
    printNodes(head);
    
    return 0;
    
}
