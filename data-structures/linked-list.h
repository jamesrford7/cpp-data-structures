//
//  linked-list.h
//  data-structures
//
//  Created by James Ford on 02/11/2015.
//  Copyright © 2015 James Ford. All rights reserved.
//

#ifndef linked_list_h
#define linked_list_h

struct node {
    
    int value;
    node* next;
    
};

void addNodeToFront(node*& head, int value);

void printNodes(node* head);

void deleteNode(node* head, int value);

#endif /* linked_list_h */
